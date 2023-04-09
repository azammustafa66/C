#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*head = NULL;

void create(int);
void insert_end(int);
void delete();
void display();
void insert_begi(int);
void del_begi();
void del_end();
void insert_pos(int, int);
void del_pos(int);

int main() {
    create(1);
    create(2);
    create(3);
    create(4);
    create(5);
    display();

    insert_end(6);
    display();

    insert_begi(0);
    display();

    del_begi();
    display();

    del_end();
    display();

    insert_pos(10, 2);
    display();

    del_pos(2);
    display();
}

void create(int item) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;


    if (head == NULL)
        head = temp;
    else {
        struct node *ptr = head;

        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display() {
    printf("\n");
    struct node *ptr = head;

    while (ptr != NULL) {
        printf("%d ---> ", ptr->data);
        ptr = ptr->next;
    }
}

void insert_end(int item) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;

    struct node *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void insert_begi(int item) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->next = head;
    head = temp;
}

void del_begi() {
    struct node *ptr = head;
    head = head->next;
    free(ptr);
}

void del_end() {
    struct node *ptr = head;
    struct node *prev = NULL;

    while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
}

void insert_pos(int item, int pos) {
    if (pos == 0) {
        insert_begi(item);
        return;
    }

    struct node *ptr = head;
    for (int i = 1; i < pos - 1; i++) {
        ptr = ptr->next;
    }
    struct node *temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->next = ptr->next;
    ptr->next = temp;
}

void del_pos(int pos) {
    if (pos == 0) {
        del_begi();
        return;
    }

    struct node *temp = head;
    struct node *del = NULL;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }
    del = temp->next;
    temp->next = temp->next->next;
    del->next = NULL;
    free(del);
}