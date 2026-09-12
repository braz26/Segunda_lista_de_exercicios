#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 7 \n");
   int n, resultado;
    printf("Digite um número inteiro: "); 
    scanf("%d", &n);
 
    if (n % 2 == 0) {
        resultado = n + 5;
        printf("%d é par. Resultado (n + 5): %d\n", n, resultado);
    } else {
        resultado = n + 8;
        printf("%d é ímpar. Resultado (n + 8): %d\n", n, resultado);
    }

    return 0;
 }