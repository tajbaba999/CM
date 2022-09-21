#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*pow(2.71,x)-2)

int main(void){
    int itr;
    float a,b,allerr,x,x1;
    printf("Enter the values of a and b:");
    scanf("%f %f",&a,&b);
    printf("Enter the allowed error");
    scanf("%f",&allerr);
    printf("Enter the number of iterations:");
    scanf("%d",&itr);
    for ( int i = 0; i < itr; i++)
    {
    x=(a*f(b)-b*f(a))/(f(b)-f(a));
        if(f(a)*f(x)<0)
            b=x;
        
        else
            a=x;
        
        x1=(a*f(b)-b*f(a))/(f(b)-f(a));
        printf("a=%f b=%f x1=%f\n ",a,b,x1);
        if(fabs(x-x1)<allerr){
            printf("The final root is %f",x);
            break;
        }
        else{
            x=x1;
        }
    }
} 
