#include<stdio.h>
#include<math.h>

main(){

    float custoFabrica, custoConsumidor;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);

    printf("O custo final ao consumidor e de %.2f reais", custoConsumidor);


    
}
