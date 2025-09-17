#include<stdio.h> // reverse an array
void reversearray(int arr[],int n){
    int i = 0 , j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
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
   reversearray(arr,n);
   printf("reverse array:\n");
   for(int i=0; i<n; i++){
    printf("%d ",arr[i]); 
   }





    return 0;
}