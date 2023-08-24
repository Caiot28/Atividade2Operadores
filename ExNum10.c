#include<stdio.h>
#include<math.h>

main(){
    
    float salarioFixo, comissaoVendas, valorVendas, salarioVendas, salarioCarros, salarioFinal;
    int carrosVendidos;
    
    printf("\nDigite seu salario fixo");
    scanf("%f", &salarioFixo);
    
    printf("\nDigite a comissao por carro vendido");
    scanf("%f", &comissaoVendas);

    printf("\nDigite o numero de carros vendidos");
    scanf("%f", &carrosVendidos);
    
    printf("\nDigite o valor total de suas vendas");
    scanf("%f", &valorVendas);
    
    salarioVendas = valorVendas + (valorVendas * 0,05);
    
    salarioCarros = carrosVendidos * comissaoVendas;
    
    salarioFinal = salarioFixo + salarioVendas + salarioCarros;
    
    printf("\nSeu salario final e %f", salarioFinal);

    
}