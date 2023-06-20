#include "arvore.h"

int main(int argc, char* argv[]){
    Arvore tree;
    inicializar(&tree);
    inserir(&tree, 'E', ".");
    inserir(&tree, 'I', "..");
    inserir(&tree, 'S', "...");
    inserir(&tree, 'H', "....");
    inserir(&tree, '5', ".....");
    inserir(&tree, '4', "....-");
    inserir(&tree, 'V', "...-");
    inserir(&tree, '3', "...--");
    inserir(&tree, 'U', "..-");
    inserir(&tree, 'F', "..-.");
    inserir(&tree, '2', "..---");
    inserir(&tree, 'A', ".-");
    inserir(&tree, 'R', ".-.");
    inserir(&tree, 'L', ".-..");
    inserir(&tree, 'W', ".--");
    inserir(&tree, 'P', ".--.");
    inserir(&tree, 'J', ".---");
    inserir(&tree, '1', ".----");
    inserir(&tree, 'T', "-");
    inserir(&tree, 'N', "-.");
    inserir(&tree, 'D', "-..");
    inserir(&tree, 'B', "-...");
    inserir(&tree, '6', "-....");
    inserir(&tree, 'X', "-..-");
    inserir(&tree, 'K', "-.-");
    inserir(&tree, 'C', "-.-.");
    inserir(&tree, 'Y', "-.--");
    inserir(&tree, 'M', "--");
    inserir(&tree, 'G', "--.");
    inserir(&tree, 'Z', "--..");
    inserir(&tree, '7', "--...");
    inserir(&tree, 'Q', "--.-");
    inserir(&tree, 'O', "---");
    inserir(&tree, '8', "---..");
    inserir(&tree, '9', "----.");
    inserir(&tree, '0', "-----");
    printf("\n================== Caminhamento pré-ordem ==================\n");
    char codigo[10] = "";
    pre_ordem(tree, codigo);
    printf("\n================== Conversão de frases ==================\n\n");
    FILE *arq;
    if(argc > 1){
        arq = fopen(argv[1], "r");
    }else{
        arq = fopen("msg.txt", "r");
    }
    char frase[200];
    while(!feof(arq)){
        fgets(frase, 200, arq);
        if(frase[strlen(frase)-1] != '\n') strcat(frase, "\n\0");
        if(frase[0] != '.' && frase[0] != '-'){
            printf("Texto:\n  %sCódigo:\n  ", frase);
            imprimir_codigo_frase(tree, frase);
            printf("\n");
        }else{
            printf("Código:\n  %sTexto:\n  ", frase);
            imprimir_frase(tree, frase);
            printf("\n");
        }
    }
    desaloca_arvore(tree);
    return 0;
}