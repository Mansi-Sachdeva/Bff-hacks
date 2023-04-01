#include<stdio.h>
main()
{
    int number, i;
    printf("enter any number:");
    scanf("%d", &number);

    for(i;i<number;i++)
    {
        if (number%i!=0)
        {
            printf("Not Prime");
            break;
        }

    }
}
