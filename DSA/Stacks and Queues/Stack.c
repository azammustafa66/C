#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define size 100

int stack[size], top = -1, item, capacity = 1;


void push() {
    printf("Enter an item to insert: ");
    scanf("%d", &item);
    stack[++top] = item;
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return;
    }
    item = stack[top--];
    printf("Item deleted is %d\n", item);
}


void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("The elements in stack are: \n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

void showstatus() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else if (top == capacity - 1) {
        printf("Stack overflow\n");
    } else {
        printf("Stack is stored correctly in memory");
    }
}


void main() {
    int choice = 1;
    while(choice) {
        printf("\nEnter your choice\n 1.Push\n 2.Pop\n 3.Display\n 4 Show status\n 5 Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: showstatus();
                    break;
            case 5: exit(0);
        }
    }
}