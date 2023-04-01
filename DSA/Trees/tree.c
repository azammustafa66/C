#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

typedef struct node *NODE;

NODE create(int data) {
    NODE newnode = (NODE)malloc(sizeof(NODE));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

NODE insert(int arr[], int i, int n) {
    NODE root = NULL;
    if (i <= n) {
        root = create(arr[i]);
        root->left = insert(arr, 2*i, n);
        root->right = insert(arr, 2*i+1, n);
    }
    return root;
}

void inorder(NODE root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main() {
    int n, arr[10];
    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    NODE root = insert(arr, 1, n);

    printf("Inorder traversal of created tree: ");
    inorder(root);

    return 0;
}