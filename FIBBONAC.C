/*Fibbonacci series*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int a,num,c;

   int b=1;

   printf("Enter a number");

   scanf("%d",&num);


   for (a=0; a<num;)

   {

      c=a+b;

      printf("%d ",c);

      a=b;

      b=c;

   }

}