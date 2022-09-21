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
    printf("enter the x0 value=");
    scanf("%f",&x0);
    int h=x[1]-x[0];
    p=(x0-x[n-1])/h;
     sum=y[n-1][0];
     int k=n-i;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            y[j][i+1]=y[j][i]-y[j+1][i];
        }
         
     for ( i = 1; i < n; i++)
     {
        product=product*(p+n-i)/(n-i+1);
        sum=sum+product*y[n-1][0];
     }
     printf("\nResult =%f\n",sum);
        
    }
    printf("The differnce table is:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            printf("\n%f\t",y[i][j]);
        }
        printf("\n");
        
    }
    
     for ( i = 1; i < n; i++)
     {
        product=product*(p+n-i)/(n-i+1);
        sum=sum+product*y[n-1][0];
     }
     printf("\nResult =%f\n",sum);
}