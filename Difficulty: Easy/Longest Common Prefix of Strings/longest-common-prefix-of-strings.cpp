//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
         int n=arr.size();
         if (n==0) return "";
         if(n==1) return arr[0];
        sort(arr.begin(),arr.end());
        string f=arr[0];
        string l=arr[n-1];
   int k=f.length();
   
    string s="";
    
    for(int i=0;i<k;i++){
        if(f[i]==l[i]){
            s+=f[i];
        }else{
            break;
        }
        
    }
    if(s==""){
        return "-1";
    }
    return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends