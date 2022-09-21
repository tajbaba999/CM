#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x,y) ((y-x)/(y+x))


int main(void){
   // int ;
    float n,a,b,x[40],y[40];
    float k1,k2,k3,k4;
    float h,c;
    printf("Enter the values of a and b:");
    scanf("%f %f",&a,&b);
    printf("Enter the values of h and c");
    scanf("%f %f",&h,&c);
    x[0]=a;
    y[0]=b;
    n=(c-a)/h;
    for (int i = 1; i <= n; i++)
    {   
        x[i]=x[i-1]+h;
        k1=h*f(x[i-1],y[i-1]);
        k2=h*f((x[i-1]+h/2.0),(y[i-1]+k1/2.0));
        k3=h*f((x[i-1]+h/2.0),(y[i-1]+k2/2.0));
        k4=h*f((x[i-1]+h),(y[i-1]+k3));
        y[i]=y[i-1]+(i/6.0)*(k1+2*k2+3*k3+k4);
        printf("y[%f]= %f\n ",x[i],y[i]);
    }
    
}