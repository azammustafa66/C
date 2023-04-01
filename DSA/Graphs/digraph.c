#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int arr[10][10], n, source;
int visited[10];

void create() {
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix of the graph: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
                scanf("%d",&arr[i][j]);
}

void bfs() {
    int q[10], u, front = 0, rear = 1;
    printf("Enter the source vertex: ");
    scanf("%d",&source);
    q[rear++] = source;
    visited[source] = 1;
    printf("The reachable vertices are: \n");
    while (front <= rear) {
        u = q[front++];
        for (int i = 1; i <= n; i++) {
            q[++rear] = i;
            visited[i] = 1;
            printf("%d ",i);
        }
    }
}

void main() {
    int ch;
    while(1) {
        printf("\n1.Create\n2.BFS\n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1: create();
                    break;
            case 2: bfs();
                    for (int i = 0; i < n; i++) {
                        if(visited[i] == 0)
                            printf("\nNot reacable %d",i);
                    }
                    break;
            case 3: exit(0);
        }
    }
}