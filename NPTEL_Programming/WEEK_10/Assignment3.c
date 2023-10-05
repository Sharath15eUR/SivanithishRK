#include <stdio.h>
int main()
{
    int a[100],i, n;
    scanf("%d",&n);  //Number of elements of the array is taken from the test case data 
   
   for (i=0; i<n; i++)
    {
        scanf("%d",a+i); // Input the array elements
    }

int j,temp;
for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
{
  if(*(a+j) < *(a+i))
  {
    temp=*(a+i);
    *(a+i)=*(a+j);
     *(a+j)=temp;
  }
}

