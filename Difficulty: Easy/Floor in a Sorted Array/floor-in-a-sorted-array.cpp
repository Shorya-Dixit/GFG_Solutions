//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the floor of a given element in a sorted array
    int findFloor(vector<int>& arr, int k) {
        int n = arr.size();

        // Edge case: if the first element is greater than k, no floor exists
        if (arr[0] > k) {
            return -1;
        }

        int low = 0, high = n - 1, ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == k) {
                return mid; // exact match is the floor
            } else if (arr[mid] < k) {
                ans = mid; // potential floor found
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans; // the index of the largest element <= k
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends