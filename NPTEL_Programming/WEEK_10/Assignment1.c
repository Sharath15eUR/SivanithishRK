#include<stdio.h>
float fun (float x); 
void bisection (float *x, float a, float b, int *itr); 

int main ()
{
    int itr = 0, maxmitr=10;
    float x, a=1.0, b=2.0, allerr, x1; 
    scanf("%f", &allerr);  // allerr is the allowable error taken from test case data 
    bisection (&x, a, b, &itr);
    do 
{
  if(fun(a) * fun(x)<0)
   b=x;
  else
    a=x;
  bisection (&x1, a, b, &itr);
  float v=x1-x;
  if((v*((v>0)-(v<0)))<allerr)
  {
    printf("Root = %1.4f", x1);
    return 0;
  }
    x=x1;
} while(itr<maxmitr);
}

float fun(float x)
{
  return (2*x*x*x-3*x-5);
}
void bisection ( float *x,float a,float b,int *itr)
{
  *x=(a+b)/2;
  ++(*itr);
}

