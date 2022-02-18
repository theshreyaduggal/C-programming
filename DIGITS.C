/*Sum of digits*/
#include<stdio.h>
#include<stdlib.h>

void main()

{

    int num,sum=0;

    printf("Enter the number");

    scanf("%d",&num);

    for (; num>0; num=num/10)

    {

	sum=(sum+(num%10));

    }

	printf("The sum of digits are: %d",sum);

}