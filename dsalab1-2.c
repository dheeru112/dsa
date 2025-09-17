#include<stdio.h> // remove duplicate element from array  lab1 prog-2  
int main() {
        int n; 
        printf("Enter array's size:");
        scanf("%d",&n);
      int arr[10];
       printf("Enter your array:");
       for(int i=0; i<n; i++){
          scanf("%d",&arr[i]);
       }

             int deletecount = 0;
       for(int i=0; i<n; i++){
            
         for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                  deletecount++; 
                for(int k=j; k<n; k++){
                         arr[k] = arr[k+1];
                }
            }
         }
       }
       n = n - deletecount + 1;
         // print resultant array
         for(int i=0; i<n; i++){
            printf("%d ",arr[i]);
         }







    return 0;
}