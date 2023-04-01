#include<stdio.h>
main()
    {
    int a=8, b=4,c=2,x,y;
    x=a && b;
    printf("\n%d",x);
    y=!(a>b)&&(c<a);
    printf("\n%d",y);

    }
