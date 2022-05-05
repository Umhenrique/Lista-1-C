#include <stdio.h>
#include <conio.h>

int main(void){
/* COLLS = Colunas / ROWS = Linhas */
    const int COLLS = 2;
    const int ROWS = 2;
    int num[COLLS][ROWS];

    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            printf("Insira o valor do indice [ %d ][ %d ]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }


    printf("\n-      -\n");
    for(int i = 0; i < COLLS; i++){
        for(int j = 0; j < ROWS; j++){
            if(j == 0){
                printf("|");
                printf("%d ", num[i][j]);
            } else{
                printf(" %d", num[i][j]);
                printf("|");
            }
        }
        printf("\n");
    }
    printf("-      -");
    getch();

    return 0;
}
