//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> presum;
        int sum=0;
        int maxlen=0;
        for(int i=0;i<N;i++){
            sum=sum+A[i];
            if(sum==K)
            {
                maxlen=max(maxlen,i+1);
            }
            int rem=sum-K;
            
            if(presum.find(rem)!=presum.end()){
                int len=i-presum[rem];
                maxlen=max(maxlen,len);
            }
            if(presum.find(sum)==presum.end()){
                presum[sum]=i;
            }
        }
        return maxlen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends