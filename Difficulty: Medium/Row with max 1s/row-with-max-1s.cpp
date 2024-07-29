//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
         int m = arr.size();
        int n = arr[0].size();
        int maxOnes = 0;
        int maxOnesRow = -1;
        
        for(int i = 0; i < m; i++) {
            int oneCount = 0;
            for(int j = 0; j < n; j++) {
                oneCount += arr[i][j];
            }
            if(oneCount > maxOnes){
                maxOnes = oneCount;
                maxOnesRow = i;
            }
        }
        return maxOnesRow;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends