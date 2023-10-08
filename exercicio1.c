#include <stdio.h>      //bibliotca de in/out
#include <locale.h>     //biblioteca de setar linguagem

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int n;

    //pedindo ao usu�rio o tamanho dos vetores
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int vetor1[n];
    int vetor2[n];

    //pedindo ao usu�rio para preencher o primeiro vetor
    printf("Digite os n�meros do primeiro vetor: \n");
    for(int i = 0; i<n; i++){
        scanf("%d", &vetor1[i]);
    }

    //pedindo ao usu�rio para preencher o segundo vetor
    printf("Digite os n�meros do segundo vetor: \n");
    for(int i = 0; i<n; i++){
        scanf("%d", &vetor2[i]);
    }

    //verificando se os vetores s�o diferentes
    int diferentes = 0;     //aqui poderia ser usado uma vari�vel booblena sendo 0 para true e 1 para false
    for (int i =0; i<n; i++){
        if (vetor1[i] != vetor2[i]){   //este for compara os valores de cada [i] do vetor
            diferentes = 1;     //se houver difren�a, j� damos um break para parar a verifica��o
            break;
        }
    }
    //imprimindo cada item do vetor

    for (int i = 0; i<n; i++){
        printf("item do vetor 1: %d \n", vetor1[i]);
        printf("item do vetor 2: %d \n", vetor2[i]);
    }
    //aqui vamos printar na tela o resultado da verifica��o boolena, e tamb�m vamos printar quantos itens tem em cada vetor

    if  (diferentes){
        printf("Os vetores s�o diferentes! Eles possuem %d itens cada." ,n);
    }
    else{
        printf("Os vetores s�o iguais! Eles possuem %d itens cada." ,n);
    }
//o programa retorna um inteiro
return 0;

}
