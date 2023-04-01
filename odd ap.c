#include<stdio.h>
void main()
{
    int n, i=1;
    printf("enter number  ");
    scanf("%d", &n);
    for(i;i<=2*n-1;i+=2)
    {
        printf("%d  ",i);
    }
}
