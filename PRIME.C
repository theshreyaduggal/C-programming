/*Prime numbers*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int num,c;
   clrscr();

   printf("Enter a number");

   scanf("%d",&num);

   for (c=2; c<num; c++)

   {

      if (num%c==0)

      {

	  printf("Not a Prime number");

      }

   }

      if (c==num)

      {

	 printf("Prime number");

      }
      getch();


}


