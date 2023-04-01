 #include<stdio.h>
 #include<math.h>
  main()
  {
      int a,b,c,d;
      printf("enter a: ");
      scanf("%d,", &a);
      printf("enter b: ");
      scanf("%d,", &b);
      printf("enter c: ");
      scanf("%d,", &c);

      d=b*b - 4*a*c;

      if(d<0)
      {
          printf("complex roots");

      }
      else if (d==0)
      {
          printf("equal roots are %d", -b/(2*a));

      }

          else if (d > 0)
            {
                printf("Roots are %f and %f\n", (-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a));
            }

  }
