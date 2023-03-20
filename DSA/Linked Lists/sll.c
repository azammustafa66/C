#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void push(struct node **head, int new_data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = new_data;

    newnode->next = *head;

    *head = newnode;
}