#include "arvore.h"

void inicializar(Arvore* tree){
    *tree = (Apontador)malloc(sizeof(No));
    (*tree)->esq = NULL;
    (*tree)->dir = NULL;
}

void inserir(Arvore *tree, char caracter, char *caminho){
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
}

void pre_ordem(Apontador p, char *caminho){
    if(p != NULL){
        if(p->caracter != ' ')
            printf("%s %c\n",caminho, p->caracter);
        strcat(caminho, ".");
        pre_ordem(p->esq, caminho);
        strcat(caminho, "-");
        pre_ordem(p->dir, caminho);
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

void imprimir_codigo_letra(Arvore tree, char letra, char* codigo){
    if(tree != NULL){
        strcat(codigo, ".");
        imprimir_codigo_letra(tree->esq, letra, codigo);
        if(tree->caracter == letra){
            printf("%s", codigo);
            return;
        }
        strcat(codigo, "-");
        imprimir_codigo_letra(tree->dir,letra, codigo);
    }
    codigo[strlen(codigo)-1] = '\0';
}

char maiuscula(char letra){
    if((int)letra >= 97 && (int)letra <= 122)
        return letra - 32;
    return letra;
}

void imprimir_codigo_frase(Arvore tree, char* frase){
    char codigo[10] = "";
    for(int i=0; i<strlen(frase); i++){
        if(frase[i] == ' ')
            printf("/");
        else
            imprimir_codigo_letra(tree, maiuscula(frase[i]), codigo);
        strcpy(codigo, "");
        printf(" ");
    }
    printf("\n");

}

void desaloca_arvore(Arvore tree){
    if(tree != NULL){
        desaloca_arvore(tree->esq);
        desaloca_arvore(tree->dir);
        free(tree);
    }
}