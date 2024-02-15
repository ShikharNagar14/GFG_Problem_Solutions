class Solution{
public:
    int sumofsquares(int N){
        int res=0;
         int temp=N;
       
        while(temp!=0){
            int dig=temp%10;
             int a=dig*dig;
             res=res+a;
            temp=temp/10;
        }
        return res;

    }
    bool isHappy(int N){
        std::unordered_set<int>seen;
        while (N != 1 && seen.find(N) == seen.end()) {
        seen.insert(N);
        N= sumofsquares(N);
    }return (N==1);
    }
};
