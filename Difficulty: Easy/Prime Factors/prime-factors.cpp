//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	bool check(int num){
	    int count=0;
	    for(int i=2;i<=sqrt(num);i++){
	        if(num%i==0) count++;
	    }
	    if(count>0) return false;
	    else return true;
	}
	vector<int>AllPrimeFactors(int N) {
	    vector<int>ans;
	    for(int i=2;i<=sqrt(N);i++){
	        if(check(i)){
	            if(N%i==0){
	                ans.push_back(i);
	                while(N%i==0){
	                    N=N/i;
	                }
	            }
	        }
	    }
	    if(N!=1) ans.push_back(N);
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends