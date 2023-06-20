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

    if(argc > 0){
        FILE *arq = fopen(argv[0], 'r');
    }

    imprimir_codigo_frase(tree, "isso eh um exemplo");
}