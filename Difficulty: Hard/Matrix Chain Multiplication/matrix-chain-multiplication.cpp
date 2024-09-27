//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// dp[i][j] represents min multiplications for multiplying matrices from i to j.
// no. of matrix is 1 indexed
// matrix i has dimensions arr[i-1]*arr[i]
class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>>dp(N,vector<int>(N,0));
        for(int i=1;i<=N-1;i++){
            dp[i][i]=0;
        }
        for(int i=N-1;i>=1;i--){
            for(int j=i+1;j<=N-1;j++){
                int mini=INT_MAX;
                for(int k=i;k<=j-1;k++){
                    int count=dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j];
                    mini=min(mini,count);
                }
                dp[i][j]=mini;
            }
        }
        return dp[1][N-1];
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends