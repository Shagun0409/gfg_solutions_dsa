//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here
        unordered_map<string, int> um; 
    // Counting frequency of each element 
    for (int i = 0; i <n;i++) { 
        if (um.find(arr[i]) != um.end()) { 
            um[arr[i]]++; 
        } 
        else { 
            um[arr[i]] = 1; 
        } 
    } 
  
    int max = INT_MIN; 
    vector<int> a; 
    // Finding second maximum frequency 
    for (auto j : um) { 
        if (j.second > max) { 
            max = j.second; 
        } 
    } 
    for (auto j : um) { 
        if (j.second != max) { 
            a.push_back(j.second); 
        } 
    } 
    sort(a.begin(), a.end()); 
    // Returning second most frequent element 
    for (auto x : um) { 
        if (x.second == a[a.size() - 1]) { 
            return x.first; 
        } 
    } 
    return "-1"; 
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends