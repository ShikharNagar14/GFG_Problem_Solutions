
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector<string>v;
        string ans="";
        int n=s.length();
            for(int i=0;i<n;i++){
           if(s[i]=='.'){
               v.push_back(ans);
               ans="";
           }else{
               ans+=s[i];
           }
       }
       v.push_back(ans);
       string S="";
       for(int i=v.size()-1;i>=0;i--){
          S= S+v[i];
          if(i==0){
              break;
          }else{
           S=S+'.';
          }
       }
       return S;
        
    } 
};
