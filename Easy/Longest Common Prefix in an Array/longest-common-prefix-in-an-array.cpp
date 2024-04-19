//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        
        if(N==0) return "";
        if(N==1) return arr[0];
        sort(arr,arr+N);
        string res="";
        string f=arr[0];
        string l=arr[N-1];
        
        int en=f.length();
        for(int i=0;i<en;i++){
            if(f[i]==l[i])   
            {
                res=res+f[i];
                
            }
            else{
                    break;
                }
            
        }
        
         if(res== ""){
            res ="-1";
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends