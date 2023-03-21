#include<stdio.h>

int main() {
    int i = 0;
    while (i < 25) {
        if (i==0 || i==1)
            continue;

        if (i==2) 
            printf("%d ",i);
        
        if (i % 2 != 0)
            printf("%d ",i);
        else
            ++i;
    }
}