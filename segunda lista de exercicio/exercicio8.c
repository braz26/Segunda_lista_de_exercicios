#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 8 \n");
    int a, b, c, temp;
    printf("Digite A: "); 
    scanf("%d", &a);

    printf("Digite B: "); 
    scanf("%d", &b);
    
    printf("Digite C: "); 
    scanf("%d", &c);
 
    /* Ordenação por seleção simples (3 elementos) */
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }
 
    printf("Ordem decrescente: %d > %d > %d\n", a, b, c);


    return 0;
 }