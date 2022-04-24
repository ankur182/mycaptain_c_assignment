#include <stdio.h>

int main()  {

   int n,i,j;

   printf("Enter number of rows - ");

   scanf("%d",&n);

   for(i=1;i<=n;i++)   {

       for(j=0;j<2*i;j++)

           printf("%d",j%2);

       printf("\n");

   }

   return 0;

}

