#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Compiling but not getting the answer try to do somthing 
int main(void){
    int i,j,n;
    float product=1,sum=1,x0,p;
    float x[40],y[40][40],a,b;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of x:");
    for(i=0; i<n; i++){
        scanf("%f",&x[i]);
    }
    printf("Enter the value of y: ");
    for(i=0; i<n; i++){
        scanf("%f",&y[i][0]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            y[j][i+1]=y[j+1][i]-y[j][i];
        }
        
    }
    printf("The differnce table is:");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            printf("%f\t",y[i][j]);
        }
        printf("\n");
        
    }
    printf("enter the x0 value=");
    scanf("%f",&x0);
    int h=x[1]-x[0];
    p=(x0-x[0])/h;
     sum=y[0][0];
     for ( i = 1; i < n; i++)
     {
        product=product*(p-i+1)/i;
        sum=sum+product*y[0][i];
     }
     printf("\nResult =%f\n",sum);
}