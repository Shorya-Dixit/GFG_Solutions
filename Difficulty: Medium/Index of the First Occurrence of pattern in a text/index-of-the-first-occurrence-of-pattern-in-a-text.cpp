//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        int j=0;
        int i=0;
        for(j=0;j<text.size();j++){
            if(pat[i]==text[j]){
                i++;
                if(i==pat.size()) break;
            }
            else {
                j-=i;
                i=0;
            }
        }
        if(j<text.size()) return (j-pat.size()+1);
        else return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends