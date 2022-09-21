#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) (x*exp(x)-2) 
int main(void){
  
  float a,b,allerr,x,x1;
  int Max,i;
  printf("enter values of A and B:\n");
  scanf(" %f %f",&a,&b);
  printf("enter the no.of iterations:\n");
  scanf(" %d",&Max);
  printf("enter allowed error:\n");
  scanf(" %f",&allerr);
  for(i=1;i<=Max;i++)
  {
    x=(a*f(b)-b*f(a))/(f(b)-f(a));
    if(f(a)*f(x)<0){
       b=x;
    } 
    else{
      a=x;
    }
    x1=((a*f(b)-b*f(a))/(f(b)-f(a)));
    printf(" i=%d a= %f b=%f f(x1)=%f\n",i,a,b,f(x1));
    if(fabs(x-x1) < allerr){
      printf(" root of the equation %f\n",x1);
    break;
     }
    else {
      x=x1;
    } 
   }
    if(i>Max){
      printf("no.of iterations are sufficient\n"); 
    }
    else
     return 0;
  
  putchar('\n');
  return 0;
}