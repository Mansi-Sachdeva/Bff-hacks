#include <stdio.h>
int main()
    {
    int  binary, rem, d, j=1,dec=0;
    printf("Enter the no. in binary form \n");
    scanf("%d", &binary);

        while(binary>0)
        {
            rem=binary%10;
            d=rem*j;
            dec+=d;
            j*=2;
            binary/=10;
        }
        printf("Binary no.=%d,Decimal no.=%d", binary,dec);
    return 0;
}

