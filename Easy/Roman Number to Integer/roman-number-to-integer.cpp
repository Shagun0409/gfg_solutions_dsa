//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        
        
unordered_map<char,int>digits;

    digits['M']=1000;

    digits['D']=500;

    digits['C']=100;

    digits['L']=50;

    digits['X']=10;

    digits['V']=5;

    digits['I']=1;
    
    int ans=0;
    for(int i=0;i<str.length();i++){
        if(digits[str[i]]<digits[str[i+1]]){
            ans=ans-digits[str[i]];
        }
        else{
            ans=ans+digits[str[i]];
        }
    }
    return ans;

        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends