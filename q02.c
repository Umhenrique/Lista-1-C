#include <stdio.h>
#include <conio.h>

int main(void){

    const int LIST = 5;
    int num[LIST];
    int result = 0;

    for(int i = 0; i < LIST; i++){
        printf("Insira o valor do indice [ %d ]: ", i);
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < LIST; i++){
        result = result + (num[i] * num[i]);
    }

    printf("A soma dos quadrados dos valores: %d \n", result);

    getch();

    return 0;
}

