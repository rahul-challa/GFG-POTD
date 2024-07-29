//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

//Solution
class Solution {
    public:
        //creating a function
        int rowWithMax1s(vector<vector<int> > &arr) {
            int n = arr.size();     //Number of rows
            int m = arr[0].size();  //Number of coloumns 
            int r = 0;              //Keeping track of row; starts at first row
            int c = m - 1;          //Keeping track of column; starts at last column
            int max_row_index = -1; //Keeping track of result row index

        // starting from top right corner
        // go left if you encounter 1
        // do down if you encounter 0
        // this will halt when we find the leftmost 1 
        // since the rows are sorted in ascending 
        // the left most 1 is in the row with the most number of 1s
        while (r < n && c >= 0) {
            if (arr[r][c] == 1) {
                max_row_index = r;
                c--;
            } else
                r++;
        }
        return max_row_index;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends