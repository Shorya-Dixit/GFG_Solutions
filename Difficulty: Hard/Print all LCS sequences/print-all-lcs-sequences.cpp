//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    int dp[101][101];
    int lcs_len = 0;
    vector<string> res;

  private:
    int lcs(string s, string t, int pos1, int pos2) {
        // base condition
        if (pos1 == s.size() or pos2 == t.size())
            return 0;
        int &ans = dp[pos1][pos2];
        // if lcs has been computed
        if (ans != -1)
            return ans;
        // if characters are same return previous + 1 else
        // max of two sequences after removing i'th and j'th
        // char one by one
        if (s[pos1] == t[pos2])
            return ans = 1 + lcs(s, t, pos1 + 1, pos2 + 1);
        return ans = max(lcs(s, t, pos1 + 1, pos2), lcs(s, t, pos1, pos2 + 1));
    }

  private:
    void helper(string s, string t, string cur, int pos1, int pos2, int cur_lcs) {
        // if currlcs is equal to lcslen then store it
        if (cur_lcs == lcs_len) {
            res.push_back(cur);
            return;
        }
        // if we are done with all the characters of both string
        if (pos1 == s.size() or pos2 == t.size())
            return;
        // here we have to print all sub-sequences lexicographically,
        // that's why we start from 'a'to'z' if this character is
        // present in both of them then append it in cur and same
        // remaining part
        for (char ch = 'a'; ch <= 'z'; ch++) {
            // f is a flag to tell that we have printed all the
            // subsequences corresponding to current character
            bool f = false;
            for (int i = pos1; i < s.size(); i++) {
                if (s[i] == ch) {
                    for (int j = pos2; j < t.size(); j++) {
                        // if ch is present in both of them and
                        // remaining length is equal to remaining
                        // lcs length then add ch in sub-sequenece
                        if (t[j] == ch and lcs(s, t, i, j) == lcs_len - cur_lcs) {
                            string new_cur = cur + ch;
                            helper(s, t, new_cur, i + 1, j + 1, cur_lcs + 1);
                            f = true;
                            break;
                        }
                    }
                }
                // If we found LCS beginning with current character
                if (f)
                    break;
            }
        }
    }

  public:
    vector<string> all_longest_common_subsequences(string s, string t) {
        memset(dp, -1, sizeof(dp));
        // Find lcs_length
        lcs_len = lcs(s, t, 0, 0);
        // function to get all longest common subsequences
        helper(s, t, "", 0, 0, 0);
        return res;
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
        vector<string> ans = ob.all_longest_common_subsequences(s, t);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends