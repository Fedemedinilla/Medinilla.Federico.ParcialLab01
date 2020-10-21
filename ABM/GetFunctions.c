#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

///YES/NO FUNCTION
char getYesNoFunction(char msg[])
{
    char option;

    printf(msg);
    fflush(stdin);
    scanf("%c",&option);
    option=tolower(option);
    while(option!='y'&&option!='n')
    {
        printf("\n*ERROR* %s",msg);
        fflush(stdin);
        printf(" ");
        scanf("%c",&option);
        option=tolower(option);
    }
    system("cls");

    return option;
}
///CHECK MODELO
void checkModelo(char string[], char inputMsg[],char errorMsg[], int tam)
{
    char aux[51];
    int len;

    printf("%s",inputMsg);
    fflush(stdin);
    scanf("%[^\n]",aux);
    strlwr(aux);
    len=strlen(aux);

    aux[0]=toupper(aux[0]);

    while(strlen(aux)>tam-1)
    {
        printf("%s",errorMsg);
        fflush(stdin);
        scanf("%[^\n]",aux);
        strlwr(aux);
        len=strlen(aux);

        aux[0]=toupper(aux[0]);

        for(int i=0;i<len;i++)
        {
            if(isspace(aux[i]))
            {
                aux[i+1]=toupper(aux[i+1]);
            }
        }
    }

    for(int i=0;i<tam;i++)
    {
        if(isspace(aux[i]))
        {
            aux[i+1]=toupper(aux[i+1]);
        }
    }
    strcpy(string, aux);
}
///CHECK IDMARCA
int checkIdMarca(char inputMsg[],char errorMsg[])
{
    int intInput;

    printf("%s",inputMsg);
    scanf("%d",&intInput);

    while(intInput<1000||intInput>1003)
    {
        printf("%s",errorMsg);
        scanf("%d",&intInput);
    }

    return intInput;
}
///CHECK IDTIPO
int checkIdTipo(char inputMsg[],char errorMsg[])
{
    int intInput;

    printf("%s",inputMsg);
    scanf("%d",&intInput);

    while(intInput<5000||intInput>5003)
    {
        printf("%s",errorMsg);
        scanf("%d",&intInput);
    }

    return intInput;
}
///CHECK FLOAT
float checkFloat(char inputMsg[],char errorMsg[])
{
    float fInput;

    printf("%s",inputMsg);
    scanf("%f",&fInput);

    while(fInput<0||fInput>999999999)
    {
        printf("%s",errorMsg);
        scanf("%f",&fInput);
    }

    return fInput;
}
