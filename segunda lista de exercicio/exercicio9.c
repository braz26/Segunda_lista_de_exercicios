#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 9 \n");
    char sexo[2];
    double altura, pesoIdeal;
 
    printf("Sexo (M/F): ");   
    scanf(" %1s", sexo);

    printf("Altura (m): ");   
    scanf("%lf", &altura);
 
    if (sexo[0] >= 'a' && sexo[0] <= 'z') sexo[0] -= 32;
 
    if (sexo[0] == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Peso ideal para homem: %.2f kg\n", pesoIdeal);
    } else if (sexo[0] == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Peso ideal para mulher: %.2f kg\n", pesoIdeal);
    } else {
        printf("Sexo inválido.\n");
    }

    return 0;
 }