//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	   int i=0;
	   int j=1;
	   while(j<N){
	       if(A[i]==A[j]){
	           i=i+2;
	           j=j+2;
	       }else{
	           return A[i];
	       }
	   }return A[N-1];
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends

// Time complexity : O(logn)
// Space complexity : O(1)
