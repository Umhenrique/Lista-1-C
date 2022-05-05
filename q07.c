#include <stdio.h>
#include <conio.h>

int main(void){

    int dimens_1, dimens_2;

    printf("Insira a dimensao da primeira matriz: ");
    scanf("%d", &dimens_1);
    printf("Insira a dimensao da segunda matriz: ");
    scanf("%d", &dimens_2);

    if((dimens_1 % dimens_2) != 0){
        printf("Nao eh possivel multiplicar estas matrizes.");
    } else{
        printf("Eh possivel multiplicar estas matrizes.");
    }

    getch();
    return 0;
}
