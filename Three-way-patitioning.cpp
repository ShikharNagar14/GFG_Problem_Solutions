class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
       int i=0;
       int j=array.size()-1;
       int mid=0;
       while(mid<=j){
           if(array[mid]<a){
               swap(array[i],array[mid]);
               mid++;
               i++;
           }
           else if(array[mid]>=a and array[mid]<=b){
    
               mid++;
              
               
           }
           else if(array[mid]>b){
               swap(array[mid],array[j]);
               j--;
                
           }
       }
    }
};
