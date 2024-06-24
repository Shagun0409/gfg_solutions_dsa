//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        
        if(q > (2*n))return 0;
        if(q==1)return 0;
        int i=1;
        int j=q-1;
        int count=0;
        
        if(q<=n+1){
            return q-1;
        }
        else{
            return 2*n+1-q;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends