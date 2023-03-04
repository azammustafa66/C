#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void push(struct node **head, int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}

void insert(struct node *prev, int data) {
    if (prev == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = prev->next;
    prev->next = newnode;
}

void append(struct node **head, int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    struct node *last = *head;

    newnode->data = data;
    newnode->next = NULL;

    while(last->next != NULL) {
        last = last->next;
    }

    last->next = newnode;
    return;
}

void print(struct node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

void main() {
    struct node *head = NULL;

    push(&head, 1);

    print(head);
}