#include<stdio.h>
#include<math.h>

main(){

    float valor, CotDolar, conversao;

    printf("\nDigite o valor em reais: ");
    scanf("%f", &valor);


    printf("\nDigite a cotacao do dolar atualmente: ");
    scanf("%f", &CotDolar);

    conversao = valor / CotDolar;

    printf("\nO valor em dolares e: %.2f", conversao);





}
