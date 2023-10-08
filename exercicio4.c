//Implemente um algoritmo que verifique se um vetor de inteiros VI, com N inteiros, est� em ordem crescente ou n�o.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "Portuguese");

//declarando o tamanho do vetor e pedindo o dado ao usu�rio
    int n;
    printf("Digite quantos itens possui o vetor: \n");
    scanf("%d", &n);

//solicitando os dados do vetor ao usu�rio
    int vetor[n];
    printf("Digite os itens do vetor: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
//checando se est� em ordem crescente
    int crescente = 1;

    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            crescente = 0;
            break;    //se encontrar um i maior o programa para a verifica��o, pois j� sabemos que o vetor n�o est� em ordem crescente
        }
    }

    if (crescente) {
        printf("O vetor est� em ordem crescente!\n");
    } else {
        printf("O vetor n�o est� em ordem crescente!\n");
    }

    return 0;

}

