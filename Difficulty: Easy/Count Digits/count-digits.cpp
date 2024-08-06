//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
   
     int evenlyDivides(int N){
        int count=0;
        int number = N;
      
        
        while(number!=0){
            int divident = number%10;
            if( divident!=0 && N%divident==0){
            count++;
            }
            
            number=number/10;
        }
       
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends