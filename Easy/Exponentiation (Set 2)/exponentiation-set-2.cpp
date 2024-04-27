//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int power(int a, long long int b) { 
        //complete the function here
        
        int mod=pow(10,9)+7;
       if(b==0)
      {
          return 1;
      }
      
      if(b==1)
      {
          return a;
      }
      
      
      long long res=power(a,b/2)%mod;
      long long ans=(res*res)%mod;
      
       if(b%2==1)
      {
          return (ans*a)%mod;
      }
      
      else
      {
          return ans%mod;
      }
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 



// } Driver Code Ends