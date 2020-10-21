#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "TipoFunctions.h"

void tiposInit(sTipo list[],int tam)
{
    int idList[]={5000,5001,5002,5003};
    char descripcionList[][20]={"Gamer","Disenio","Ultrabook","Normalita"};

    for(int i=0;i<tam;i++)
    {
        list[i].id=idList[i];
        strcpy(list[i].descripcion,descripcionList[i]);
    }
}
void showTipo(sTipo tipo)
{
    printf("\n        %d = %s\n",tipo.id,tipo.descripcion);
    printf("--------------------------------\n");
}
int showTipos(sTipo list[],int tam)
{
    int error;
    error=1;

    if(list!=NULL&&tam>0)
    {
        for(int i=0;i<tam;i++)
        {
            showTipo(list[i]);
        }
        error=0;
    }

    return error;
}
