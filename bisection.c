#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(z) ((z*z*z*)-z-1)

int main(void){
    int a,b,maxitrt;
    float alloerr,x,x1;

    printf("Wnter the a and b values");
    scanf("%d%d",&a,&b);
    printf("enter the maximum number of iteratiions");
    scanf("%d",&maxitrt);
    printf("Allowed erroer");
    scanf("%f",&alloerr);
    for (int i = 0; i < maxitrt; i++)
    {
    x=(a+b)/2;
        if (f(a)*f(x) < 0)
        {
           b=x;
        }
        else{
            a=x;
        }
        x1=(a+b)/2;
        printf("i=%d f(x1)=%f",i,f(x1));
        if(fabs(x-x1)<alloerr){
            printf("The roots are =%f\n",x1);
            break;
        }
        else{
            x=x1;
        }
    }
    
}