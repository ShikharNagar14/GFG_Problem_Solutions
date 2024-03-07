class Solution {
  public:
    string longestSubstring(string s, int n) {
        // code here
           string ans="";
        int i=0,j=0;
        while(i<n){
            string t=s.substr(j,i-j+1);
            int x=s.find(t,i+1);
            if(x!=string::npos){
                if(t.length()>ans.size()){
                    ans=t;
                }
                i++;
            }
            else{
                j++;
            }
            if(i<j)i=j;
        }
        if(ans=="")return "-1";
        return ans;
    }
};
