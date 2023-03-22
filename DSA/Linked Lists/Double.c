#include <stdio.h>
#include <stdlib.h>

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

void insert_begin()
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
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
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
        temp->prev = NULL;
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
        ptr->prev = temp;
        temp->prev = prev_ptr;
        prev_ptr->next = temp;
    }
}

void del_begin()
{
    struct node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void del_end()
{
    struct node *prev_ptr;
    struct node *ptr = head;

    while (ptr->next != NULL)
    {
        prev_ptr = ptr;
        ptr = ptr->next;
    }
    prev_ptr->next = NULL;
    free(ptr);
}

void del_pos()
{
    struct node *prev_ptr;
    struct node *ptr = head;

    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos == 0)
    {
        del_begin();
    }
    else
    {
        for (int i = 0; i < pos; i++)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = ptr->next;
        free(ptr);
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
            exit(0);
        }
    }
}