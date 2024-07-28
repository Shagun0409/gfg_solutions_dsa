//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
         int n = post_exp.size();
        stack<string> st;
        
        for(int i=0; i<n; i++){
            
            char ch = post_exp[i];
            
            // If operand push in stack
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
               st.push(string(1, ch));
               
            // If operator
            else{
                
                string o1 = st.top(); st.pop();
                string o2 = st.top(); st.pop();
                
                string res = ch + o2 + o1;
                st.push(res);
                
            }
            
        }
        
        return st.top();
        
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends