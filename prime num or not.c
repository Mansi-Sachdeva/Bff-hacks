#include<stdio.h>
int main()
{
    int number,i;
    int flag =0;
    printf("Enter a number");
    scanf("%d", &number);

        for( i= 2; i< number; i++)
        {
            if (number % i == 0)
            {
            printf("Number is not Prime");
            flag = 1;
            break;
        }
        }
        if (flag == 0)
        {
        printf("Number is prime!");
        }
    return 0;
}

