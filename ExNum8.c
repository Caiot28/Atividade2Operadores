#include<stdio.h>
#include<math.h>

main(){
    
    float salarioVelho, percReajuste, salarioNovo;

    printf("Digite seu salario: ");
    scanf("%f", &salarioVelho);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percReajuste);

    salarioNovo = salarioVelho + (salarioVelho * (percReajuste / 100));

    printf("O salario novo e de %.2f reais", salarioNovo);




    
}
