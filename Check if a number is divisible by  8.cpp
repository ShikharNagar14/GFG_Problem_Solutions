class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
       int n=s.length();
       if(n<=3){
           int num=stoi(s);
           return num%8==0 ?1:-1;
           
       }
       string last3digits=s.substr(n-3,3);
       int num=stoi(last3digits);
       return num%8==0?1:-1;
    }
};
