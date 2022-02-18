/*Sum of numbers*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int m,n;

   int sum=0;

   printf("Enter first number");

   scanf("%d",&m);

   printf("Enter second number");

   scanf("%d",&n);


   for (; m<=n; m++)

   {

	sum=m+sum;

   }

	printf("The sum is: %d",sum);

}