#include <stdio.h>
#include <conio.h>

int main(void){
/* COLLS = Colunas / ROWS = Linhas */
    const int COLLS = 2;
    const int ROWS = 2;
    int matriz_1[COLLS][ROWS];
    int matriz_2[COLLS][ROWS];
    int matriz_soma[COLLS][ROWS];

    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            printf("Insira o valor da primeira matriz, indice [ %d ][ %d ]: ", i, j);
            scanf("%d", &matriz_1[i][j]);
        }
    }

    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            printf("Insira o valor da segunda matriz, indice [ %d ][ %d ]: ", i, j);
            scanf("%d", &matriz_2[i][j]);
            matriz_soma[i][j] = matriz_1[i][j] + matriz_2[i][j];
        }
    }


    printf("\n-      -\n");
    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            if(j == 0){
                printf("|");
                printf("%d ", matriz_soma[i][j]);
            } else{
                printf(" %d", matriz_soma[i][j]);
                printf("|");
            }
        }
        printf("\n");
    }
    printf("-      -");


    getch();
    return 0;
}
