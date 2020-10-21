#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "MarcaFunctions.h"


void marcasInit(sMarca list[],int tam)
{
    int idList[]={1000,1001,1002,1003};
    char descripcionList[][20]={"Compaq","Asus","Acer","HP"};

    for(int i=0;i<tam;i++)
    {
        list[i].id=idList[i];
        strcpy(list[i].descripcion,descripcionList[i]);
    }
}
void showMarca(sMarca marca)
{
    printf("\n        %d = %s\n",marca.id,marca.descripcion);
    printf("-----------------------------\n");
}
int showMarcas(sMarca list[],int tam)
{
    int error;
    error=1;

    if(list!=NULL&&tam>0)
    {
        for(int i=0;i<tam;i++)
        {
            showMarca(list[i]);
        }
        error=0;
    }

    return error;
}
