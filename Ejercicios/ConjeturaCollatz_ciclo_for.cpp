/******************************************************************************

Conjetura de Collatz con ciclo for()

*******************************************************************************/
#include <stdio.h>
#include <conio.h> 
int main()
{
    int i,x;
    printf("Numero: ");
    scanf("%i",&x);
    for(i=1;x!=1;i++) // for(inicio;condicion_de_paro;incremento)
    {
        if(x%2==0)
            x=x/2;
        else
            x=3*x+1;
        printf("%i ",x);
    }
    getch();
    return 0;
}
