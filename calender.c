#include<stdio.h>
int main()
{
    int x;
    printf("enter first two letters of day  ");
    scanf("%d", & x);

    switch (x)
    {


        case 'mo':
            printf("MONDAY");
            break;

        case 'tu':
            printf("TUESDAY");
            break;

        case 'we':
            printf("WEDNESDAY");
            break;

        case 'th':
            printf("THURSDAY");
            break;

        case 'fr':
            printf("FRIDAY");
            break;

        case 'sa':
            printf("SATURDAY");
            break;

        case 'su':
            printf("SUNDAY");
            break;

    }

    return 0;

}
