
#include<bits/stdc++.h>
using namespace std;


class Solution
{
	public:
		string is_palindrome(int n)
		{
		   
		    int temp=n;
		    int res=0;
		    while(temp!=0){
		        int ld=temp%10;
		        res=res*10+ld;
		        temp=temp/10;
		        
		    }
		    if(n==res){
		        return "Yes";
		    }
		    else{
		        return "No";
		    }
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// time complexity : O(x)
// Space complexity : O(x) where x is the no. of digits in n.
