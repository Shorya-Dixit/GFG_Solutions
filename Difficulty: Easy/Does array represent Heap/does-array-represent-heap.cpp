//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        for(int i=0;i<=(n-1)/2;i++){
            int left=arr[2*i+1];
            int right=arr[2*i+2];
            int curr=arr[i];
            if(curr<left || curr<right) return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends