//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
  void combination(int ind,int target,vector<int>& arr,vector<vector<int>>& ans,vector<int> ds){
      if(ind==arr.size()){
          if(target==0){
              ans.push_back(ds);
          }
           return;
      }
      
      if(arr[ind]<=target){
          ds.push_back(arr[ind]);
          combination(ind,target-arr[ind],arr,ans,ds);
          ds.pop_back();
      }
      
      combination(ind+1,target,arr,ans,ds);
     
  }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
         sort(A.begin(),A.end());
    vector < vector < int >> ans;
    vector < int > ds;
      
      
        set<int>st(A.begin(),A.end());
        vector<int>arr(st.begin(),st.end());
        
       
    combination(0, B, arr, ans, ds);
    return ans;
       
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends