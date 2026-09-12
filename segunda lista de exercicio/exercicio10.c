#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 10 \n");
    double peso, altura, imc;
 
    printf("Peso (kg): ");   
    scanf("%lf", &peso);

    printf("Altura (m): ");  
    scanf("%lf", &altura);
 
    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);
 
    if (imc < 18.5)
        printf("Condição: Abaixo do peso\n");
    else if (imc < 25.0)
        printf("Condição: Peso normal\n");
    else if (imc < 30.0)
        printf("Condição: Acima do peso\n");
    else
        printf("Condição: Obeso\n");

    return 0;
 }