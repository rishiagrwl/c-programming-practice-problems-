#include <stdio.h>
main()
{
 char c;
 printf("Enter a character = ");
 scanf("%c", &c);
 switch(c)
 {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
   printf("It's a vowel");
   break;
  default:
   printf("The character you entered is not a vowel");
   break;
 }
}

