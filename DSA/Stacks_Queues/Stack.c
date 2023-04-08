#include<stdio.h>
#include<stdbool.h>
#define size 5

int stack[size], top = -1;

bool isFull() {
    if (top == size - 1)
        return true;
    
    return false;
}

bool isEmpty() {
    if (top == -1)
        return true;
    
    return false;
}

void push(int item) {
    if (isFull())
        printf("Stack is full\n");
    else {
        stack[++top] = item;
    }
}

void pop() {
    if (isEmpty())
        printf("Stack is empty\n");
    else
        printf("Element popped is %d\n", stack[top]);
        top--;
}

void display() {
    if (top == -1)
        printf("Stack is empty\n");
    else {
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();

    pop();
    display();
}