#include <stdio.h>
#include <stdlib.h>

#include "Menu.h"
#include "GetFunctions.h"
#include "NotebookFunctions.h"
#include "MarcaFunctions.h"
#include "TipoFunctions.h"
#include "ServicioFunctions.h"

#define TAM 3
#define MARCASTAM 4
#define TIPOSTAM 4
#define SERVICIOSTAM 4

int main()
{
    char menuExitChoice;
    char backToMainMenuChoice;
    int idNotebook;
    sNotebook notebookList[TAM];
    sMarca marcasList[MARCASTAM];
    sTipo tiposList[TIPOSTAM];
    sServicio serviciosList[SERVICIOSTAM];

    idNotebook=100;

    marcasInit(marcasList,MARCASTAM);
    tiposInit(tiposList,TIPOSTAM);
    serviciosInit(serviciosList,SERVICIOSTAM);
    do
    {
        switch(showMenu())
        {
        case 1:
            do
            {
                if(addNotebook(notebookList,TAM,&idNotebook)==0)
                {
                    printf("\n*SUCCESS* Operacion realizada con exito!");
                    backToMainMenuChoice=getYesNoFunction("\nDesea agregar otra?(Y/N): ");
                }
                else
                {
                    printf("\n*ERROR* Ocurrio un error, operacion no realizada...");
                }
            }while(backToMainMenuChoice!='n');
            break;
        case 5:
            do
            {
                if(showMarcas(marcasList,MARCASTAM)==0)
                {
                    printf("\n*SUCCESS* Se ha realizado la operacion con exito!");
                    backToMainMenuChoice=getYesNoFunction("\nDesea volver al menu principal?(Y/N): ");
                }
                else
                {
                    printf("\n*ERROR* Ocurrio un error, operacion no realizada...");
                }
            }while(backToMainMenuChoice!='y');
            break;
        case 6:
            do
            {
                if(showTipos(tiposList,TIPOSTAM)==0)
                {
                    printf("\n*SUCCESS* Se ha realizado la operacion con exito!");
                    backToMainMenuChoice=getYesNoFunction("\nDesea volver al menu principal?(Y/N): ");
                }
                else
                {
                    printf("\n*ERROR* Ocurrio un error, operacion no realizada...");
                }
            }while(backToMainMenuChoice!='y');
            break;
        case 7:
            do
            {
                if(showServicios(serviciosList,SERVICIOSTAM)==0)
                {
                    printf("\n*SUCCESS* Se ha realizado la operacion con exito!");
                    backToMainMenuChoice=getYesNoFunction("\nDesea volver al menu principal?(Y/N): ");
                }
                else
                {
                    printf("\n*ERROR* Ocurrio un error, operacion no realizada...");
                }
            }while(backToMainMenuChoice!='y');
            break;
        case 10:
            menuExitChoice=getYesNoFunction("\nSeguro que desea salir?(Y/N): ");
            break;
        default:
            printf("*ERROR* Ingrese una opcion correcta(1-10): ");
            break;
        }
    }while(menuExitChoice!='y');

    programEnd();
}
