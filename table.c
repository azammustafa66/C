#include<stdio.h>

int sum(int a,int b); void print(int n);

int main() {
    int a,b,n;
    printf("Enter value of a and b : ");
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));
    print(n);
    return 0;
}

int sum(int a ,int b) {
    return a+b;
}

void print(int n) {
    printf("Input a number : \n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    printf("%d*%d=%d",n,i,n*i);
}