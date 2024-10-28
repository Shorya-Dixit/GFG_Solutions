//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++

//see editorial
struct minHeapNode{
    int ele;
    int i;
    int j;
};
void swap(minHeapNode *x, minHeapNode *y){
    minHeapNode temp= *x;
    *x=*y;
    *y=temp;
}
int left(int i) { return (2*i + 1); }
int right(int i) { return (2*i + 2); }
void MinHeapify(int i,int heap_size,minHeapNode* harr)
{
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if (l < heap_size && harr[l].ele < harr[i].ele)
		smallest = l;
	if (r < heap_size && harr[r].ele < harr[smallest].ele)
		smallest = r;
	if (smallest != i)
	{
		swap(&harr[i], &harr[smallest]);
		MinHeapify(smallest,heap_size,harr);
	}
}
void replaceMin(minHeapNode x,int heap_size,minHeapNode* harr) { 
    harr[0] = x; MinHeapify(0,heap_size,harr); 
}
class Solution
{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        int n = k;
        vector<int>ans(n*k);
        minHeapNode* harr= new minHeapNode[k];
        for(int i=0;i<k;i++){
            harr[i].ele=arr[i][0];
            harr[i].i = i;
    		harr[i].j = 1;
        }
        for(int i=(k-1)/2;i>=0;i--){
            MinHeapify(i,k,harr);
        }
        for(int count=0;count<n*k;count++){
            minHeapNode root = harr[0];
    		ans[count] = root.ele;
    		if (root.j < n)
    		{
    			root.ele = arr[root.i][root.j];
    			root.j += 1;
    		}
    		else root.ele = INT_MAX; 
    		replaceMin(root,k,harr);
        }
        return ans;
    }
};

// new MinHeapNode[k] dynamically allocates an array of k MinHeapNode objects on the 
// heap. It returns a pointer to the first element of this array, and this pointer has 
// type MinHeapNode*.

// If k is only known at runtime and stack allocation is still preferred, you’ll need to 
// either:
// Use a smaller array size that’s always within stack limits, or
// Use std::vector, which dynamically manages memory but could be treated similarly to 
// an array for convenience:

// * is used with pointers because pointers store addresses of dynamically allocated 
// memory, which must be manually managed. Stack arrays like MinHeapNode harr[k]; don’t 
// need * because they’re actual arrays directly allocated with automatic storage duration 
// (deallocated when out of scope).


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    
cout << "~" << "\n";
}
	return 0;
}






// } Driver Code Ends