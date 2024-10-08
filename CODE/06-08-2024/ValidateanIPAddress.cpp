//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int isValid(string str) {
        // your code here
        int counter = 0;
        // count number of '.'
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '.')
                counter++;
        }
        if (counter != 3)
            return 0;

        // stores the valid numbers
        unordered_set<string> st;
        for (int i = 0; i < 256; i++)
            st.insert(to_string(i));
        counter = 0;
        // temp contains the current segment
        string temp = "";
        for (int i = 0; i < str.length(); i++) {

            if (str[i] != '.') {
                temp = temp + str[i];
            } else {
                // if temp doesn't present in valid numbers set
                if (st.count(temp) != 0)
                    counter++;

                temp = "";
            }
        }
        // temp=temp+s[s.length()-1];
        if (st.count(temp) != 0)
            counter++;

        if (counter == 4)
            return 1;
        else
            return 0;
    }
};



//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends