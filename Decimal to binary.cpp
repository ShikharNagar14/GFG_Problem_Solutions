//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int n)
{
    // your code here
    int base=1;
    int ans=0;
    while(n>0){
        int l_d=n%2;
        ans=ans+l_d*base;
        base=base*10;
        n/=2;
    }cout<<ans;
        
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
