#include <stdio.h>
int main() {
  int n,rev=0,rem,original;
  printf("Input a number :");
  scanf("%d",&n);
  original=n;

 do {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
  }  while(n>=1);
    printf("%d\n",rev);
    
  /* if(original==rev) {
    printf("%d is palindrome\n",original);
  } else {
    printf("%d is not palindrome\n",original);
  } */
  original==rev ? printf("%d is a palindrome\n",original) : printf("%d is not a palindrome\n",original);
    return 0;
}  
  