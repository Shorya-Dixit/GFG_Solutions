//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void sieve() {}

    vector<int> findPrimeFactors(int N) {
        vector<int>spf(N+1);
        for(int i=2;i<=N;i++) spf[i]=i;
        for(int i=2;i*i<=N;i++){
            if(spf[i]==i){
                for(int j=i*i;j<=N;j=j+i){
                    if(spf[j]==j) spf[j]=i;
                }
            }
        }
        vector<int>ans;
        while(N!=1){
            ans.push_back(spf[N]);
            N/=spf[N];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n;
        cin >> n;

        Solution obj;
        obj.sieve();
        vector<int> vec = obj.findPrimeFactors(n);
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends