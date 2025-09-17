// to find majority element in the array
#include<stdio.h>
int max(int a,int b){
    if(a<b) return b;
    else return a; 
}
int main() {  
     int arr[100];
     int n;
     printf("Enter size of array:");
     scanf("%d",&n);
    printf("Enter array:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int temp = arr[0];   // temp ko mannlia sabse jada bar first element h 
    int maxcountelem = 0;
    int count;
    for(int i=0; i<n; i++){
        count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(maxcountelem<count)  temp = arr[i];
        maxcountelem = max(count,maxcountelem);
    }
   printf("max count is:%d",maxcountelem);
   printf("\nelement is:%d",temp);





    return 0; 
}