#include<stdio.h>
#define size 5

int items[size];
int front = -1, rear = -1;

int isFull() {
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
        return 1;

    return 0;
}

int isEmpty() {
    if (front == -1) 
        return 1;

    return 0;
}

void enQueue(int item) {
    if (isFull())
        printf("Queue is full\n");
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % size;
        items[rear] = item;
    }
}

void deQueue() {
    int element;
    if (isEmpty())
        printf("Queue is empty\n");
    else if (front == rear) {
            front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
}

void display() {
    if (isEmpty())
        printf("Queue is empty\n");
    else {
        int i;
        printf("\n Front -> %d ", front);
        printf("\n Items -> ");
        for (i = front; i != rear; i = (++i) % size) {
            printf("%d ", items[i]);
        }
        printf("%d ",items[i]);
        printf("\nRear -> %d \n", rear);
    }
}

int main() {
    deQueue();


    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    display();

    deQueue();

    display();


    return 0;
}