#include "arvore.h"

int inicializar(Arvore* tree){
    *tree = (Apontador)malloc(sizeof(No));
    (*tree)->esq = NULL;
    (*tree)->dir = NULL;
    return 0;
}

int inserir(Arvore *tree, char caracter, char *caminho){
    Apontador atual = *tree;
    for(int i = 0; i<strlen(caminho); i++){
        if(caminho[i] == '.'){
            if(atual->esq != NULL){
                atual = atual->esq;
            }else{
                atual->esq = (Apontador)malloc(sizeof(No));
                atual = atual->esq;
                atual->esq == NULL;
                atual->dir == NULL;
                atual->caracter = ' ';
            }
        }else if(caminho[i] == '-'){
            if(atual->dir != NULL){
                atual = atual->dir;
            }else{
                atual->dir = (Apontador)malloc(sizeof(No));
                atual = atual->dir;
                atual->esq == NULL;
                atual->dir == NULL;
                atual->caracter = ' ';
            }
        }
    }
    atual->caracter = caracter;
    return 0;
}

void imprimir(Apontador p, char *caminho){
    if(p != NULL){
        strcat(caminho, ".");
        imprimir(p->esq, caminho);
        if(p->caracter != ' ')
            printf("%s %c\n",caminho, p->caracter);
        strcat(caminho, "-");
        imprimir(p->dir, caminho);
    }
    caminho[strlen(caminho)-1] = '\0';
}

char pesquisar_letra(Arvore tree, char* codigo){
    Apontador letra;
    letra = tree;
    for(int i=0; i<strlen(codigo); i++){
        if(codigo[i] == '.'){
            letra = letra->esq;
        }
        if(codigo[i] == '-'){
            letra = letra->dir;
        }
    }
    return letra->caracter;
}

void imprimir_frase(Arvore tree, char* codigo){
    char temp[2];
    char letra[10] = "";
    for(int i=0; i<strlen(codigo); i++){
        if(codigo[i] == ' '){
            printf("%c", pesquisar_letra(tree, letra));
            strcpy(letra, "");
        }else if(codigo[i] == '/'){
            printf(" ");
            strcpy(letra, "");
        }else{
            temp[0] = codigo[i];
            temp[1] = '\0';
            strcat(letra, temp);
        }
    }
    printf("%c\n", pesquisar_letra(tree, letra));
}