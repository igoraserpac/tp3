# tp3

## Instruções para compilação e execução:

1- Com o terminal aberto na pasta do projeto, execute o comando `make` para para gerar o executável.

2- Após gerar o executável, você pode executar o programa com `./main ARQUIVO.txt` para que ele leia o arquivo escolhido e faça as conversões necessárias, ou apenas rodar com `./main` para que ele execute com o arquivo exemplo `msg.txt`.

3- O arquivo passado como argumento na execução deve conter frases de até 1000 caracteres, separadas por uma quebra de linha (\n). Caso a frase comece com ponto (.) ou traço (-), o programa entende ela como codificada em morse e tenta traduzir ela para linguagem natural, caso contrário ele entende como uma frase em linguagem natural e tenta traduzir ela para código morse.

4- O arquivo `msg.txt` contém 5 frases em código morse e 5 frases em linguagem natural