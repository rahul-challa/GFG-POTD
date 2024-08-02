//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    int helper(int i,int j,string &a,string &b,vector<vector<int>> &dp){
        if(i == a.size()){return b.size()-j;}
        if(j == b.size()){return a.size()-i;}
        if(dp[i][j] != -1){return dp[i][j];}
        int ans=1e8;
        if(a[i] == b[j]){
            ans=helper(i+1,j+1,a,b,dp);
        } else{
            ans=min({helper(i,j+1,a,b,dp)+1,helper(i+1,j,a,b,dp)+1,helper(i+1,j+1,a,b,dp)+1});
        }
        return dp[i][j]=ans;
    }
  public:
    int editDistance(string str1, string str2) {
        int n=str1.size(),m=str2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(0,0,str1,str2,dp);
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends