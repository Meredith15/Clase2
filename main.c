#include <stdio.h>
#include <stdlib.h>

// Ingresar numeros hasta el -1//

int PedirNumeros()
{
    int maximo;
    int numero;
    int contador=0;
    int minimo;


do

{   printf("Digite un numero:");
    scanf("%d",&numero);

    if(contador==0)
    {

    maximo=numero;
    minimo=numero;
    }

    if(numero>maximo)
    {
        numero=maximo;
        numero=minimo;
    }

       contador ++;

}while (numero !=-1);



    return 0;
}
