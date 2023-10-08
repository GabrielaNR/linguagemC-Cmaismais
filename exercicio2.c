//Dado um vetor de caracteres VC, de tamanho N, fa�a um algoritmo que verifique a palavra armazenada no vetor � um pal�ndromo (pode ler, indiferentemente, da esquerda para a direita ou vice-versa.).

#include <stdio.h>
#include <string.h>
#include <locale.h>


int main (void){
    setlocale(LC_ALL, "Portuguese");
//declarando o tamanho do vetor
    int n;

//pedindo para o usu�rio informar o tamanho do vetor
    printf("******Verifica��o de Pal�ndromos******\n");
    printf("Digite quantas letras tem a palavra: \n");
    scanf("%d", &n);

//(+1 para acomodar o caractere  nulo \0) Aqui declaramos o vetor e pedimos para o usu�rio digitar a palavra
    char palavra[n + 1];
    printf("Digite a palavra: \n");
    scanf("%s", palavra);

//decalara��o de vari�veis para os testes booleanos
    int normal = 0;
    int invertida = n - 1;
    int palindromo = 1;    //muda de valor se palindromo for false

//checando a palavra e sua inversa
    while (normal < invertida) {
        if (palavra[normal] != palavra[invertida]) {
            palindromo = 0;  // N�o � um pal�ndromo
            break;
        }
        normal++;
        invertida--;
    }
        if (palindromo) {
            printf("A palavra � um pal�ndromo!\n");
        } else {
            printf("A palavra n�o � um pal�ndromo!\n");
        }

    printf("A palavra �: %s\n", palavra);

//Imprimindo a palavra invertida
    printf("A palavra invertida �: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}

//note que neste c�digo a verifica��o s� funciona se o n�mero de letras da palavra for igual ao n�mero que o usu�rio tiver informado.
//caso contr�rio o c�digo n�o retorna o valor esperado.


