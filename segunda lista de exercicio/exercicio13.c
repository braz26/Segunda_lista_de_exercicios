#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 13 \n");
    double limiteVia, velocidadeRegistrada, percentualExcedido;

    printf("Velocidade máxima permitida (km/h): "); 
    scanf("%lf", &limiteVia);

    printf("Velocidade registrada (km/h): ");        
    scanf("%lf", &velocidadeRegistrada);
 
    printf("\n--- Resultado ---\n");
    printf("Limite da via      : %.1f km/h\n", limiteVia);
    printf("Velocidade registr.: %.1f km/h\n", velocidadeRegistrada);
 
    if (velocidadeRegistrada <= limiteVia) {
        printf("Situação: Sem infração. Veículo dentro do limite permitido.\n");

    } else {
        percentualExcedido = ((velocidadeRegistrada - limiteVia) / limiteVia) * 100.0;
        printf("Percentual excedido: %.2f%%\n", percentualExcedido);
 
        if (percentualExcedido <= 20.0) {
            printf("Classificação: Infração MÉDIA (até 20%% acima do limite).\n");

        } else if (percentualExcedido <= 50.0) {
            printf("Classificação: Infração GRAVE (entre 20%% e 50%% acima do limite).\n");

        } else {
            printf("Classificação: Infração GRAVÍSSIMA (acima de 50%% do limite).\n");
        }
 
        if (velocidadeRegistrada > 120.0) {
            printf(" !ALERTA! : Velocidade extremamente elevada (acima de 120 km/h)!\n");
        }
    }
    return 0;
}