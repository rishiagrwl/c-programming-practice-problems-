//Prints weekday corresponding to a no. from 1 to 7
#include <stdio.h>
main()
{
 int a;
 printf("Enter a no. from 1 to 7 = ");
 scanf("%d", &a);
 switch(a)
 {
  case 1:
   printf("Monday");
   break;
  case 2:
   printf("Tuesday");
   break;
  case 3:
   printf("Wednesday");
   break;
  case 4:
   printf("Thursday");
   break;
  case 5:
   printf("Friday");
   break;
  case 6:
   printf("Saturday");
   break;
  case 7:
   printf("Sunday");
   break;
  default:
   printf("The no. you entered is not from 1 to 7");
 }
}
