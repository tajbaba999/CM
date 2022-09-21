#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x,y) ((y-x)/(x+y))

int main(void){
    int n=12;
    float x,y,x1,yy[10],h;
    printf("Enter the x and y and x1");
    scanf("%f %f %f",&x,&y,&x1);
    printf("enter the h:");
    scanf("%f",&h);
    yy[0]=y+h*(f(x,y));
    for (int i = 1; i < n; i++)
    {
        yy[i]=y+(h/2)*(f(x,y)+f(x1,yy[i-1]));
        if (fabs(yy[i]-yy[i-1])<0.00005)
            break;
        
            printf("y[%d]=%f\n",i,yy[i]);
        
        
    }
    

}