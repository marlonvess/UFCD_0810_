#include <stdio.h>
#include <string.h>

void ex1() {
    FILE *fp;
    char texto[1000];

    fp = fopen("ficheiro_tp3.txt", "r"); // Abre o ficheiro em modo leitura ("r") 
    if (fp == NULL) { 
        printf("Erro ao ler ficheiro\n");// Se fopen falhar, retorna com a mensagem de erro
    } 
    
    else {
        while (fgets(texto, 1000, fp) != NULL) { // Enquanto conseguir ler uma linha do ficheiro de até 999 caracteres pois a contagem inicia no 0
            printf("%s", texto);
        }
        fclose(fp);//fecha o ficheiro
    }
}

void ex2() {
 FILE *fp;

    fp = fopen("ficheiro_tp3_escrita.txt", "w"); // Abre/cria o ficheiro em modo escrita ("w"), se existir algo, ele apaga
    if (fp == NULL) {
        printf("Erro ao criar o ficheiro\n"); // se não conseguir emite o erro
    } 
    
    else {
        char texto[100] = "it's dangerous to go alone."; //o que será incluído no ficheiro
        fputs(texto, fp);   //executa o procedimento de escrita no ficheira
    }
fclose(fp); //fecha o ficheiro
}

void ex3() {
   FILE *fp;

    fp = fopen("ficheiro_tp3_escrita.txt", "a"); // Abre ficheiro em modo append ("a") acrescenta no final
    if (fp == NULL) {
        printf("Erro ao abrir o ficheiro\n"); //mensagem de erro
    } else {
        char expressao[150] = "This was a triumph.I'm making a note here:HUGE SUCCESS.It's hard to overstate my satisfaction.";
        fputs(expressao, fp);  
    }
    fclose(fp);//fecha ficheiro
}

int main (){
    //ex1();
    //ex2();
    //ex3();
    printf("precisa tirar os comentários dos exercicios e seguir a ordem\n");
    return 0;
}
