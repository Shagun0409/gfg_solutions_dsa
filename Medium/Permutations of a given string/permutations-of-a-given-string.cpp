//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	
	void help(string s,vector<string> & str,int idx){
	    if(idx==s.size()){
	        str.push_back(s);
	        return ;
	    }
	    
	    for(int i=0;i<s.size();i++){
	        swap(s[idx],s[i]);
	        help(s,str,idx+1);
	        swap(s[idx],s[i]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    
		    vector<string> str;
		    int idx=0;
		    help(S,str,idx);
		    sort(str.begin(),str.end());
		    str.erase(unique(str.begin(),str.end()),str.end());
		    return str;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends