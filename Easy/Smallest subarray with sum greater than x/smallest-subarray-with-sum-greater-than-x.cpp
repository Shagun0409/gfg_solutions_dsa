//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {int sum=0;
    
        // Your code goes here 
       int ans=INT_MAX;
       int i=0;
       int j=0;
       while(j<n){
           sum=sum+arr[j];
           while(sum>x){
               ans=min(ans,j-i+1);
               sum=sum-arr[i];
               i++;
           }
           j++;
       }
       return ans !=INT_MAX?ans : 0;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends