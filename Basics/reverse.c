#include<stdio.h>

void main() {
   int n,remainder,reverse=0;
   printf("Enter a number : \n");
   scanf("%d",&n);

   while(n!=0) {
       remainder = n%10;
       reverse = reverse*10 + remainder;
       n/=10;
    }
   printf("Reversed number = %d",reverse);
}