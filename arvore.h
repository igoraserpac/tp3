#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no *Apontador;

typedef struct no{
    char caractere;
    Apontador esq;
    Apontador dir;
}No;

typedef No* Arvore;

void inicializar(Arvore *tree);
/*
Inicializa a árvore, alocando dinamicamente o nó raiz e atribuindo aos filhos 
desse nó o valor NULL.
*/

void inserir(Arvore *tree, char caracter, char *caminho);
/*
Insere um caracter na árvore com o caminho especificado.
*/

void pre_ordem(Apontador p, char *caminho);
/*
Realiza o caminhamento pré ordem, imprimindo o caminho e o caractere de cada 
nó da arvore.
*/

char pesquisar_letra(Arvore tree, char* codigo);
/*
Retorna o caractere correspondente ao código.
*/

void imprimir_frase(Arvore tree, char* codigo);
/*
Imprime a frase correspondente ao código. Nesse código as letras são separadas
por espaço e as palavras são separadas por barra ('/').
*/

void imprimir_codigo_letra(Arvore p, char letra, char* codigo);
/* 
Imprime o código correspondente à letra. O parâmetro "char* codigo" espera uma 
string vazia de tamanho maior que 6, e será usado para armazenar o código 
durante as chamadas recursivas da função.
*/

void imprimir_codigo_frase(Arvore tree, char* frase);
/*
Imprime o código correspondente à frase. Nesse código as letras são separadas
por espaço e as palavras são separadas por barra ('/').
*/

void desaloca_arvore(Arvore tree);
/*
Desaloca a árvore.
*/