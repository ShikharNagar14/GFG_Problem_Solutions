
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int res=k-arr[i];
            if(mp.find(res)!=mp.end()){
                count+=mp[res];
            }
            mp[arr[i]]++;
        }return count;
    }
};
