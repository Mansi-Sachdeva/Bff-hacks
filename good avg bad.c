#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks ");
    scanf("%d", & marks );

    if(marks>85)
    {
        printf("GOOD");
    }
    else if(marks>55)
    {
        printf("AVERAGE");

    }
    else if(marks>45)
    {
        printf("ok");
    }
    else
    {
        printf("BAD");
    }
}

