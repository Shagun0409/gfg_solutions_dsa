//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        unordered_map<int,int> m;
        int l=0;
        int r=0;
      int  maxlen=0;
        while(r<N){
            m[fruits[r]]++;
            if(m.size()<=2){
                maxlen=max(maxlen,r-l+1);
                
            }
            while(m.size()>2){
                m[fruits[l]]--;
                if(m[fruits[l]]==0){
                    m.erase(fruits[l]);
                }
                l++;
            }
            r++;
            
        }
        return maxlen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends