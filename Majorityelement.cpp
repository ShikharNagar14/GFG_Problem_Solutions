int majorityElement(int a[], int size)
    {
        
        // your code here
        int count=1;
        int temp=a[0];
        for(int i=0;i<size;i++){
            if(a[i]==temp){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                temp=a[i];
                count=1;
            }
        }
         int count2 = 0;

         for (int i = 0; i < size; i++)
         {
             if (a[i] == temp)
             {
                count2++;
             }
         }

         return count2> size / 2 ? temp : -1;

      }
