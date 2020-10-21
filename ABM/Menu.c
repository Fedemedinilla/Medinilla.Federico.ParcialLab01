#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int getMenuOption(char msg[])
{
    int optionChoice;

    printf(msg);
    scanf("%d",&optionChoice);

    return optionChoice;
}
int showMenu()
{
    int choice;

    printf("\n\n        *** BIENVENIDO ***          \n");
    printf("\n       1- Alta de Notebook      ");
    printf("\n       2- Modificar Notebook      ");
    printf("\n       3- Baja de Notebook      ");
    printf("\n       4- Listar Notebooks     ");
    printf("\n       5- Listar Marcas     ");
    printf("\n       6- Listar Tipos      ");
    printf("\n       7- Listar Servicios      ");
    printf("\n       8- Alta de Trabajos     ");
    printf("\n       9- Listar Trabajos     ");
    printf("\n       10- Salir    \n");

    choice=getMenuOption("\nIngrese una opcion(1-10): ");
    system("cls");

    return choice;
}
void programEnd()
{
    printf("\n |===========================================|");
    printf("\n |       *** PROGRAMA FINALIZADO ***         |");
    printf("\n |===========================================|\n");
}
