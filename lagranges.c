#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Compiling but not getting the answer try to do somthing 
int main(void){
    int i,j,k,n;
    float x[40],y[40],a,sum;
    printf("Enter the value of n: ");ttin
    scanf("%d",&n);
    printf("enter the value of x:");
    for(i=0; i<n; i++){
        scanf("%f",&x[i]);
    }
    printf("Enter the value of y: ");
    for(i=0; i<n; i++){
        scanf("%f",&y[i]);
    }
    printf("Enter the value of a:");
    scanf("%f",&a);
    for ( j = 0; j <= n; j++)
    {
       float num=1,denom=1;
       for ( k = 0; k <= n; k++)
       {
            if (j!=i)
            {
                num=num*(a-x[j]);
                denom=denom*(x[i]-x[j]);
            }
           
       }
       
         sum=sum+(num/denom)*y[i];
       //  printf("The value of y=%f",sum);

    }
    printf("The value of y=%f",sum);
}