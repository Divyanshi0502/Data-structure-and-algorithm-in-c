#include <stdio.h>
int main()
{
   int array[100], k, i, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the desire location to be deleted :\n");
   scanf("%d", &k);

   if (k >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = k - 1; i < n - 1; i++)
         array[i] = array[i+1];

      printf("Final array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", array[i]);
   }
return 0;
}
