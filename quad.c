#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c,d;
    float x1,x2,r1,r2;

    printf("Enter value of a b c : \n");
    scanf("%f %f %f",&a,&b,&c);

    if ((a==0)||(b==0)||(c==0)) {
                                printf("\nInvalid Co efficients\n");
       } else {
           d=b*b-4*a*c;
           if (d==0) {
            printf("Roots are real and equal\n");
            x1=x2=-b/2.0*a;
            printf("Root1=%.2f Root2=%.2f",x1,x2);
                     } else if (d>0) {
                            printf("Roots are real and ditinctive\n");
                            x1=-b+sqrt(d)/(2.0*a);
                            x2=-b-sqrt(d)/(2.0*a);
                            printf("Root1=%.2f Root2=%.2f\t",x1,x2);
                                     } else { 
                                             printf("Roots are complex and imaginary\n");
                                             x1=x2=-b/(2.0*a);
                                             r1=r2=sqrt(fabs(-d))/(2.0*a);
                                             printf("Root1=%.2f+i%.2f Root2=%.2f-i%.2f\t",x1,r1,x2,r2);
                                           }
 

    } 
                                return 0; 
}

                                    /* Real and Equal roots = 1 -4 4
                                       Real and Distinct roots = 1 -5 2
                                       Imaginary = 5 6 3 */