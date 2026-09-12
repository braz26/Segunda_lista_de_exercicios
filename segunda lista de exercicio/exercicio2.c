#include <stdio.h>
#include <string.h>

int main() {
    printf("-Exercício 2 \n");
    char nome[50];
    char sexo;
    char estadoCivil[20];
    int tempoCasamento;

    printf("Digite o seu nome: ");
    scanf("%49s", nome);

    printf("Digite o seu sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite o seu estado civil: ");
    scanf("%19s", estadoCivil);

    if ((sexo == 'F' || sexo == 'f') &&
        (strcmp(estadoCivil, "CASADA") == 0 || strcmp(estadoCivil, "Casada") == 0)) {
        printf("Digite o tempo de casamento em anos: ");
        scanf("%d", &tempoCasamento);

        printf("\nNome: %s\n", nome);
        printf("Sexo: %c\n", sexo);
        printf("Estado Civil: %s\n", estadoCivil);
        printf("Tempo de Casamento: %d anos\n", tempoCasamento);
    } else {
        printf("\nNome: %s\n", nome);
        printf("Sexo: %c\n", sexo);
        printf("Estado civil: %s\n", estadoCivil);
        printf("Nao ha necessidade de informar tempo de casamento.\n");
    }

    return 0;
}