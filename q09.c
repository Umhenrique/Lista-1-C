#include <stdio.h>
#include <conio.h>

int main(){

    int matriz_A[2][3];
    int matriz_B[3][2];
    int matriz_C[2][2];

    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 3; j ++){
            printf("Insira o valor da matriz A indice [ %d ][ %d ]: ", i, j);
            scanf("%d", &matriz_A[i][j]);
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 2; j ++){
            printf("Insira o valor da matriz B indice [ %d ][ %d ]: ", i, j);
            scanf("%d", &matriz_B[i][j]);
        }
    }
matriz_C[0][0] = ((matriz_A[0][0] * matriz_B[0][0]) + (matriz_A[0][1] * matriz_B[1][0]) + (matriz_A[0][2] * matriz_B[2][0]));
matriz_C[1][0] = ((matriz_A[1][0] * matriz_B[0][0]) + (matriz_A[1][1] * matriz_B[1][0]) + (matriz_A[1][2] * matriz_B[2][0]));
matriz_C[0][1] = ((matriz_A[0][0] * matriz_B[1][0]) + (matriz_A[0][1] * matriz_B[1][1]) + (matriz_A[0][2] * matriz_B[1][2]));
matriz_C[1][1] = ((matriz_A[1][0] * matriz_B[1][0]) + (matriz_A[1][1] * matriz_B[1][1]) + (matriz_A[1][2] * matriz_B[1][2]));
printf(" %d", matriz_C[0][0]);
    printf("\n-      -\n");
    for(int i = 0; i < 2; i++){
            printf("|");
        for(int j = 0; j < 2; j++){
                printf(" %d", matriz_C[i][j]);
        }
        printf("|\n");
    }
    printf("-      -");

    getch();

    return 0;
}
