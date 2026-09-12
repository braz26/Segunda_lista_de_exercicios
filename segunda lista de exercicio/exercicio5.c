#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 5 \n");
    double n, resultado;
    printf("Digite um número: "); 
    scanf("%lf", &n);
 
    if (n > 0) {
        resultado = n * 2;
        printf("Número positivo. Dobro: %.2f\n", resultado);
    } else if (n < 0) {
        resultado = n * 3;
        printf("Número negativo. Triplo: %.2f\n", resultado);
    } else {
        printf("O número é zero. Resultado: 0\n");
    }
return 0;

}   