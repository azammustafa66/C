#include<stdio.h>
#include<stdlib.h>

int main() {
  int n,c,first,last,mid,a[100],search;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter %d elements in ascending order: ",n);
                  for(c=0;c<n;c++) 
                      scanf("%d",&a[c]);
                  
                      printf("Enter the value to search: \n");
                      scanf("%d",&search);
               first=0;  last=n-1; mid=(last+first)/2;
                      while(first<last) {
                        if(a[mid]<search) {
                        first=mid+1;
                        } else if(a[mid]=search) {
                          printf("%d is present at location %d\n",search,mid+1);
                                            break;
                        } else {
                          last=mid-1; mid=(last+first)/2;
                        }  if (first>last)
                            printf("Invalid Search!!\n");
                           
                      }
                          return 0;
}
                       