//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    
    vector<int> func(int num){
        vector<int> b;
        int i=0;
        while(num!=0){
            b.push_back(num%2);
            num=num/2;
            
        }
        return b;
    }
    int countBitsFlip(int a, int b){
        
        // Your logic here
        
        int count=0;
         
      vector<int> b1 = func(a);  
        vector<int> b2 = func(b);
        
        int maxSize = max(b1.size(), b2.size());
        while(b1.size() < maxSize) b1.push_back(0);
        while(b2.size() < maxSize) b2.push_back(0);
     
     for(int i=0;i<maxSize;i++){
         if(b1[i]!=b2[i]){
             count++;
         }else{
             continue;
         }
     }
     return count;
        
        
        
        
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}
// } Driver Code Ends