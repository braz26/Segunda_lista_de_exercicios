#include <stdio.h> //importacao da biblioteca
#include <math.h> //importacao da biblioteca

int main() {

    printf("-Exercício 4 \n");

    int a, b, c;
    printf("Digite a: "); 
    scanf("%d", &a);
    printf("Digite b: "); 
    scanf("%d", &b);
 
    if (a == b) {
        c = a + b;
        printf("Os valores são iguais. C = A + B = %d\n", c);
    } else {
        c = a * b;
        printf("Os valores são diferentes. C = A * B = %d\n", c);
    }
    return 0;
}