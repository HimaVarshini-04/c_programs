#include <stdio.h>
int main()
{
   int i, n, a[100];
   printf("enter the no.of elements in array:");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      printf("element - %d : ", i);
      scanf("%d", &a[i]);  
   }
   printf("the reverse elements in an array are \n");
   for (i = n - 1; i >= 0; i--)
   {
       printf("% d", a[i]); 
   }
  
   return 0;
}
