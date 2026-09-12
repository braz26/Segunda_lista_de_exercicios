#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 6 \n");

    int a, b;
    printf("Valor 1 (1=VERDADEIRO / 0=FALSO): "); 
    scanf("%d", &a);
    printf("Valor 2 (1=VERDADEIRO / 0=FALSO): "); 
    scanf("%d", &b);
 
    /* Normaliza para 0 ou 1 */
    a = (a != 0) ? 1 : 0;
    b = (b != 0) ? 1 : 0;
 
    if (a == 1 && b == 1)
        printf("Ambos os valores são VERDADEIROS.\n");
    else if (a == 0 && b == 0)
        printf("Ambos os valores são FALSOS.\n");
    else
        printf("Os valores são diferentes (um verdadeiro e um falso).\n");
 
        return 0;       
 }
    