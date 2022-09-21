#include<stdio.h>
#include<stdlib.h>
#define f(x)  ((x*x*x*x)+2*x-16*x+5)
#define g(x)  ((4*x*x*x)+4*x-16)

int main(void){
    int i,maxitr;
    float a,b,allerr,h,x0,x1;
    printf("Enter a b and x");
    scanf("%f %f %f",&a,&b,&x0);
     printf("entre iterations");
    scanf("%d",&maxitr);
    printf("enter allowed ");
    scanf("%f",&allerr);
    for ( i = 0; i < maxitr; i++)
    {
        h=f(x0)/g(x0);
        x1=x0-h;
        printf("\n%d\t%f\t%f\t%f",i,f(x1),g(x1),x1);
        if (fabs(x1-x0)<allerr)
        {
            printf("\n%f Fimal",x1);
            break;
        }
        else{
            x0=x1;
        }
        
    }
    if ( i > maxitr ){
        printf("Iterations are sufficenet");
    }
    
}