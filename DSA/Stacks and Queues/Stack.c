#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[max], top = -1;

int isFull() {
    if (top == max - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

void push() {
    printf("Enter a value to push: ");
    int item;
    scanf("%d",&item);

    if(isFull()) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = item;
    }
}

int pop() {
   if(isEmpty()) {
    printf("Stack Underflow\n");
   } else {
    return stack[top--];
   }
}

void display() {
    printf("Elements in the stack are: \n");

    int i = 0;
    while (i <= top) {
        printf("%d\n",stack[i]);
        i++;
    }
}

int main() {
    int choice, stackItem;
     while(1) {
        printf("Stack Operation \n");
        printf("Enter `1` for  Push Operation \n");
        printf("Enter `2` for  Pop Operation \n");
        printf("Enter `3` for  Traverse Operation \n");
        printf("Enter `4` for  Quit Operation \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice) {
            case 1:
                    push();
                    break;
            case 2:
                    stackItem = pop();
                    if(stackItem == 0) {
                        printf("Your stack is underflow");
                    } else {
                        printf("Last popped item : %d\n", stackItem);
                    }
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);
                    break;

            default: printf("Please enter correct choice : ");
        }
    }
    return 0;    
}