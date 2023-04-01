#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks ");
    scanf("%d", & marks );

    if(marks>80)
    {
        printf("PASS");

    }
    else
    {
        printf("FAIL");
    }
}
