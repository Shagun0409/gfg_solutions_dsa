//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
                               
       map<int,int> mp;
       for(auto ele:arr1){
           mp[ele]=1;
       }
       
       
         for (int ele : arr2) {
        if (mp.find(ele) != mp.end() && mp[ele] == 1)
            mp[ele] = 2;
    }

    // Mark all the elements which are common in first,
    // second and third array with value = 3
    for (int ele : arr3) {
        if (mp.find(ele) != mp.end() && mp[ele] == 2)
            mp[ele] = 3;
    }

    // Store all the common elements
    vector<int> commonElements;
    for (auto ele : mp) {
        if (ele.second == 3)
            commonElements.push_back(ele.first);
    }

    // Return the common elements which are common in all
    // the three sorted arrays
    return commonElements;
}
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends