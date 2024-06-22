//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        int n=sentence.size();
       long long ans=-1;
       
       for(int i=0;i<n;i++){
           
       
       if(!isdigit(sentence[i])) continue;
       
       else{
           
           bool isNine = false; 
           long long str=0;
           
           while(i<n && isdigit(sentence[i])){
               int digit=sentence[i]-'0';
               if(digit==9) isNine=true;
               str=str*10+digit;
               i++;
           }
           
           if (!isNine) ans = max(ans, str); 
       }
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends