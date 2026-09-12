#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 14 \n");
    int codigo;
 
    printf("\n+------+---------------------------+----------+\n");
    printf("| Cód. | Prato                     | Valor    |\n");
    printf("+------+---------------------------+----------+\n");
    printf("|  1   | Hambúrguer com fritas     | R$ 28,00 |\n");
    printf("|  2   | Filé de frango grelhado   | R$ 32,00 |\n");
    printf("|  3   | Lasanha à bolonhesa       | R$ 35,00 |\n");
    printf("|  4   | Filé de peixe com arroz   | R$ 42,00 |\n");
    printf("|  5   | Salada especial           | R$ 25,00 |\n");
    printf("+------+---------------------------+----------+\n");
    
    printf("Código do prato: ");   
    scanf("%d", &codigo);
 
    switch (codigo) {
        case 1:
            printf("Prato: Hambúrguer com fritas — R$ 28,00\n");
            break;

        case 2:
            printf("Prato: Filé de frango grelhado — R$ 32,00\n");
            break;

        case 3:
            printf("Prato: Lasanha à bolonhesa — R$ 35,00\n");
            break;

        case 4:
            printf("Prato: Filé de peixe com arroz — R$ 42,00\n");
            break;

        case 5:
            printf("Prato: Salada especial — R$ 25,00\n");
            break;
            
        default:
            printf("Opção inválida.\n");
    }
 
    return 0;
}