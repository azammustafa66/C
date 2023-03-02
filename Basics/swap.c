#include<stdio.h>
double a,b;
int swap();
void main() {
    printf("Input first number: ");
    scanf("%lf",&a);
    
    printf("Input second number: ");
    scanf("%lf",&b);

    swap();
}

int swap() {
        a=a-b; // a=initial a - initial b
        b=a+b; // b=(intial a - initial b) + initial b
        a=b-a;
        printf("a is %.2lf",a);
        printf(" b is %.2lf",b);
        return 0;
}