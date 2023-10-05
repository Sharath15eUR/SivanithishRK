#include<stdio.h>
void sort(int *a, int n);
int main()
{
    int a[20];
    int n,i; 
    scanf("%d",&n); // Enter number of elements to sort is taken from test case data
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); // The elements of the array is taken from the test data
    }

sort(a, n); // Calling the sorting function

    //Printing the sorted array 
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
   return 0;
}
void swap (int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}


void sort(int *a,int n)
{
  int i,j,temp;
  for(i=n-1;i>0;i--)
{ for(j=0;j<i;j++)
{
    if(a[j]>a[j+1])
    {
      swap(&a[j],&a[j+1]);  
      
    }
    
}
}
}
