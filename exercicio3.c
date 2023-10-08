//Dado um vetor de caracteres VC, de tamanho N, fa�a um algoritmo que informe o total de vogais presentes em VC.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "Portuguese");
//declarando o tamanho do vetor
    int n;
//pedindo para o usu�rio informar o tamanho do vetor
    printf("******Verifica��o de Vogais******\n");
    printf("Digite quantas letras tem a palavra: \n");
    scanf("%d", &n);
//(+1 para acomodar o caractere  nulo \0) Aqui declaramos o vetor e pedimos para o usu�rio digitar a palavra
    char palavra[n + 1];
    printf("Digite a palavra: \n");
    scanf("%s", palavra);

//declarando a vari�vel que armazenar� o total de vogais
    int totalVogais = 0;

//checando cada letra da palavra usando o for
//a fun��o strlen retorna o tamanho de uma string, e faz parte da biblioteca string.h
    for(int i = 0; i < strlen(palavra) - 1; i++){
        char letra = palavra[i];

//comparando as letras com vogais e incrementando o contador totalVogais
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
            totalVogais++;
            }
    }
        printf("A palavra %s possui %d vogais.", palavra, totalVogais);

        return 0;
}
