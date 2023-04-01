#include<stdio.h>
int main()
{

int a,b,sum;
printf("enter value of a \n");
scanf("%d", &a);

printf("enter value of b\n");
scanf("%d",&b);
sum = a+b;
//we need not define sum variable, instead we can directly write a+b instead of sum in next line of print.
printf("the sum is:%d", sum);
return 0;
}

