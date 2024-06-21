//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        int str1=0, str2=0, str3=0, str4=0;
       int i=0;
       
      while(str[i]!='/'){
          str1=str1*10+(str[i++]-'0');
          
      }
      i++;
      
      while(str[i]!=','){
          str2=str2*10+(str[i++]-'0');
          
          
      }
      i=i+2;
      
      while(str[i]!='/'){
          str3=str3*10+(str[i]-'0');
          i++;
      }
      i++;
      
       while(i<str.size()){
           str4=str4*10+(str[i]-'0');
          i++;
          
      }
       
       if(str1*str4 > str2*str3)
        
        { return (to_string(str1)+'/'+to_string(str2));}
        else if(str1*str4 < str2*str3){ return (to_string(str3)+'/'+to_string(str4));
      }  else {return "equal";}
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends