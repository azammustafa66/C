#include<stdio.h>
#define size 5

int q[size], front = -1, rear = -1;


void EnQueue(int item) {
    if (rear == size - 1)
        printf("Queue is full\n");
    else {
        if (front == -1)
            front = 0;
        rear++;
        q[rear] = item;
    }
}

void deQueue() {
    if (front = -1)
        printf("Queue is empty\n");
    else {
        front++;
        if (front > rear)
            front = rear = -1;
    }
}

void display() {
    if (rear == -1) 
        printf("Queue is empty\n");
    for (int i = front; i <= rear; i++)
        printf("%d\n", q[i]);
}

int main() {
    deQueue();
    display();

    EnQueue(1);
    EnQueue(2);
    EnQueue(3);
    EnQueue(4);    
    EnQueue(5);

    // EnQueue(6);

    display();

    deQueue();
    // deQueue();

    display();    
}