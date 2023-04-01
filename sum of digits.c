#include<stdio.h>
main()
{
    int x,m,n,sum,i;
    printf("enter number : ");
    scanf("%d", &x);

    for (i=10;i<1000;i=i*10)
    {
        m=x%i;
        n=x/i;
        sum=m+n;


    }

    printf("%d", sum);
}
