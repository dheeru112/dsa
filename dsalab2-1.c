#include<stdio.h>  // implement quick sort on array entered by user print array 
     // after every pass               haurre algorithm  
void printarray(int arr[],int n){
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int partition(int ar[],int low,int high,int n){
         int pivot = ar[low];
         int i = low-1,j = high + 1;
         while(1){
              do{
                i++;   // ek bar too i aage jayega hi
              }while(ar[i]<pivot);
              do{    
                j--;       // ek bar too j piche jayega hi
              }while(ar[j]>pivot);
              if(i>=j){
                printf("Array after partition around pivot %d:\n",pivot);
                printarray(ar,n);
                 return j;               
              }
              int temp = ar[i];
              ar[i] = ar[j];
              ar[j] = temp;

         }
     }
void quicksort(int a[],int low,int high,int n){
    if(low<high){
        int p = partition(a,low,high,n);
        quicksort(a,low,p,n);
        quicksort(a,p+1,high,n);
    }
}
int main() {
      int n;
      printf("Enter array's size:");
      scanf("%d",&n);
      int arr[100];
      printf("Enter array:");
      for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
      }
      quicksort(arr,0,n-1,n);


           // print resultant array
           printf("sorted array:\n");
           for(int i=0; i<n; i++){
             printf("%d ",arr[i]);
           }






    return 0;
}