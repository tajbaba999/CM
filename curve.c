#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void){
    int i,n;
    float xsum=0,ysum=0,xysum=0,x2sum=0;
    float x[40],y[40],a,b,A;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of x:");
    for(i=0; i<n; i++){
        scanf("%f",&x[i]);
    }
    printf("Enter the value of y: ");
    for(i=0; i<n; i++){
        scanf("%f",&y[i]);
    }
    for(i=0; i<n; i++){
        y[i]=log(y[i]);
    }
    for ( i = 0; i < n; i++)
    {
        xsum=xsum+x[i];
        ysum=ysum+y[i];
        xysum=xysum+(x[i]*y[i]);
        x2sum=x2sum+(x[i]*x[i]);
    }
    A=((x2sum*ysum)-(xsum*xysum))/((n*x2sum)-(xsum*xsum));
    b=((n*xysum)-(xsum*ysum))/((n*x2sum)-(xsum*xsum));
    a=exp(A);
    printf("a=%f b=%f",a,b);
}
    