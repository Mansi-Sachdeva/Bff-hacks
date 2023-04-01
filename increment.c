#include<stdio.h>
main()
{
    int a=4,b=8,c=3,d=9,z;

    z= a++ + ++b * c-- - --d;
    printf("value of z is %d", z );

}
