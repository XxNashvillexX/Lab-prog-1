#ifndef CURSO_H_INCLUDED
#define CURSO_H_INCLUDED

typedef struct
{
    int id;
    char nombre[30];
    int duracion;
    char profesor[30];
} eCursos;

void inicializarCursos(eCursos*);
void mostrarCurso(eCursos curso);
void mostrarTodosLosCursos (eCursos* cursos, int tam);

#endif // CURSO_H_INCLUDED
