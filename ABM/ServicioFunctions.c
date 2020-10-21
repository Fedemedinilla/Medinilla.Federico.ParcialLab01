#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "ServicioFunctions.h"

void serviciosInit(sServicio list[],int tam)
{
    int idList[]={2000,2001,2002,2003};
    char descripcionList[][20]={"Bateria","Antivirus","Actualizaciones","Fuente"};
    float precioList[]={250,300,400,600};

    for(int i=0;i<tam;i++)
    {
        list[i].id=idList[i];
        strcpy(list[i].descripcion,descripcionList[i]);
        list[i].precio=precioList[i];
    }
}

void showServicio(sServicio servicio)
{
    printf("\n        %d = %s  $%.2f\n",servicio.id,servicio.descripcion,servicio.precio);
    printf("--------------------------------------------\n");
}

int showServicios(sServicio list[],int tam)
{
    int error;
    error=1;

    if(list!=NULL&&tam>0)
    {
        for(int i=0;i<tam;i++)
        {
            showServicio(list[i]);
        }
        error=0;
    }

    return error;
}
