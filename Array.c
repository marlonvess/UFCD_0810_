#include <stdio.h>
#include <stdlib.h>

void exercicio2() {
    int listaNumeros [5];
    
    for (int i = 0;i<=4;i++) {
        printf("insira o numero %d:",(i+1));
        scanf("%d",&listaNumeros[i]);
    }
    
    for (int i = 0;i<=4;i++) {
        printf("Números inseridos:%d\n",listaNumeros[i]);
    }
    
}

void exercicio7() {

    int matriz [3][3];

    for (int i = 0;i<3;i++){
        for (int j = 0;j < 3;j++) {
            printf("Insira o valor da linha %d e da coluna %d\n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int i = 0; i < 3;i++) {
        for (int j = 0; j < 3;j++) {
            printf("Valor na linha %d e coluna %d:%d\n",i,j,matriz[i][j]);
        }
    }
}
int main() {
    //exercicio2();
    exercicio7();
    return 0;
}