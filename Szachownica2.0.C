#include <stdio.h>
#include <stdlib.h>


int main() {

    int **tab;
    int w,k,i,j,x;
    w=8;
    k=8;

    tab = malloc(w*sizeof(*tab));

    for (i=0;i<w;i++)
    {
        tab[i] = malloc(k*sizeof(tab));
    }

    x=0;

    for (i=0;i<w;i++)
    {
        for (j=0;j<k;j++)
        {
            tab[i][j]=x;
            if (x==0)
                x++;
            else
                x--;
        }
        if (x==0)
            x++;
        else
            x--;
    }

    for (i=0;i<w;i++)
    {
        for (j=0;j<k;j++)
        {
            printf("%d",tab[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<w;i++)
    {
        free(tab[i]);
    }

    free(tab);
    return 0;
}
