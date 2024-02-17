
class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        for(int i=0;i<n;i++){
            int left=2*i+1;
            int right=2*i+2;
            if(arr[i]<arr[right]){
                return 0;
            }
            else if(arr[i]<arr[left]){
                    return 0;
                }
            }
        return true;
    }
};

// Time complexity : O(n)
// Space Complexity : O(1)
