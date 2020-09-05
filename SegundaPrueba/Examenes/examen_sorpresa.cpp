/*
Instrucciones:
1. Dar un mensaje de bienvenida y decirle al usuario que elija una opci�n del men�. 
El men� tendr� las siguientes opciones: helado de fresa, de chocolate y de vainilla. 
Los costos ser�n de 20, 25 y 22 pesos, respectivamente.
2. Ahora el usuario deber� introducir el dinero con el que cuenta para pagar.
3. Decir si le alcanza, en caso de que el dinero que introduzca sea menor a la cantidad que 
cuesta el helado hacer que aparezca un mensaje dici�ndole: "No te alcanza, regresa pronto". 
Y finalizar el programa. En caso de que le alcance poner un mensaje que diga "Gracias por tu compra, 
vuelve pronto. Tu cambio es: ..." (Poner cu�nto le sobra).
*/
#include <stdio.h>
int main()
{
    int opc,costo,capital;
    printf("Bienvenido.\nElige una opci%cn:\n",162);
    printf("Producto\t\tCosto\n");
    printf("1. Helado de Fresa\t 20 pesos\n");
    printf("2. Helado de Chocolate\t 25 pesos\n");
    printf("3. Helado de Vainilla\t 22 pesos\n");
    scanf("%i",&opc);
    switch(opc)
    {
        case 1:
            costo=20;
            break;
        case 2:
            costo=25;
            break;
        case 3:
            costo=22;
            break;
    }
    printf("Introduce tu dinero para pagar: ");
    scanf("%i",&capital);
    if(capital>=costo)
        printf("Gracias por tu compra, vuelve pronto. Tu cambio es: %i",capital-costo);
    else
        printf("No te alcanza, regresa pronto.");
    return 0;
}
