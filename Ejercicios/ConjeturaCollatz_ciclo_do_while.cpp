/******************************************************************************

    Conjetura de Collatz con ciclo do-while()

*******************************************************************************/

#include <stdio.h>
int main()
{
    int x;
    printf("Numero: ");
    scanf("%i",&x);
    do{
        if(x%2==0)
            x=x/2;
        else
            x=3*x+1;
        printf("%i ",x);
    }while(x!=1);
    return 0;
}
