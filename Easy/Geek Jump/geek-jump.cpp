//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  int solve(int idx,vector<int>& dp,vector<int>& height){
       
        
        if(idx<=0) return 0;
        int right = INT_MAX;
        if(dp[idx]!=-1) return dp[idx];
        int left=solve(idx-1,dp,height)+ abs(height[idx]-height[idx-1]);
        if(idx>1){
            right=solve(idx-2,dp,height)+ abs(height[idx]-height[idx-2]);
            
        }
        dp[idx]=min(left,right);
        return dp[idx];
  }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
       
        vector<int> dp (n,-1);
       return solve(n-1,dp,height);
        
       
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends