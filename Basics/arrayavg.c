#include<stdio.h>

void main() {
    int num[100],sum=0,n,i; float avg;

    printf("Enter value of N: \n");
    scanf("%d",&n);
    printf("Enter elements one by one: \n");
    for(i=0;i<n;i++) {
                        scanf("%d",&num[i]);
                        sum+=num[i];
                        }
    avg=sum/n;
    printf("The numbers are : \n");
    for(i=0;i<n;i++) {
        printf("%d\t",num[i]);
                }
        printf("Sum=%d\t Average=%f",sum,avg);
                       
}