#include<stdio.h>

int main() {
    float a ,b,Res;  // a = Num1 & b = Num2
    char op; // op = operator
    printf("Enter value of a : ",a);
    scanf("%f",&a);

    printf("Enter value of b : ",b);
    scanf("%f",&b);

    printf("Enter the choice of Operand (+,-,*,/) : ");
    scanf("%s" ,&op);

    switch(op) {
        case '+': Res = a + b;
                break;
        case '-': Res = a - b;
                break;
        case '*': Res = a * b;
                break;
        case '/': Res = a / b;
                break;        
        default : printf("Invalid operator!! \n");                        
    }
    printf("Result is : %.2f",Res);
    return 0;
}
