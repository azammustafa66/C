#include<stdio.h>
#include<stdlib.h>
#define max 100

int stack[max], top = -1;

int isFull() {
    if (top > -1)
        return 1;

    return 0;
}

int isEmpty() {
    if (top == -1)
        return 1;

    return 0;
}

void push(int item) {
    if (top == max - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = item;
    }
}

int pop() {
    int item = stack[top];
    --top;
    return item;
}

void display() {
    if (top == -1)
        printf("Stack is empty\n");
    else {
        for(int i = top; i >= 0; i--) {
            printf("%d\n",stack[i]);
        }
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
                    printf("Enter item to be pushed: "); int item;
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2:
                    stackItem = pop();
                    printf("Last popped item : %d\n", stackItem);
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);
                    break;
        }
    }
    return 0;    
}