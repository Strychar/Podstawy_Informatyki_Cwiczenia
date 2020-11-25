#include <stdio.h>

int main(void)
{
    int x,i,j,w,k;
    printf("Podaj liczbe wierszy i kolumn\n");
    scanf( %d %d , &w &k);
    for(i=1;i<=w;i++)
    {
        if(i%2==1)
        {
            x=1;
            for (j=1;j<=k;j++)
            {
                printf("%d\t",x);
                if (x==1)
                    x=0;
                else
                    x=1;
            }
        }
        else
        {
            x=0;
            for (j=1;j<=k;j++)
            {
                printf("%d\t",x);
                if (x==1)
                    x=0;
                else
                    x=1;
            }
        }
        printf("\n");
    }
    return 0;
}
