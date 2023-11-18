//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long sum)
    {
        // Your code here
      
         if(sum==0){
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    return {++i,i};
                }
            }
            return {-1};
        }
        long long res=0;
        int l=0,r=0;
        while(l<=r){
            if(res<sum){
                res=res+arr[r];
                r++;
            }
            else if(res>sum){
                res=res-arr[l];
                l++;
            }
            else{
                return {++l,r};
            }
            if(r>n) return {-1};
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends

// time complexity : O(n)
// space complexity : O(1)
