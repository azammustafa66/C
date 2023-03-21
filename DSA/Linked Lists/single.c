#include<stdio.h>
#include<stdlib.h>

struct node
{
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
        head = temp;
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
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_begin()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void insert_pos()
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
        struct node *prev_ptr;
        struct node *ptr = head;

        int pos;
        printf("Enter the position: ");
        scanf("%d", &pos);

        for (int i = 0; i < pos; i++)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }

        temp->next = ptr;
        prev_ptr->next = temp;
    }
}

void del_begin()
{
    if (head == NULL)
    {
        printf("Linked list empty | Nothing to delete\n");
    }
    else
    {
        struct node *ptr = head;
        head = head->next;
        free(ptr);
        printf("Node Deleted\n");
    }
}

void del_end()
{
    if (head == NULL)
    {
        printf("Linked list empty | Nothing to delete\n");
    }
    else if (head->next == NULL)
    {
        struct node *ptr = head;
        head = ptr->next;
        free(ptr);
    }
    else
    {
        struct node *ptr = head;
        struct node *prev_ptr;
        while (ptr->next != NULL)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = NULL;
        free(ptr);
    }
}

void del_pos()
{
    int pos;
    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);

    if (head == NULL)
    {
        printf("Linked list empty | Nothing to delete\n");
        return;
    }
    else if (pos == 0)
    {
        del_begin();
    }
    else
    {
        struct node *ptr = head;
        struct node *prev_ptr;

        for (int i = 0; i < pos; i++)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = ptr->next;
        free(ptr);
    }
}

void *search(struct node *ptr)
{
    int key;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    while (ptr != NULL) {
        if (key == ptr->data) {
            printf("element found at %d", ptr);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n*****\n");
        printf("1. Create\n");
        printf("2. display\n");
        printf("3. Insert Node at beginning\n");
        printf("4. Insert Node at specific position\n");
        printf("5. Insert Node at end of LinkedList\n");
        printf("6. Delete Node at beginning\n");
        printf("7. Delete Node at end\n");
        printf("8. Delete Node at position\n");
        printf("9. Search\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_pos();
            break;
        case 5:
            create();
            break;
        case 6:
            del_begin();
            break;
        case 7:
            del_end();
            break;
        case 8: 
            del_pos();
            break;
        case 9:
            search(head);
            break;
        case 10:
            exit(0);
        }
    }
}