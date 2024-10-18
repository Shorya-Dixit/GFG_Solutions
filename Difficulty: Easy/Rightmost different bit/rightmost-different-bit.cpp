//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int posOfRightMostDiffBit(int m, int n) {
        int xorResult = m ^ n; // XOR to get the differing bits
        if (xorResult == 0) return -1; // No differing bits
        int pos = 1;
        // Find the rightmost differing bit
        while ((xorResult & 1) == 0) {
            xorResult >>= 1;
            pos++;
        }
        return pos;
    }
};


//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends