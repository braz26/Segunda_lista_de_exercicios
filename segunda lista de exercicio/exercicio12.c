#include <stdio.h> //importacao da biblioteca 
#include <math.h> //importacao da biblioteca

 int main() {
    printf("-Exercício 12 \n");
    int id;
    double nota1, nota2, nota3, me, ma;
    char conceito;
    const char *situacao;
 
    printf("Número de identificação do aluno: "); 
    scanf("%d",  &id);

    printf("Nota 1: ");                            
    scanf("%lf", &nota1);

    printf("Nota 2: ");                            
    scanf("%lf", &nota2);

    printf("Nota 3: ");                            
    scanf("%lf", &nota3);

    printf("Média dos exercícios: ");              
    scanf("%lf", &me);
 
    ma = (nota1 + nota2 * 2 + nota3 * 3 + me) / 7.0;
 
    if      (ma >= 90) { conceito = 'A'; situacao = "Aprovado"; }
    else if (ma >= 75) { conceito = 'B'; situacao = "Aprovado"; }
    else if (ma >= 60) { conceito = 'C'; situacao = "Aprovado"; }
    else if (ma >= 40) { conceito = 'D'; situacao = "Reprovado"; }
    else               { conceito = 'E'; situacao = "Reprovado"; }
 
    printf("\n- Boletim -\n");
    printf("ID do aluno        : %d\n",   id);

    printf("Nota 1             : %.2f\n", nota1);

    printf("Nota 2             : %.2f\n", nota2);

    printf("Nota 3             : %.2f\n", nota3);

    printf("Média de exercícios: %.2f\n", me);

    printf("Média de aproveit. : %.2f\n", ma);

    printf("Conceito           : %c\n",   conceito);

    printf("Situação           : %s\n",   situacao);

    return 0;
    }   