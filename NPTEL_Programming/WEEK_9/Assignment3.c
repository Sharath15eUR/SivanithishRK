#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.", search, variable_name);
 printf("Not found! %d isn't present in the list.", search);
*/
int beg=0,end=n-1,mid=(beg+end)/2;

while(beg<=end)
{
 if(search >array[mid])
 {
   beg=mid+1;
 }
 else if(search ==array[mid])
         {
           printf("%d found at location %d.", search,mid+1);
           break;
         }
 else
         {
           end=mid-1;
         }
  mid=((beg+end)/2);
  if (beg>end)
         {
printf("Not found! %d isn't present in the list.", search);
         }
         }
         }
