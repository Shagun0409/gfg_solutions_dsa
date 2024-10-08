//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        long sum=0;
        for(int i=0;i<N;i++){
            sum+=Arr[i];
        }
        sort(Arr.begin(),Arr.end());
        int count=0;
        long val=0;
        for(int i=N-1;i>=0;i--){
            if(val>sum){
                break;
            }else{
                val=val+Arr[i];
                sum=sum-Arr[i];
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends