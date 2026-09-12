#include <stdio.h> //importacao da biblioteca 

int main() {
    printf("-Exercício 1 \n");
    int n1;
    int n2;
    int n3;

    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
    printf("Digite o valor de n3: ");
    scanf("%d", &n3);

    if (n1+n2<n3)
     printf("A soma de n1 e n2 e menor que n3");
     else if (n1+n2>n3)
     printf("A soma de n1 e n2 e maior que n3");
     else if (n1+n2==n3)
     printf("A soma de n1 e n2 e igual a n3");

     return 0;
}