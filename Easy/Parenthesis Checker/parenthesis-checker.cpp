//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
       stack<char> s;
       for(char i:x){
           if(i=='(' || i=='['|| i=='{'){
               s.push(i);
           }
           else{
               if(s.empty()==true)
               return false;
               else if(i==')' &&  s.top()!='('){
                   return false;
               }
               else if(i==']' &&  s.top()!='['){
                   return false;
               }
               else if(i=='}' &&  s.top()!='{'){
                   return false;
               }
               else{
                   s.pop();
               }
           }
       }
       return (s.empty()==true);
        
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends