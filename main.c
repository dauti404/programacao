#include <stdio.h>

int main() {
    // Variables
    float area, base, altura;
    
    printf("Informe a base do triângulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triângulo: ");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("\nÁrea do triângulo: %.2f\n", area);

    return 0;
}