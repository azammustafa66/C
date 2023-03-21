#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *head = NULL;

void create()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (head == NULL)
    {
        temp->prev = NULL;
        head = temp;
        return;
    }
    else
    {
        struct node *ptr = head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display()
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void insert_beg()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

int main()
{
    create();
    insert_beg();

    display();

    return 0;
}