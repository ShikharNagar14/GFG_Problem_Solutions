#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    bool ispar(string x)
    {
       
        unordered_map<char,int>s={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
        stack<char>st;
        
        
        for(char brackets:x){
            if(s[brackets]<0){
                st.push(brackets);
            }
            else{
                if(st.empty()==true){
                    return false;
                }
                char top=st.top();
                st.pop();
                if(s[top]+s[brackets]!=0){
                    return false;
                }
            }
        }if(st.empty()==true){
            return true;
        }
        else{
            return false;
        }
    }

};


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
