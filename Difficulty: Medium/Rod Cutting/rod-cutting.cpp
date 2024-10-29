//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// class Solution{
//   public:
//     int cutRod(int price[], int n) {
//         priority_queue<pair<int,pair<int,int>>>pq;
//         for(int i=0;i<n;i++){
//             pq.push({(price[i]) / (i + 1), {(i + 1),price[i]}});
//         }
//         int value=0;
//         while(n>0 && !pq.empty()){
//             if(pq.top().second.first>=n)
//             {
//                 int price=pq.top().second.second;
//                 cout<<"price added is "<<price<<" for length "<<pq.top().second.first<<endl;
//                 value+=price;
//                 n-=pq.top().second.first;
//                 pq.pop();
//             }
//             else pq.pop();
//         }
//         return value;
//     }
// };
class Solution {
public:
    int cutRod(int price[], int n) {
        int size = n;
        // Create a 2D dp array initialized with -1
        vector<vector<int>> dp(size, vector<int>(size + 1, -1));
        
        // Helper function for recursive computation with memoization
        function<int(int, int)> cutRodHelper = [&](int index, int n) -> int {
            if (index == 0) {
                return n * price[0];
            }
            
            if (dp[index][n] != -1) {
                return dp[index][n];
            }
            
            int notCut = cutRodHelper(index - 1, n);
            int cut = INT_MIN;
            int rod_length = index + 1;

            if (rod_length <= n) {
                cut = price[index] + cutRodHelper(index, n - rod_length);
            }

            dp[index][n] = max(notCut, cut);
            return dp[index][n];
        };
        
        // Start the recursive helper function with the full rod length and last index
        return cutRodHelper(size - 1, size);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends