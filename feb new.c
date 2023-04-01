#include <stdio.h>
main()
{
    char array[30] ;
    printf("enter name :");
    fgets(array,sizeof(array),stdin);

    int x;
    printf("enter age ");
    scanf("%d", &x );

    printf("name is %s\n", array);
    printf("age is %d", x);
}


