#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 11 \n");

    double preco, valorFinal;
    int codigo;

    printf("Preço do produto: R$ ");
    scanf("%lf", &preco);

    printf("Código da condição de pagamento:\n");

    printf("  1 - À vista em dinheiro/cheque  (10%% desconto)\n");

    printf("  2 - À vista no cartão de crédito (15%% desconto)\n");

    printf("  3 - Em duas parcelas             (sem juros)\n");

    printf("  4 - Em duas parcelas             (10%% acréscimo)\n");

    printf("Código: "); 
    scanf("%d", &codigo);
 
    if (codigo == 1) {
        valorFinal = preco * 0.90;
        printf("Pagamento à vista (dinheiro/cheque) com 10%% de desconto.\n");

    } else if (codigo == 2) {
        valorFinal = preco * 0.85;
        printf("Pagamento à vista no cartão com 15%% de desconto.\n");

    } else if (codigo == 3) {
        valorFinal = preco;
        printf("Pagamento em 2 parcelas sem juros.\n");

    } else if (codigo == 4) {
        valorFinal = preco * 1.10;
        printf("Pagamento em 2 parcelas com 10%% de acréscimo.\n");

    } else {
        printf("Código inválido.\n");
        
    }
 
     printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
    }