#include <stdio.h>
int main()
{
    int n, bn, rem, d, j=1,dec=0;
    printf("Enter the no. in octal form \n");
    scanf("%d", &n);
    bn=n;
        while(n>0)
        {
            rem=n%10;
            d=rem*j;
            dec+=d;
            j*=8;
            n/=10;
        }
        printf("Octal no.=%d,Decimal no.=%d", bn, dec);
    return 0;

}
