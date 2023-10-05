#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
   int array[100], search, c, n, position;
   /* search - element to search, c - counter, n - number of elements in array,
   position - The position in which the element is first found in the list. */

    scanf("%d", &n); // Number of elements in the array is read from the test case data

    for (c = 0; c < n; c++)
    scanf("%d", &array[c]); //Elements of array is read from the test data

    scanf("%d", &search);  //Element to search is read from the test case data
  
   int result;
   result=linear_search(array,search,n);
   if(result==-1)
     printf("%d is not present in the array.", search);
   else
     printf("%d is present at location %d.", search,result+1);
   return 0;
}
int linear_search(int array[], int search, int n)
{
 int c,flag=0;
 for(c=0;c<n;c++)
 { if(array[c]==search)
 {   flag++;
     return c;
 }
 }
  if(flag==0)
    return -1;
  
}
