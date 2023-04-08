#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*head = NULL;

void create(int);
void insert();
void delete();
void display();

int main() {
    create(1);
    create(2);
    create(3);
    create(4);
    create(5);
}

void create(int item) {
    struct node *temp = malloc(sizeof(struct node));
    
}