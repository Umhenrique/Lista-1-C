#include <stdio.h>
#include <conio.h>

int main(){

    int A, B, C, D, E, result;

    printf("Insira o valor do primeiro inteiro: ");
    scanf("%d", &A);
    printf("Insira o valor do segundo inteiro: ");
    scanf("%d", &B);
    printf("Insira o valor do terceiro inteiro: ");
    scanf("%d", &C);
    printf("Insira o valor do quarto inteiro: ");
    scanf("%d", &D);
    printf("Insira o valor do quinto inteiro: ");
    scanf("%d", &E);

    result = (A*A) + (B*B) + (C*C) + (D*D) + (E*E);

    printf("A soma do quadrado dos valores inseridos: %d\n", result);

    getch();
    return 0;
}
