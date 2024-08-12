//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size();
        if (n == 1)
            return arr1[0] + arr2[0];
        if (n == 2)
            return max(arr1[0], arr2[0]) + min(arr1[1], arr2[1]);

        int i = 0, j = 0;
        int k = 0;
        int merged[2 * n];

        while (i < n && j < n)
        {
            if (arr1[i] <= arr2[j])
            {
                merged[k] = arr1[i];
                i++;
                k++;
            }
            else
            {
                merged[k] = arr2[j];
                j++;
                k++;
            }
        }
        while (i < n)
        {
            merged[k] = arr1[i];
            i++;
            k++;
        }
        while (j < n)
        {
            merged[k] = arr2[j];
            j++;
            k++;
        }
        return merged[n] + merged[n - 1];
    }
};



//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends