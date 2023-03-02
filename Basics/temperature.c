#include<stdio.h>

int main() {
    float fahr,cel;

    printf("Enter temperature in fahr = ");
    scanf("%f",&fahr);

    printf("The degree in cel is =%f \n",5.0*(fahr-32.0)/9.0);
    return 0;
} 
