#include <stdio.h>
main()
{
    int a=40;
    int *ptr = &a;
    printf("%d\n", a);
    printf("%p\n", a);
    printf("%d\n", ptr);
    printf("%p\n",ptr);
}


