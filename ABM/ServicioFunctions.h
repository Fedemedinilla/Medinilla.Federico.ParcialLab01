#ifndef SERVICIOFUNCTIONS_H_INCLUDED
#define SERVICIOFUNCTIONS_H_INCLUDED

#endif // SERVICIOFUNCTIONS_H_INCLUDED

typedef struct
{
    int id;///2000
    char descripcion[26];
    float precio;
}sServicio;

void serviciosInit(sServicio[],int);
void showServicio(sServicio);
int showServicios(sServicio[],int);

