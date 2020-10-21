#ifndef NOTEBOOKFUNCTIONS_H_INCLUDED
#define NOTEBOOKFUNCTIONS_H_INCLUDED

#endif // NOTEBOOKFUNCTIONS_H_INCLUDED

typedef struct
{
    int id;
    char modelo[21];
    int idMarca;
    int idTipo;
    float precio;
}sNotebook;

int addNotebook(sNotebook[],int,int*);
