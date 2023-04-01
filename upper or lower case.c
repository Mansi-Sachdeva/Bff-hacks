#include<stdio.h>
void main()
{
    char x;
    printf("enter character : ");
    scanf("%c", &x );

    if (x>='a' && x<='z' )
    {
        printf("Lower Case ");
    }
    else if (x>='A' && x<='Z' )
    {
        printf("Upper Case ");
    }
    else
    {
        printf("Invalid");
    }
}
