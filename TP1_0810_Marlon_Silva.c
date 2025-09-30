#include <stdio.h>

void ex1() {

    int listaNumeros [4];
    
    for (int i = 0;i<4;i++) {
        printf("insira o numero %d:",(i+1));
        scanf("%d",&listaNumeros[i]);
    }

    printf("Números inseridos:");
    for (int i = 0;i<4;i++) {
        printf("%d\n",listaNumeros[i]);
    }

}

void ex2() {
    int listaNumeros [4];
    int par,impar;

    for (int i = 0;i<4;i++) {
        printf("insira o numero %d:",(i+1));
        scanf("%d",&listaNumeros[i]);
    }

    for (int i = 0;i<4;i++) {
        if (listaNumeros[i]%2 ==0)
        {
            par++;
        }
        else {
            impar++;
            }
    }

     printf("\nPares: %d\n", par);
     printf("Impares: %d\n", impar);
}

void ex3() {

    int listaNumeros [6];
    int numProcura,numAchado;

    for (int i = 0;i<6;i++) {
        printf("insira o numero %d:",(i+1));
        scanf("%d",&listaNumeros[i]);
    }
           
        printf("Qual número deseja procurar?:");
        scanf("%d",&numProcura);

        
        for (int i = 0; i < 6; i++) {
        if (listaNumeros[i] == numProcura){
            printf("O número se encontra alocado no array %d ou número %d",i,(i+1));
             numAchado = 1;
        }
        }
         if (numAchado <= 0) {
            printf("O número não foi encontrado na lista de arrays\n");
        }
}

int main (){
    //ex1();
    //ex2();
    //ex3();
    return 0;
}