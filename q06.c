#include <stdio.h>
#include <conio.h>

int main(void){
/* COLLS = Colunas / ROWS = Linhas */
    const int COLLS = 2;
    const int ROWS = 2;
    int matriz[COLLS][ROWS];
    int matriz_escalar[COLLS][ROWS];
    int escalar;


    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            printf("Insira o valor da primeira matriz, indice [ %d ][ %d ]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Insira o valor do escalar: ", escalar);
    scanf("%d", &escalar);

    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            matriz_escalar[i][j] = matriz[i][j] * escalar;
        }
    }


    printf("\n-      -\n");
    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            if(j == 0){
                printf("|");
                printf("%d ", matriz_escalar[i][j]);
            } else{
                printf(" %d", matriz_escalar[i][j]);
                printf("|");
            }
        }
        printf("\n");
    }
    printf("-      -");


    getch();
    return 0;
}
