//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int search(string text, string pat)
	{
	    // Your code goes here
	    int n=text.size();
	    int m=pat.size();
	    for(int i=0;i<n;i++){
	        if(text.substr(i,m)==pat) return 1;
	        
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string x, y;
   		cin >> x >> y;



        Solution ob;
   		cout << ob.search(x, y) << "\n";
   	}

    return 0;
}
// } Driver Code Ends