#include <stdio.h>
#include <stdlib.h>


void exercicio1() {
    FILE* fp;
    
    char linha[1000];
    fp = fopen("ficheiro1.txt","r");

    if ((fp = fopen("ficheiro1.txt","r")) == NULL) {
        printf("Imposs+ivel abrir/criar o ficheiro pretendido\n");
        exit(1);
    }
    else {
        printf("Informação ficheiro:\n");
        while (fgets(linha,1000,fp) != NULL) {
            printf("%s",linha);
        }
        printf("\n");
    }
    fclose(fp);

}

void exercicio2(){
FILE* fp;

if((fp =fopen("ficheiro1.txt","w")) == NULL) {
    printf("Impossível abrir/criar o ficheiro pretendido!\n");
    exit(1);
}
else {
    char texto[50] ="onde esta o texto? \n sera que quebrou?";
    fputs(texto,fp);
}

fclose(fp);

}

void exercicio3(){

    FILE* fp;
    char linha[1000];

    fp = fopen("ficheiro1.txt","r");

    if ((fp = fopen("teste.txt","w+")) == NULL){
        printf("Impossivel abrir/cruar o ficheiro pretendido\n");
        exit(1);
    }
    else {
        fputs("Isto é uma experiencia utilizando o tema de acesso");
        //funcao fseek - serve para posicionar o cursos dentro do ficheiro
        //parametro 1- qual o ficheiro estão a trabalhar
        //parametro 2 - de qual caracter deve comcar a ler a informacao
        //parametro 3 - Onde coloca o cursos (Seek_set(inicio), seek_cur(numa posição a nossa escolha,), seek_end(fim)
        fseek(fp,5,SEEK_SET);
        //funcao fgets serve para obter uma quantidade de informação
        //Parametro 1- qual variavel vai armazenar a informação da linha
        //parametro 2 - quantos caracteres deverá ler a partir do fseek
        //parametro 3 - qal o ficheiro que estão a trabalhar
        fgets(linha,30,fp);
        printf("%s\n",linha);

        fseek(fp,5,SEEK_CUR);
        fgets(linha,30,fp);
        printf("%s \n",linha);

        //ler a informação a partir do final do ficheiro

        fseek(fp,-7,SEEK_END);
        fgets(linha,30,fp);
        printf("%s \n",linha);

    }
}

int main () {
    //exercicio1();
    //exercicio2();
    exercicio3();
    return 0;
}


