//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    long long int f(string s, int k) {
        vector<int> freq(26, 0);
        int i = 0;
        int j = 0;
        long long int ans = 0;
        int uniqueCount = 0; // To keep track of the number of unique characters

        while (j < s.size()) {
            if (freq[s[j] - 'a'] == 0) {
                uniqueCount++;
            }
            freq[s[j] - 'a']++;
            
            while (uniqueCount > k) {
                freq[s[i] - 'a']--;
                if (freq[s[i] - 'a'] == 0) {
                    uniqueCount--;
                }
                i++;
            }
            
            ans += (j - i + 1);
            j++;
        }
        
        return ans;
    }

    long long int substrCount(string s, int k) {
        // The number of substrings with exactly k unique characters
        return f(s, k) - f(s, k - 1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends