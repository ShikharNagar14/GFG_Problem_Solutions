//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string result;
        int index=0;
        for(char x:s){
            switch(x){
                case '(':
                if(index++>0){
                    result+=x;
                }
                break;
             case  ')':
            if(index-->1){
                result+=x;
            }
            break;
            
        }
        
    }
    return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends
