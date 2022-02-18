/*finding hcf*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int m,n;

   int a;

   printf("Enter the dividend");

   scanf("%d",&m);

   printf("Enter the divisor");

   scanf("%d",&n);


   for (; n>0; )

   {

      a=m%n;

      m=n;

      n=a;

   }

	printf("The hcf is: %d",m);

}

