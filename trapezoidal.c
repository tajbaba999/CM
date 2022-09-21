#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (sin(x))

int main(void){
    float a,b,h,sum=0,x;
    int i,n;
    printf("enter the a ");
    scanf("%f",&a);
    printf("enter the b");
    scanf("%f",&b);
    printf("enter the number of sub-int");
    scanf("%d",&n);
    h=(b-a)/n;
    for ( i = 1; i <= n-1; i++)
    {
        x=a+(i*h);
        sum=sum+(2*f(x));
    }
    sum=sum+(f(a)+f(b));
    sum=(h/2.0)*sum;
    printf("Value=%f",sum);
    
}