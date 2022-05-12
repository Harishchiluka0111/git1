#include <stdio.h>

int main()
{
   int a, b;
   int product=0;
   scanf("%d%d", &a, &b);
   while(b!= 0)
   {
      product += a;
      b--;
   }

   printf("\n %d\n", product);
   return 0;
}
