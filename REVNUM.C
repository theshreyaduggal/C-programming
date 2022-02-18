/*reverse of a number*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

   int num,rev=0;

   printf("Enter the number");

   scanf("%d",&num);

   for (; num>0; num=num/10)

   {

     rev=(rev*10)+(num%10);

   }

   printf("The reverse of given number is: %d",rev);

}