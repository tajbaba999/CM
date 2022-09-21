#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define F(x) (((x)*(x)*(x))-(x)-(1)) 
int main(void){
  
  float a,b,allerr,x,x1;
  int Max,i;
  printf("enter values of A and B:\n");
  scanf(" %f %f",&a,&b);
  printf("enter the no.of iterations:\n");
  scanf(" %d",&Max);
  printf("enter allowed error:\n");
  scanf(" %f",&allerr);
  for(i=1;i<=Max;i++){
    x=(a+b)/2;
    if(F(a)*F(x)<0){
       b=x;
    } 
    else{
      a=x;
    }
    x1=(a+b)/2;
    printf(" i=%d a= %f b=%f f(x1)=%f\n",i,a,b,F(x1));
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