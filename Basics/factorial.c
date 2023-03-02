#include<stdio.h>

void main() {
    int i,n,f=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        f*=i;
    }
    printf("%d",f);
}