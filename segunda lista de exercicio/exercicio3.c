#include <stdio.h> //importacao da biblioteca 

int main() {
    int n;
    printf("-Exercício 3 \n");
    printf("Digite um número inteiro: "); 
    scanf("%d", &n);
 
    if (n % 2 == 0)
        printf("%d é PAR.\n", n);
    else
        printf("%d é ÍMPAR.\n", n);


 return 0;
}
