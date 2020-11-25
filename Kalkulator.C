#include <stdio.h>

int main()
{
char znak;
float x,y;
printf("Podaj znak działania (+,-,*,/,%,^,P - Pierwistkowanie)");
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
  
  case '%':
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

int main()
{
    int w,k;
    int i,j;
    printf("Podaj liczbę wierszy i kolumn");
    scanf(%f %f,&w &k);

    for(j=1;j<=w;j++)
    {
        for(i=1;i<=k;i++)
            printf("%d\t",w*k);
        printf("\n");
    }
    return 0;
}f
