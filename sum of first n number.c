#include<stdio.h>
void main()
{

    int n ;
    printf("sum till number: ");
    scanf("%d", & n );
    printf("%d\n", n*(n+1)/2);

    while (n>=0) //reverse of numbers
    {
        printf("%d\n", n);
        n--;
    }
}
