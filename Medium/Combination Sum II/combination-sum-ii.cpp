//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:



 void find(int idx, int k, vector<int>& temp, vector < vector<int>> & res,vector<int>& arr)
     {
        if (k == 0) {
            res.push_back(temp);
            return;
        }
        for (int i = idx; i < arr.size(); ++i) {
            if (arr[i] > k)
                break;
            if(i>idx && arr[i]==arr[i-1]) continue;
            temp.push_back(arr[i]);
            find(i + 1, k - arr[i], temp, res,arr);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        
         vector<int> temp;
        vector < vector<int>> res;
        sort(arr.begin(), arr.end());
        find(0, k, temp, res, arr);
        return res;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends