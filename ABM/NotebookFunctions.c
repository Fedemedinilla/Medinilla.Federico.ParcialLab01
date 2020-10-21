#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "NotebookFunctions.h"
#include "GetFunctions.h"

#define MAXTAM 25

int addNotebook(sNotebook list[],int tam,int* id)
{
    int error;
    int emptyIndex;
    int nextId;
    nextId=*id;
    sNotebook auxNotebook;

    error=1;

    if(list!=NULL&&tam>0&&id>0)
    {
        auxNotebook.id=nextId;
        printf("Complete los datos de la notebook a agregar(ID:%d):\n",auxNotebook.id);

        checkModelo(auxNotebook.modelo,"\nIngrese el MODELO(MAX 20 caracteres): ","*ERROR* Ingrese el nombre(MAX 20 caracteres): ",MAXTAM);
        auxNotebook.idMarca=checkIdMarca("\nIngrese el ID de la MARCA(1000-1003): ","\n*ERROR* Ingrese el ID de la MARCA(1000-1003): ");
        auxNotebook.idTipo=checkIdTipo("\nIngrese el ID del TIPO(5000-5003): ","\n*ERROR* Ingrese el ID del TIPO(5000-5003): ");
        auxNotebook.precio=checkFloat("\nIngrese el PRECIO: ","\n*ERROR* Ingrese el PRECIO: ");

        list[emptyIndex]=auxNotebook;
        nextId++;
        *id=nextId;

        error=0;
    }

    return error;
}
