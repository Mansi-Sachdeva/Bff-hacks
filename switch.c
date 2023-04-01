#include<stdio.h>
int main()
{
    int number1, number2, symbol,res;
    printf("enter first number ");
    scanf("%d", & number1 );
    printf("enter second number ");
    scanf("%d", & number2 );
    printf("enter symbol (+,-) ");
    scanf("%d",&symbol );


    switch(symbol)
    {
      case 1:
          res = number1+number2;

        printf("sum of numbers is %d",res  );

        break;

      case 2:
          res= number1-number2;
        printf("difference of numbers is %d ", res);
        break;



    }

}
