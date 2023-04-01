#include<stdio.h>
int main()
{
    int n1, n2;
    char symbol;
    printf("enter symbol");
    scanf("%c", & symbol );


    printf("enter first number ");
    scanf("%d", & n1);
    printf("enter second number");
    scanf("%d", & n2);

    switch (symbol)
    {

    case '+' :
        printf("sum of numbers is %d", n1 + n2 );
        break;

    case '-':
        printf("difference of numbers is %d", n1 - n2 );
        break;

    case '*':
        printf("multiplication of numbers will give %d", n1* n2);
        break;

    case '/':
        printf("dividing the two numbers will give %d", n1/n2 );
        break;
    }
    return 0;


}
