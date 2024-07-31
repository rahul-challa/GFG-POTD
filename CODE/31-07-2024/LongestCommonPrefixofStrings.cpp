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
           // If size is 0, return empty string
            int N = arr.size();
            if (N == 0)
                return "";

          //If size is 1 then just return that character
            if (N == 1)
                return arr[0];
        
            // Sort the given array
            sort(arr.begin(), arr.end());
        
            // Find the minimum length from 
            // first and last string
            int en = min(arr[0].size(), arr[N - 1].size());
        
            // Now the common prefix in first and 
            // last string is the longest common prefix
            string first = arr[0], last = arr[N - 1];
            int i = 0;
            while (i < en && first[i] == last[i])
                i++;
        
            string pre = first.substr(0, i);
            return pre.size() == 0 ? "-1":pre;
            
    
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