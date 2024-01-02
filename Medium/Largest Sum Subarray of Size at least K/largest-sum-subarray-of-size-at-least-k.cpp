//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long sum=0,maxx=0,prv=0;
        int i=0,j=0;
        
        while(i<k){
            sum=sum+a[i++];
        }
        maxx=sum;
        
        while(i<n){
            sum=sum+a[i++];
            prv=prv+a[j++];
            maxx=max(maxx,sum);
            
            if(prv<0){
                sum=sum-prv;
                prv=0;
                maxx=max(sum,maxx);
            }
        }
        
        return maxx;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends