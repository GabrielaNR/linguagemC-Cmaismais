//esse programa verifica se um ano é bissexto ou não
#include <stdio.h>

void verificacao_bissexto(int ano){
    int bissexto; //variavel usada para verficação booleana - sim ou não
        if((ano%4 == 0 && ano%100 != 0) || (ano%400 == 0)){  //constante para o cálculo
            bissexto = 1;
            printf("\nEsse ano é bissexto!");  //true
        }
        else {
            bissexto = 0;
            printf("\nEsse ano não é bissexto...");  //false
        }
        
    }
    
int main(){
    int ano;
    printf("Digite o ano a ser verificado: ");
    scanf("%d", &ano);
    
    verificacao_bissexto(ano);

    return 0;
    
}
        

