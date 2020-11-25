#include <stdio.h>

int main()
{
float x,y,znak,w;
printf("Podaj znak działania (+,-,*,/,^,P - Pierwistkowanie)");
scanf(%f,&znak);
printf("Podaj x");
scanf(%f,&x);
printf("Podaj y");
scanf(%f,&y);

switch (znak)
  {
  case '+':
  z=x+y
  printf("Wynik z %f wynosi %f\n",znak,z);
  break;
  case '-':
  z=x-y
  printf("Wynik z %f wynosi %f\n",znak,z);
  break;
  case '*':
  z=x*y
  printf("Wynik z %f wynosi %f\n",znak,z);
  break;
  case '/':
  z=x/y
  printf("Wynik z %f wynosi %f\n",znak,z);
  break;
  case '/':
  z=x*x
  printf("Wynik z %f wynosi %f\n",znak,z);
  break;
  case 'P':
  z=sqrt(x)
  printf("Wynik z pierwiastkowania wynosi %f\n",z);
  break;
  default:
  printf("Podales zly znak dzialania\n");
  break;
  }
return 0;
}
