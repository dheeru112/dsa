#include<stdio.h>  // program 1   lab1
int main() {
    int arr[] = {1,2,5,4,5,6};
    int n = sizeof(arr)/4;
    int a = 0;
     //linear search
     int key;
     printf("Enter key to search:");
     scanf("%d",&key);
     for(int i=0; i<n; i++){
          if(key==arr[i]){
             printf("index of key element is:%d\n",i);
             a = 1; 
             
              
          }
     }
       if(a==0) printf("index is -1");







    return 0;
}