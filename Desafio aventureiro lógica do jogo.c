// programa feito por: Caio Pereira Cavalcanti
//Data: 12/03/25
//Desafio aventureiro Desenvolvendo a lógica do jogo

#include <stdio.h> // começo do programa

int main () {
// Declaração das variáveis
    char nome_pais1[50], nome_pais2[50];
    int populacao1, populacao2, pont_turisticos1, pont_turisticos2, opcao_escolhida;
    float area1, area2, pib1, pib2, dens_demografica1, dens_demografica2;
// Começo do cadastro das cartas
    printf("--- Cadastro das cartas de super trunfo! ---\n"); 
    printf("\n");

    printf("------------------------------------\n");
    printf("**Cadastro da carta 1: **"); 
    printf("\n"); 

    printf("Digite o nome de seu país: "); 
    scanf("%s", &nome_pais1);

    printf("Digite a população (em milhões) de sua cidade: "); 
    scanf("%d", &populacao1); 

    printf("Digite a área de sua cidade (em km²): "); 
    scanf("%f", &area1); 

    printf("Digite o PIB de sua cidade (em bilhões de reais): "); 
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos de sua cidade: ");
    scanf("%d", &pont_turisticos1); 

    dens_demografica1 == populacao1 / area1;
// Fim cadastro da carta 1
    printf("------------------------------------\n"); 
// Começo cadastro da carta 2
    printf("**Cadastro da carta 2: **"); 
    printf("\n");

    printf("Digite o nome de seu país: "); 
    scanf("%s", &nome_pais2);

    printf("Digite a população (em milhões) de seu país: "); 
    scanf("%d", &populacao2); 

    printf("Digite a área de seu país (em km²): "); 
    scanf("%f", &area2); 

    printf("Digite o PIB de sua cidade (em bilhões de reais): "); 
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos de sua cidade: ");
    scanf("%d", &pont_turisticos2); 

    dens_demografica2 == populacao2 / area2;
// Fim cadastro da carta 2
    printf("------------------------------------\n"); // fim do armazenamento de dados pelo usuário
    printf("\n");
// Jogador escolherá um atribito para comparar as cartas
    
    printf("Escolha um atributo para ver qual carta será a vencedora: \n");
    printf("1. Nome do país (apenas exibição).\n");
    printf("2. População.\n");
    printf("3. Área.\n");
    printf("4. PIB.\n");
    printf("5. Número de pontos turísticos.\n");
    printf("6. Densidade demográfica.\n");
    printf("\n");

    printf("Opção escolhida (número): ");
    scanf("%d", &opcao_escolhida);
// De acordo com a opção escolhida, ocorrerá a comparação dos atributos para saber qual carta venceu.
    switch(opcao_escolhida){
        case 1: 
          printf("%s e %s. \n", nome_pais1, nome_pais2);
          printf("Atributo escolhido: nome do país. \n");
          printf("Valores: não existe.\n");
          printf("Carta vencedora: não existe.\n");
           if (nome_pais1 == nome_pais2) {
            printf("Empate!");
           }
        break;
        case 2:
          printf("%s e %s. \n", nome_pais1, nome_pais2);
          printf("Atributo escolhido: População. \n");
          printf("Valores: carta1 (%d) X carta2 (%d).\n", populacao1, populacao2);
           if (populacao1 > populacao2) {
            printf("Carta vencedora: Carta 1!");
           } else if (populacao2 > populacao1){
            printf("Carta vencedora: Carta 2!");
           } else if (populacao1 == populacao2) {
            printf("Empate!");
           }
        break;
        case 3:
          printf("%s e %s. \n", nome_pais1, nome_pais2);
          printf("Atributo escolhido: Área. \n");
          printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", area1, area2);
           if (area1 > area2) {
            printf("Carta vencedora: Carta 1!");
           } else if (area2 > area1){
            printf("Carta vencedora: Carta 2!");
           } else if (area1 == area2) {
            printf("Empate!");
           }
        break;
        case 4:
          printf("%s e %s. \n", nome_pais1, nome_pais2);
          printf("Atributo escolhido: PIB. \n");
          printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", pib1, pib2);
           if (pib1 > pib2) {
            printf("Carta vencedora: Carta 1!");
           } else if (pib2> pib1){
            printf("Carta vencedora: Carta 2!");
           } else if (pib1 == pib2) {
            printf("Empate!");
           }
        break;
        case 5:
          printf("%s e %s. \n", nome_pais1, nome_pais2);
          printf("Atributo escolhido: Número de pontos turísticos. \n");
          printf("Valores: carta1 (%d) X carta2 (%d).\n", pont_turisticos1, pont_turisticos2);
           if (pont_turisticos1 > pont_turisticos2) {
            printf("Carta vencedora: Carta 1!");
           } else if (pont_turisticos2 > pont_turisticos1){
            printf("Carta vencedora: Carta 2!");
           } else if (pont_turisticos1 == pont_turisticos2) {
            printf("Empate!");
           }
        break;
        case 6:
          printf("%s e %s. \n", nome_pais1, nome_pais2);
          printf("Atributo escolhido: Densidade demográfica. \n");
          printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", dens_demografica1, dens_demografica2);
           if (dens_demografica1 > dens_demografica2) {
            printf("Carta vencedora: Carta 2!");
           } else if (dens_demografica2 > dens_demografica1){
            printf("Carta vencedora: Carta 1!");
           } else if (dens_demografica1 == dens_demografica2) {
            printf("Empate!");
           }
        break;

        return 0;
    }
}// Fim do programa.
