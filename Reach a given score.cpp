
class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
    	// Your code here
    	int ans = 0;
        for(int i = 0; i<=n/3; i++){
            int x = n - i*3;
            if(x%5==0) ans += (1+x/10);
        }
        return ans;
    	
    }
};
