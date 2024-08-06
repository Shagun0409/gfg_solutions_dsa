//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int  ans=0;
        int l=0;
        int r=0;
        while(l<arr1.size() && r<arr2.size() ){
            if(arr1[l]>=arr2[r]){
                ans=arr2[r];
                r++;
                
            }
            else if(arr1[l]<arr2[r]){
                ans=arr1[l];
                l++;
                
            }
            k--;
            if(k==0) return ans;
           
        }
        while(l<arr1.size() && k-- !=0) ans = arr1[l++];
        while(r<arr2.size() && k-- !=0) ans = arr2[r++];
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends