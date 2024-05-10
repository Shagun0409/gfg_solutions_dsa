//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> jugglerSequence(int n) {
        // code here
         vector<int> ans;
        ans.push_back(n);
        if(n == 1) return ans;
        while(true){
            int val = ans.back();
            if(val&1) ans.push_back(floor(pow(val, 1.5)));
            else ans.push_back(floor(pow(val, 0.5)));
            if(ans.back() == 1) break;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends