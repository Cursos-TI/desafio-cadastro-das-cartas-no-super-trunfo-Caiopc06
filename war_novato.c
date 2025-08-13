// Programa Desafio Novato - War
// Feito por: Caio Pereira Cavalcanti
// Data : 13/08/2025

// Inclusão de Bibliotecas: 
#include <stdio.h>
#include <string.h>

int main(){

    #define tam_palavras 100 // Define tamanho das strings
    #define max_territorios 5 // Define a quantidade máxima de territórios

    struct Territorio { // Criação da Classe Território
        char nome[tam_palavras];
        char cor_exercito[tam_palavras];
        int quant_tropas;
    };

    void limparBufferEntrada() { // Limpar o Buffer da função "Scanf()"
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    struct Territorio territorio[max_territorios]; // Criando o vetor territorio
    int totalTerritorios = 0; // Para o looping for/do

    do { // Fará o layoult e funcionamento para cadastro dos territórios
        printf("================");

        printf("Bem-vindo ao cadastro dos territorios!");

        printf("================\n");
    
        int i = 0;
        for (int i = 0; i < 5; i++){ // looping for para cadastro dos terriórios (Quantidade = 5)
            printf("\n");
            printf("Digite os dados do %d territorio: \n", i+1);

            printf("Nome do territorio: ");
            fgets(territorio[totalTerritorios].nome, tam_palavras, stdin);

            printf("Cor do exercito: ");
            fgets(territorio[totalTerritorios].cor_exercito, tam_palavras, stdin);

            territorio[totalTerritorios].nome[strcspn(territorio[totalTerritorios].nome, "\n")] = '\0'; // Guarda o valor passado na variável "nome" do territorio
            territorio[totalTerritorios].cor_exercito[strcspn(territorio[totalTerritorios].cor_exercito, "\n")] = '\0'; // Guarda o valor passado na variável "cor_exercito" do territorio

            printf("Quantidade de tropas: ");
            scanf("%d", &territorio[totalTerritorios].quant_tropas); // Guarda o valor passado na variável "quant_tropas" do territorio
            limparBufferEntrada();

            printf("\n");

            totalTerritorios++; // totalTerritorios = totalTerritorios + 1
        };
    } while (totalTerritorios < 5); // Fazer o código passado enquanto a quantidade total de territórios for menos que 5

    printf("========= Dados cadastrados de cada territorio =========\n"); // Imprimindo os dados dos territórios informados pelo usuário

    for (int i = 0; i < 5; i++){

        printf(" ---> Territorio %d: \n", i+1); // Informa qual território que está sendo informado os dados 

        printf("\n");

        printf("Nome: %s\n", territorio[i].nome);
        printf("Cor: %s\n", territorio[i].cor_exercito);
        printf("Quantidade de tropas: %d\n", territorio[i].quant_tropas);

        printf("\n");
    }

    return 0;
}