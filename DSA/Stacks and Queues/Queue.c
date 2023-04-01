#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define max 20

float compute(char symbol, float op1, float op2) {
    switch (symbol) {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        case '^': return pow(op1, op2);
    }
}

void main() {
    float s[20], res, op1, op2;
    int top;
    char postfix[20], symbol;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    top = -1;

    for (int i = 0; i < strlen(postfix); i++) {
        symbol = postfix[i];

        if (isdigit(symbol)) {
            s[++top] = symbol - '0';
        } else {
            op2 = s[top--];
            op1 = s[top--];
            res = compute(symbol, op1, op2);
            s[++top] = res;
        }
    }
    res= s[top--];
    printf("%d",res);
}