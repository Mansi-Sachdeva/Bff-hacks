#include<stdio.h>
void function(char array[])
{
   int i;
    for(i=0;i<5;i++)
    {
        printf("%c\n", array[i]);
    }
}
main()
{
    char array[] ={'M', 'A', 'N', 'S' ,'I'};
    function(array);
}

