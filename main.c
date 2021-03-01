#include <stdio.h>
#include<math.h>
#include<locale.h>

/*
1 - Faça um programa receba dois números inteiros e execute as seguintes funções:

    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.

    - Se os 2 números são positivos, retorne a soma dos N números existentes entre eles.

    - Se os 2 números são negativos, retorne a multiplicação dos N números existente entre eles.
*/



int main(void) {

    setlocale(LC_ALL,"Portuguese");
  
    int n1, n2, contador, menor, maior, soma = 0, mult = 1;

    printf("Digite o primeiro número/inteiro: \n");
    scanf("%d", &n1);

    printf("\nDigite o segundo número/inteiro: \n");
    scanf("%d", &n2);

    // ------------------------ Números inteiros recebidos ------------------------ //

    if(n1 > 0)
    printf("\n1");
    else if(n1 < 0)
    printf("\n0");
    else if(n1 == 0)
    printf("\n-1");

    if(n1 > 0 && n2 > 0){

        if(n1 > n2 ){
            menor = n2;
            maior = n1;
        } else {
            menor = n1;
            maior = n2;
        }

       n1 = menor;
       n2 = maior;

       contador=n1+1;

       while(contador >= n1 && contador < n2){
           soma = soma + contador;

           contador++;       
       }
        printf("\n\nSoma dos números: %d", soma);
    
    } else if(n1 < 0 && n2 < 0){

        if(n1 > n2 ){
            menor = n2;
            maior = n1;
        } else {
            menor = n1;
            maior = n2;
        }

       n1 = menor;
       n2 = maior;

       contador = n1+1;

       while(contador >= n1 && contador < n2){
           mult = mult * contador;

           contador++;       
       }
        printf("\n\nMultiplicação dos números: %d", mult);
    }

    printf("\n\n************* Fim do Programa *************");

}