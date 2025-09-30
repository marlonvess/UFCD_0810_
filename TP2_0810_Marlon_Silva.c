#include <stdio.h>
#include <string.h>

struct Filme {
    int ID;
    char Nome[50];
    char Tipo_Filme[35];
    int Duracao;
    float Classificacao;
};


struct Realizador {
    char Nome[25];
    char Produtora[50];
    int Idade;
    float Salario;
};


void Mostra_Filme(struct Filme registo) {
    printf("ID: %d\n", registo.ID);
    printf("Nome: %s\n", registo.Nome);
    printf("Tipo do Filme: %s\n", registo.Tipo_Filme);
    printf("Duração: %d minutos\n", registo.Duracao);
    printf("Classificação: %.1f/10\n", registo.Classificacao);
    printf("-------------------");
}


void Mostra_Realizador(struct Realizador registo) {
    printf("Nome: %s\n", registo.Nome);
    printf("Produtora: %s\n", registo.Produtora);
    printf("Idade: %d anos\n", registo.Idade);
    printf("Salário: %.2f€\n", registo.Salario);
    printf("-------------------");
}

void ex1() {

printf("\n Filmes\n");
   struct Filme registo_filmes[3];


   printf("\nInsira os dados de 3 filmes:\n");
    for(int i = 0; i < 3; i++) {
        printf("\nFilme %d \n", i + 1);
        
        printf("ID do filme: ");
        scanf("%d", &registo_filmes[i].ID);
        
        printf("Nome do filme: ");
        scanf("%s", registo_filmes[i].Nome);
        
        printf("Tipo do filme: ");
        scanf("%s", registo_filmes[i].Tipo_Filme);
        
        printf("Duração (em minutos): ");
        scanf("%d", &registo_filmes[i].Duracao);
        
        printf("Classificação de 1 a 10: ");
        scanf("%f", &registo_filmes[i].Classificacao);
    }
    
 
    printf("\nLista de filmes inseridas:\n");
    for(int i = 0; i < 3; i++) {
        Mostra_Filme(registo_filmes[i]);
        printf("\n");
    }

}

void ex2(){
 printf("\n Realizadores \n");
    
    struct Realizador registo_realizadores[4];
    
 
    printf("\nInsira os dados de 4 realizadores:\n");
    for(int i = 0; i < 4; i++) {
        printf("\nRealizador %d\n", i + 1);
        
        printf("Nome do realizador: ");
        scanf("%s", registo_realizadores[i].Nome);
        
        printf("Produtora: ");
        scanf("%s", registo_realizadores[i].Produtora);
        
        printf("Idade: ");
        scanf("%d", &registo_realizadores[i].Idade);
        
        printf("Salário: ");
        scanf("%f", &registo_realizadores[i].Salario);
    }
    

    printf("\n Lista Realizadores \n");
    for(int i = 0; i < 4; i++) {
        Mostra_Realizador(registo_realizadores[i]);
    }
}


int main (){
    //ex1();
    ex2();
    return 0;
}