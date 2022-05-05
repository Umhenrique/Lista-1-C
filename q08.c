#include <stdio.h>
#include <conio.h>

int main(void){
/* COLLS = Colunas / ROWS = Linhas */
    const int COLLS = 2;
    const int ROWS = 2;
    int matriz_1[COLLS][ROWS];
    int matriz_2[2][1];
    int matriz_mult[2][1];

    printf("Insira os valores da matriz 2 X 2\n");
    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            printf("Insira o valor da primeira matriz, indice [ %d ][ %d ]: ", i, j);
            scanf("%d", &matriz_1[i][j]);
        }
    }
    printf("Insira os valores da matriz 2 X 1\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 1; j++){
            printf("Insira o valor da segunda matriz, indice [ %d ][ %d ]: ", i, j);
            scanf("%d", &matriz_2[i][j]);
matriz_mult[0][0] = ((matriz_1[0][0] * matriz_2[0][0]) + (matriz_1[0][1] * matriz_2[1][0]));
matriz_mult[1][0] = ((matriz_1[1][0] * matriz_2[0][0]) + (matriz_1[1][1] * matriz_2[1][0]));
        }
    }


    printf("\n-    -\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 1; j++){
                printf("| %d", matriz_mult[i][j]);
                printf(" |");
        }
        printf("\n");
    }
    printf("-    -");


    getch();
    return 0;
}
