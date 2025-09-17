#include<stdio.h>  // reverse a number

int main() {
   int n;
   printf("Enter no. to reverse:");
   scanf("%d",&n);
   int rev = 0;
   for(int i=1; n!=0; i++){
    rev = n%10 + rev*10;
     n = n/10;
   }
  printf("reverse is %d",rev);



    return 0;
}