#include<stdio.h>
int main()
{
    int a=22;
    printf("age is %d \n", a );
    float pi=3.14;
    printf("value of pi is %f \n",pi );
    char star = '*';
    printf("star is %c \n",star );
    // to take inputs from user we use scanf, & is ampercent which is address of memory location which is used to store the input from user.

    int age;
    printf("enter age");
    scanf("%d", &age);
    printf("age is : %d", age);

    return 0;

}
