class Solution {
  public:
    long long reversedBits(long long x) {
        // code here

       long long ans=0;
       for(int i=0;i<31;i++){
           ans |=(x&1);
           ans<<=1;
           x>>=1;
       }
       return ans;
    }
};

// time complexity : O(logn)
// space complexity : O(1)
