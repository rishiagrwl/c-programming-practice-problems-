#include <stdio.h>
main()
{
 float a,b;
 char c;
 printf("Enter the expression");
 scanf("%f%c%f", &a, &c, &b);
 switch(c)
 {
  case '+':
   printf("%f",a+b);
   break;
  case '-':
   printf("%f",a-b);
   break;
  case '*':
   printf("%f",a*b);
   break;
  case '/':
   printf("%f",a/b);
   break;
  default:
   printf("Invalid Expression");
 }
}
