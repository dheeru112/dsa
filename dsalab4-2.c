// to print all the subarrays 
#include<stdio.h>
int main() {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
   for(int st=0; st<n; st++){
    for(int end=st; end<n; end++){
        for(int i=st; i<=end; i++){
            printf("%d",arr[i]);
        }
        printf(" ");
    }
    printf("\n");
   }









    return 0;  
}