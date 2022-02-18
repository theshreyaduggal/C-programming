/*Alternating series sum*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int num;

   int a,sum=0;

   printf("Enter a number");

   scanf("%d",&num);
   printf("initial sum is %d",sum);

   for (a=1; a<=num; a++)

   {


      if (a%2==0)

      {

	sum=(sum-a);

      }

      if (a%2==1)

      {

	sum=(sum+a);

      }


    }

	printf("The sum is: %d",sum);

}

