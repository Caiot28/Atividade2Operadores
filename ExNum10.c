#include<stdio.h>
#include<math.h>

main(){
    
    float salarioFixo, comissaoVendas, valorVendas, salarioCarros, salarioFinal;
    int carrosVendidos;
    
    printf("\nDigite seu salario fixo: ");
    scanf("%f", &salarioFixo);
    
    printf("\nDigite a comissao por carro vendido: ");
    scanf("%f", &comissaoVendas);

    printf("\nDigite o numero de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    
    printf("\nDigite o valor total de suas vendas: ");
    scanf("%f", &valorVendas);
    
    valorVendas = valorVendas * 0.05;
    
    salarioCarros = carrosVendidos * comissaoVendas;
    
    salarioFinal = salarioFixo + valorVendas + salarioCarros;
    
    printf("\nSeu salario final e %.2f", salarioFinal);

    
}