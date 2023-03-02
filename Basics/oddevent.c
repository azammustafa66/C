#include<stdio.h>

int main() {
  int x;
  printf("Enter a number : \n");
  scanf("%d",&x);
  x%2==0 ? printf("The number is even!!\n") : printf("The number is odd!!\n");
  return 0;       
}