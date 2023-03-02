#include<stdio.h>

int main() {
  int x; // x is a number
  printf("\nEnter a number : \n");
  scanf("%d",&x);
  if (x%2==0)
  {
    printf("\nThis number is even\n");
  }
  
  else
  {
    printf("\nThe number is odd\n");
  }
  
  return 0;
}