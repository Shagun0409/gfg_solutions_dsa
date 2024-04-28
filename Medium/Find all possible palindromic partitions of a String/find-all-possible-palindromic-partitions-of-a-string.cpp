//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  
  void parti(int idx,string S,vector<vector<string>> & res,vector<string>& ans){
      if(idx==S.size()){
          res.push_back(ans);
          return ;
      }
      
      for(int i=idx;i<S.size();i++){
          if(ispali(S,idx,i)){
              ans.push_back(S.substr(idx,i-idx+1));
              parti(i+1,S,res,ans);
              ans.pop_back();
          }
          
      }
  }
  
  bool ispali(string s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        
        vector<vector<string>>  res;
        vector<string> ans;
        
        parti(0,S,res,ans);
        return res;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends