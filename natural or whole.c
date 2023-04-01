#include<stdio.h>
int main()
{
    int number;
    printf("enter number ");
    scanf("%d", & number );

    if (number == 0)
    {
        printf("whole number");

    }
    else
    {
        printf("natural number");

    }
    return 0;
}
