#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no *Apontador;

typedef struct no{
    char caracter;
    Apontador esq;
    Apontador dir;
}No;

typedef No* Arvore;

int inicializar(Arvore *tree);
int inserir(Arvore *tree, char caracter, char *caminho);
void imprimir(Apontador p, char *caminho);
char pesquisar_letra(Arvore tree, char* codigo);
void imprimir_frase(Arvore tree, char* codigo);