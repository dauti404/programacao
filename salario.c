#include <stdio.h>

int main(){
    float hora_trabalhada, salario_bruto, desconto, salario_liquido, valor_trabalhada, mes_trabalhado;

    printf("Quantos horas trabalhou: ");
    scanf("%f", &hora_trabalhada);

    mes_trabalhado = 30 * hora_trabalhada;

    printf("Valor por hora trabalhada: ");
    scanf("%f", &valor_trabalhada);

    salario_bruto = mes_trabalhado * valor_trabalhada;

    desconto = salario_bruto * 15/100;

    salario_liquido = salario_bruto - desconto;

    printf("\nSalário Bruto:             R$ %.2f\n", salario_bruto);
    printf("Hora Trabalhada:           %.2f horas\n", hora_trabalhada);
    printf("Valor por hora trabalhada: R$ %.2f\n", valor_trabalhada);
    printf("Desconto:                  R$ %.2f\n", desconto);
    printf("Salário Líquido:           R$ %.2f\n", salario_liquido);

    return 0;
}