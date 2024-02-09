//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int N) {
        //code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<N;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }return true;
    }
};
