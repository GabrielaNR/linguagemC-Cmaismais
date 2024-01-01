
#include <stdio.h>
#include <stdlib.h>

//função pra converter decimal pra binário
void decToBinary(int num) {
    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("%d em binário é: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

//função pra converter binário pra decimal
int binToDec(int num){
     int decimal = 0, base = 1, rem;

    while (num > 0) {
        rem = num % 10;
        decimal += rem * base;
        base *= 2;
        num /= 10;
    }

    return decimal;
}


int main(int argc, char*argv[]) {
    int opcao;
    int valor;
    
    printf("Conversor de bases numéricas\n");
    printf("1 - Decimal para hexadecimal\n");
    printf("2 - Hexadecimal para decimal\n");
    printf("3 - Octal para decimal\n");
    printf("4 - Decimal para octal\n");
    printf("5 - Decimal para binário\n");
    printf("6 - Binário para decimal\n");
    printf("\nInforme a opção: ");
    
    scanf("%d", &opcao);
    getchar();
    
    switch (opcao){
    case 1:
        printf("\nInforme o valor em decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em hexadecimal é: %x" , valor, valor);
        break;
    
    case 2:
        printf("\nInforme o valor em hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("%x em decimal é: %d" , valor, valor);
        break;
    
    case 3:
        printf("\nInforme o valor em octadecimal: ");
        scanf("%o", &valor);
        getchar();
        printf("%o em decimal é: %d", valor, valor);
        break;
        
    case 4:
        printf("\nInforme o valor em decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em octadecimal é: %o", valor, valor);
        
    case 5:
        printf("\nInforme o valor em decimal: ");
        scanf("%d", &valor);
        decToBinary(valor);
        break;
        
    case 6:
        printf("\nInforme o valor em binário: ");
        scanf("%d", &valor);
        int resultado = binToDec(valor);
        printf("%d em decimal é: %d\n", valor, resultado);
    
    }   

    return 0;
}
