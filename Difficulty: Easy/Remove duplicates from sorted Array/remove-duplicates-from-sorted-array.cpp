//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int remove_duplicate(vector<int> &arr) {
        // code here
        
            set<int> uniqueElements;
        
        // Insert elements into the set
        for (int num : arr) {
            uniqueElements.insert(num);
        }
        
        // Clear the original array
        arr.clear();
        
        // Insert the unique elements back into the array
        for (int num : uniqueElements) {
            arr.push_back(num);
        }
        
        // Return the size of the set (number of unique elements)
        return uniqueElements.size();
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.remove_duplicate(arr);
        for (int i = 0; i < ans; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends