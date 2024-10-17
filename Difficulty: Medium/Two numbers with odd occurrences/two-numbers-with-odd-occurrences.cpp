//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        long long int XOR=0;
        for(long long int i=0;i<N;i++){
            XOR=XOR^Arr[i];
        }
        long long int RightMostDiffBit=(XOR&(XOR-1))^XOR;
        long long int XOR1=0;
        long long int XOR2=0;
        for(long long int i=0;i<N;i++){
            if(Arr[i]&RightMostDiffBit) XOR1=XOR1^Arr[i];
            else XOR2=XOR2^Arr[i];
        }
        if(XOR1>XOR2) return {XOR1,XOR2};
        else return {XOR2,XOR1};
    }
};
// there might be a case when XOR is the lowest possible value of long long int
// in that case XOR-1 wont hold. therefore take another data type for XOR

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends