#include<stdio.h>
#define r 2
#define c 2

int main() {
    int a[r][c];
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nTranspose matrix :\n");
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
           printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
