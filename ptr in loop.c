#include <stdio.h>
main()
{
    int a[] = {20,30,40,50} ;
    int *ptr = a;
    int i;


        for (i=0; i<4; i++)
        {
            printf("%d\n", *(ptr+i));
        }

}


