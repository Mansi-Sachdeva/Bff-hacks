#include<stdio.h>
int main(){
    int number1, number2,res;
    char symbol;
    printf("enter symbol:");
    scanf("%c",&symbol);
    printf("enter first number ");
    scanf("%d", & number1 );
    printf("enter second number ");
    scanf("%d", & number2 );

    switch(symbol)
    {
      case '+':
          res = number1+number2;

        printf("sum of numbers is %d",res  );

        break;

      case '-':
          res= number1-number2;
        printf("difference of numbers is %d ", res);
        break;



    }
    return 0;
}

