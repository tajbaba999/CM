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
        if (i%3==0){
            sum=sum+2*f(x);
        }
        else{
            sum=sum+3*f(x);
        }
        
       
    }
    sum=sum+(f(a)+f(b));
    sum=(3*h/8.0)*sum;
    printf("Value=%f",sum);
    
}