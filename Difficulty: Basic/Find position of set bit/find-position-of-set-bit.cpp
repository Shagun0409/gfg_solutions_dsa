//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
   
 
    
    int findPosition(int N) {
        // code here
        if (N == 0 || (N & (N - 1)) != 0) {
            return -1;
        }

        int position = 1;  // Position counter starts at 1 (LSB is position 1)

        // Shift bits to the right until the set bit is found
        while ((N & 1) == 0) {
            N = N >> 1;  // Right shift
            position++;  // Increment position
        }

        return position;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends