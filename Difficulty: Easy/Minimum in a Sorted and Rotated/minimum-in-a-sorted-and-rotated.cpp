//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n=arr.size();
        int s=0;
        int e=n-1;
        int ans=arr[0];
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[0]<=arr[mid]){
                s=mid+1;
            }else{
                ans=arr[mid];
                e=mid-1;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends