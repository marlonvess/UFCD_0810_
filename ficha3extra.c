#include <stdio.h>

struct Veterinario {
    int ID;
    char Nome[25];
    int Idade;
    char Cidade[25];
};

void Mostra_Veterinario(struct Veterinario registo);


void exercicio2() {
    struct Veterinario registo_veterinario[3]; 

    for (int i = 0; i < 3; i++) {
        printf("Veterinario %d\n", i + 1);
        printf ("ID: ");
        scanf("%d", &registo_veterinario[i].ID);
        printf("Nome: ");
        scanf(" %s", registo_veterinario[i].Nome); 
        printf("Idade: ");
        scanf ("%d", &registo_veterinario[i].Idade);
        printf ("Cidade: ");
        scanf(" %s", registo_veterinario[i].Cidade);
        printf ("\n");
    }

    printf("\n\n Dados Inseridos \n\n");
    for (int i = 0; i < 3; i++) {
        Mostra_Veterinario (registo_veterinario[i]);
      
    }
}

void Mostra_Veterinario(struct Veterinario registo) {
    printf("ID: %d\n", registo.ID);
    printf("Nome: %s\n", registo.Nome);
    printf("Idade: %d\n", registo.Idade);
    printf("Cidade: %s\n", registo.Cidade);
}


int main() {
    exercicio2();
    return 0;
}
