//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int i = 0; i < arr.size(); i++) {
            pq.push(arr[i]);
        }

        long long totalCost = 0;
        while(pq.size() > 1) {
            long long first = pq.top(); // Get the smallest rope
            pq.pop();
            long long second = pq.top(); // Get the second smallest rope
            pq.pop();
            long long cost = first + second; // Combine them
            totalCost += cost; // Add to the total cost
            pq.push(cost); // Push the combined rope back into the queue
        }
        return totalCost; // Return the total cost
    }
};



//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends