//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int Maximize(vector<int> arr) {
        int mod = 1000000007;
        
        sort(arr.begin() , arr.end());
        
        long long int sum = 0;
        
        for(int i = 0 ; i < arr.size() ; i++){
            sum = (sum +( (long)arr[i] * i)) % mod;
        }
        
        return (int) sum;
        
    }


};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends