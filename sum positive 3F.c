#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", & b);
    c=a+b;
5r
  if(c>10)
  {
      d=c-10;
      printf("Subtracting 10 from sum gives %d", d);

  }

    else
    {
        d=-(c-10);
        printf("Subtracting 10 from sum gives %d", d);
    }

    return 0;
}
