//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minSteps(int d) {
     
        // code here
        int sum=0;
        int step=0;
        while(sum<d){
            step++;
            sum=sum+step;
        }
        while((sum-d)&1){
            sum=sum-(2*(sum-d));
            step++;
            sum=sum+step;
        }
        return step;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends