//Desenvolva um algoritmo que preencha aleatoriamente um vetor de 20 posições com números entre 1 a 30. Na saída do algoritmo, exiba o maior, menor, média, desvio padrão e variância dos valores.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define max 20      //define o máximo de posições do vetor

int main (void){
    setlocale(LC_ALL, "Portuguese");

//declarando o tamanho do vetor e o preenchendo
    int vetor[max];
    int soma = 0; //usaremos essa variável no cálculo da média, somando os valores do vetor
    int maior = 1; //conforme pedido no enunciado, declaramos as variaveis com o maior e o menor valor
    int menor = 30;
    float media = 0;
    float variancia = 0;
    float desvioPadrao = 0;

//aqui usamos a função rand para gerar numeros aleatorios. usamos 30 + 1 para excluir o 0
    for(int i = 0; i < max; i++){
        vetor[i] = rand()%30 + 1;
        soma += vetor[i];

//achando o menor e o maior valor do vetor, lembrando que as variaveis foram inicializadas no começo do código
    if (vetor[i] > maior){
        maior = vetor[i];
    }
    if (vetor[i] < menor) {
        menor = vetor[i];
    }
    }
//calculando a média
    media = soma / max;

//calculando a variância. lembrando que a variância é obtida através da soma da soma dos quadrados da diferença entre cada valor do vetor e a média aritmética, dividida pela quantidade de elementos observados.
    for (int i = 0; i < max; i++){
        variancia += pow(vetor[i] - media, 2); //quadrado da diferença entre cada valor no vetor e a média
    }
    variancia /= max; //dividindo a soma dos quadrados das diferenças pelo número de elementos para calcular a variância

//calculando o desvio padrão. lembrando que o desvio padrão é obtido tirando a raiz quadrada da variância
    desvioPadrao = sqrt(variancia);


//printando um por um os valores pedidos
    printf("Aqui está o vetor: [");
    for (int i = 0; i < max; i++){
        printf(" %d ", vetor[i]);
        }
    printf("]");
    printf("\nO maior número do vetor é %d \n", maior);
    printf("O menor número do vetor é %d \n", menor);
    printf("A média é %.2f \n", media);
    printf("A variância é %.2f \n", variancia);
    printf("O desvio padrão é %.2f \n", desvioPadrao);

return 0;

}
