//Dado um vetor de caracteres VC, de tamanho N, faça um algoritmo que verifique a palavra armazenada no vetor é um palíndromo (pode ler, indiferentemente, da esquerda para a direita ou vice-versa.).

#include <stdio.h>
#include <string.h>
#include <locale.h>


int main (void){
    setlocale(LC_ALL, "Portuguese");
//declarando o tamanho do vetor
    int n;

//pedindo para o usuário informar o tamanho do vetor
    printf("******Verificação de Palíndromos******\n");
    printf("Digite quantas letras tem a palavra: \n");
    scanf("%d", &n);

//(+1 para acomodar o caractere  nulo \0) Aqui declaramos o vetor e pedimos para o usuário digitar a palavra
    char palavra[n + 1];
    printf("Digite a palavra: \n");
    scanf("%s", palavra);

//decalaração de variáveis para os testes booleanos
    int normal = 0;
    int invertida = n - 1;
    int palindromo = 1;    //muda de valor se palindromo for false

//checando a palavra e sua inversa
    while (normal < invertida) {
        if (palavra[normal] != palavra[invertida]) {
            palindromo = 0;  // Não é um palíndromo
            break;
        }
        normal++;
        invertida--;
    }
        if (palindromo) {
            printf("A palavra é um palíndromo!\n");
        } else {
            printf("A palavra não é um palíndromo!\n");
        }

    printf("A palavra é: %s\n", palavra);

//Imprimindo a palavra invertida
    printf("A palavra invertida é: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}

//note que neste código a verificação só funciona se o número de letras da palavra for igual ao número que o usuário tiver informado.
//caso contrário o código não retorna o valor esperado.


