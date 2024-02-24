class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            int temp=n;
            if(temp<=0){
                return 0;
            }
            int div1=temp/2;
            int div2=temp/3;
            int div3=temp/4;
            
            int max_sum1=maxSum(div1);
            int max_sum2=maxSum(div2);
            int max_sum3=maxSum(div3);
            int res=max_sum1+max_sum2+max_sum3;
            if(res<n){
                res=n;
                
            }
            return res;
        }
};
