#include <stdio.h>

int main () {

    char estado1[50], estado2[50], codigo1[50], codigo2[50], nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, pont_turisticos1, pont_turisticos2;
    float area1, area2, pib1, pib2, dens_populacional1, dens_populacional2, pib_per_capta1, pib_per_capta2;

    printf("--- Cadastro das cartas de super trunfo! ---\n"); 
    printf("\n");

    printf("------------------------------------\n");
    printf("**Cadastro da carta 1: **"); 
    printf("\n"); 

    printf("Digite seu estado: "); 
    scanf("%c", &estado1); 

    printf("Digite seu código: ");
    scanf("%s", &codigo1); 

    printf("Digite o nome de sua cidade: "); 
    scanf("%s", &nome_cidade1);

    printf("Digite a população de sua cidade: "); 
    scanf("%d", &populacao1); 

    printf("Digite a área de sua cidade (em km²): "); 
    scanf("%f", &area1); 

    printf("Digite o PIB de sua cidade (em bilhões de reais): "); 
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos de sua cidade: ");
    scanf("%d", &pont_turisticos1); 

    dens_populacional1 == populacao1 / area1;
    pib_per_capta1 == pib1 / populacao1;

    printf("------------------------------------\n"); 

    printf("**Cadastro da carta 2: **"); 
    printf("\n");

    printf("Digite seu estado: "); 
    scanf("%c", &estado2); 

    printf("Digite seu código: ");
    scanf("%s", &codigo2); 

    printf("Digite o nome de sua cidade: "); 
    scanf("%s", &nome_cidade2);

    printf("Digite a população de sua cidade: "); 
    scanf("%d", &populacao2); 

    printf("Digite a área de sua cidade (em km²): "); 
    scanf("%f", &area2); 

    printf("Digite o PIB de sua cidade (em bilhões de reais): "); 
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos de sua cidade: ");
    scanf("%d", &pont_turisticos2); 

    dens_populacional2 == populacao2 / area2;
    pib_per_capta2 == pib2 / populacao2;

    printf("------------------------------------\n"); // fim do armazenamento de dados pelo usuário
    printf("\n");

    printf("***   Resultado do vencedor em cada atributo:   ***\n");

    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu!\n");
    }
    else {
        printf("População: Carta 2 venceu!\n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu!\n");
    }
    else {
        printf("Área: Carta 2 venceu!\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu!\n");
    }
    else {
        printf("PIB: Carta 2 venceu!\n");
    }

    if (dens_populacional1 > dens_populacional2){
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }
    else {
        printf("Densidade Populacional: Carta 1 venceu!\n");
    }

    if (pib_per_capta1 > pib_per_capta2) {
        printf("PIB per capta: Carta 1 venceu!\n");
    }
    else{
        printf("PIB per capta: Carta 2 venceu!\n");
    }

    printf("\n");

    printf("***   Fim dos resultados   ***");

    return 0;
}