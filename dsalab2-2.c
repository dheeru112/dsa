#include<stdio.h>    // to print negative elements of an array 
int main() {
    int n;
    printf("Enter array's size:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
   for(int i=0; i<n; i++){
      if(arr[i]<0){
         printf("\n%d",arr[i]);
      }
   }






    return 0;
}