//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }
    void MaxHeapify(int i, int heap_size, vector<int> &harr) 
    {
        int l = left(i);
        int r = right(i);
        int largest = i;
        if (l < heap_size && harr[l] > harr[largest]) largest = l;
        if (r < heap_size && harr[r] > harr[largest]) largest = r;
        if (largest != i) {
            swap(harr[i], harr[largest]);
            MaxHeapify(largest,heap_size,harr);
        }
    }
    void convertMinToMaxHeap(vector<int> &arr, int N){
        for(int i = (N - 2) / 2; i >= 0; --i) //only this looping is good
        { 
            MaxHeapify(i,N,arr);
        }
    }
    
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        obj.convertMinToMaxHeap(vec,n);
        for(int i = 0;i<n;i++) cout << vec[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends