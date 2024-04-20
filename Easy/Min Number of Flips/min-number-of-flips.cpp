//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{int c1=0;
int c2=0;
 for(int i=0;i<S.size();i++)
    {
        if(i%2==0){
            if(S[i]=='1')
                c1++;
            else
                c2++;
            
        }
        else if(i%2==1){
            if(S[i]=='0')
                c1++;
            else
                c2++;
        }
        
    }
    return(min(c1,c2));
    
}