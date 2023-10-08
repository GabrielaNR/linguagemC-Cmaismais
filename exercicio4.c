//Implemente um algoritmo que verifique se um vetor de inteiros VI, com N inteiros, está em ordem crescente ou não.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "Portuguese");

//declarando o tamanho do vetor e pedindo o dado ao usuário
    int n;
    printf("Digite quantos itens possui o vetor: \n");
    scanf("%d", &n);

//solicitando os dados do vetor ao usuário
    int vetor[n];
    printf("Digite os itens do vetor: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
//checando se está em ordem crescente
    int crescente = 1;

    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            crescente = 0;
            break;    //se encontrar um i maior o programa para a verificação, pois já sabemos que o vetor não está em ordem crescente
        }
    }

    if (crescente) {
        printf("O vetor está em ordem crescente!\n");
    } else {
        printf("O vetor não está em ordem crescente!\n");
    }

    return 0;

}

