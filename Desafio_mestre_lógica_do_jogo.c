// programa feito por: Caio Pereira Cavalcanti.
//Data: 13/03/25
//Desafio mestre Desenvolvendo a lógica do jogo.
//Objetivo do programa: permitir que o jogador escolha dois atributos para comparar as cartas de países e saber qual o vencedor.

#include <stdio.h> // começo do programa

int main () {
// Declaração das variáveis
    char nome_pais1[50], nome_pais2[50];
    int populacao1, populacao2, pont_turisticos1, pont_turisticos2, opcao1, opcao2, opcao_inicio;
    float area1, area2, pib1, pib2, dens_demografica1, dens_demografica2, soma1, soma2;
// Começo do cadastro das cartas

    soma1 = 0;
    soma2 = 0;

    printf("--- Menu principal ---\n");
    printf("\n");
    printf("1. Iniciar o jogo.\n");
    printf("2. Regras do jogo.\n");
    printf("3. Sair do jogo.\n");
    printf("\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao_inicio);

    switch (opcao_inicio){
        case 1: 
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
// Jogador escolherá dois atribitos para comparar as cartas
    
          printf("Escolha um atributo para ver qual carta será a vencedora: \n");
          printf("1. População.\n");
          printf("2. Área.\n");
          printf("3. PIB.\n");
          printf("4. Número de pontos turísticos.\n");
          printf("5. Densidade demográfica.\n");
          printf("\n");

          printf("Escolha a primeira opção (número): ");
          scanf("%d", &opcao1);

          printf("Escolha a segunda opção (número): ");
          scanf("%d", &opcao2);

          opcao1 == opcao2? printf("Opção inválida! Tente novamente.\n") : printf("Abaixo segue o resultado final das cartas:\n");
// De acordo com as opções escolhidas, ocorrerá a comparação dos atributos para saber qual carta venceu.
        switch(opcao1){ // soma acumulada para saber a soma final dos dois atributos escolhidos, das respectivas cartas, pelo jogador.
            case 1:
             soma1 = (float)soma1 + populacao1;
             soma2 = (float)soma2 + populacao2;
            break;
            case 2:
             soma1 = (float)soma1 + area1;
             soma2 = (float)soma2 + area2;
            break;
            case 3:
             soma1 = (float)soma1 + pib1;
             soma2 = (float)soma2 + pib2;
            break;
            case 4:
             soma1 = (float)soma1 + pont_turisticos1;
             soma2 = (float)soma2 + pont_turisticos2;
            break;
            case 5:
             soma1 = (float)soma1 + dens_demografica1;
             soma2 = (float)soma2 + dens_demografica2;
            break;
            default: 
              printf("Opção inválida! Tente novamente.\n");
            break;
        }

        switch(opcao2){
            case 1:
              soma1 = (float)soma1 + populacao1;
              soma2 = (float)soma2 + populacao2;
            break;
            case 2:
              soma1 = (float)soma1 + area1;
              soma2 = (float)soma2 + area2;
            break;
            case 3:
              soma1 = (float)soma1 + pib1;
              soma2 = (float)soma2 + pib2;
            break;
            case 4:
              soma1 = (float)soma1 + pont_turisticos1;
              soma2 = (float)soma2 + pont_turisticos2;
            break;
            case 5:
              soma1 = (float)soma1 + dens_demografica1;
              soma2 = (float)soma2 + dens_demografica2;
            break;
            default: 
              printf("Opção inválida! Tente novamente.\n");
            break;
        } // fim das somas acumuladas dos atributos escolhidos
    // exibição dos atributos das cartas e a carta vencedora
        printf("--------------------------------\n");
        printf("   comparação entre as cartas   \n");
        printf("\n");
        printf("Carta 1 x Carta 2 (respectivamente)\n");
        printf("\n");
        printf("Nomes: %s X %s\n", nome_pais1, nome_pais2);
        printf("\n");
        switch(opcao1){ // estrutura switch para as opções de astributos escolhidas pelo jogador
            case 1:
              printf("Primeiro atributo escolhido: População. \n");
              printf("Valores: carta1 (%d) X carta2 (%d).\n", populacao1, populacao2);
              printf("\n");
            break;
            case 2:
              printf("Primeiro atributo escolhido: Área. \n");
              printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", area1, area2);
              printf("\n");
            break;
            case 3:
              printf("Primeiro atributo escolhido: PIB. \n");
              printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", pib1, pib2);
              printf("\n");
            break;
            case 4:
              printf("Primeiro atributo escolhido: Número de pontos turísticos. \n");
              printf("Valores: carta1 (%d) X carta2 (%d).\n", pont_turisticos1, pont_turisticos2);
              printf("\n");
            break;
            case 5:
              printf("Primeiro atributo escolhido: Densidade demográfica. \n");
              printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", dens_demografica1, dens_demografica2);
              printf("\n");
            break;
            default: 
              printf("Opção inválida! Tente novamente.");
            break;
        }
        switch(opcao2){
            case 1:
                printf("Segundo atributo escolhido: População. \n");
                printf("Valores: carta1 (%d) X carta2 (%d).\n", populacao1, populacao2);
                printf("\n");
            break;
            case 2:
                printf("Segundo atributo escolhido: Área. \n");
                printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", area1, area2);
                printf("\n");
            break;
            case 3:
                printf("Segundo atributo escolhido: PIB. \n");
                printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", pib1, pib2);
                printf("\n");
            break;
            case 4:
                printf("Segundo atributo escolhido: Número de pontos turísticos. \n");
                printf("Valores: carta1 (%d) X carta2 (%d).\n", pont_turisticos1, pont_turisticos2);
                printf("\n");
            break;
            case 5:
                printf("Segundo atributo escolhido: Densidade demográfica. \n");
                printf("Valores: carta1 (%.2f) X carta2 (%.2f).\n", dens_demografica1, dens_demografica2);
                printf("\n");
            break;
            default: 
                printf("opção inválida! tente novamente.");
            break;
        }
        
        printf("Soma dos atributos: %.2f x %.2f\n", soma1, soma2); // exibição das somas dos atributos escolhidos
        printf("\n");

        if (soma1 == soma2){ // resultado final (vencedor)
            printf("\n");
            printf("Resultado final: Empate!\n");
        } else if (soma1 > soma2){
            printf("\n");
            printf("Resultado final: Carta 1 venceu!\n");
        } else if(soma2 > soma1){
            printf("\n");
            printf("Resultado final: carta 2 venceu!\n");
        }
        printf("\n");

    break;
    case 2: 
      printf("*** Regras ***\n");
      printf("\n");
      printf("1. Embaralhe o bolo e sorteie as cartas de forma aleatória. \n");
      printf("2. Após ter a carta em suas mãos, informe todos os atributos presente nela ao jogo. \n");
      printf("3. Após informar, escolha 2(dois) atributos para jogar contra seu adversário. \n");
      printf("4. Após escolher os atributos, o resultado final já aparecerá, podendo já saber quem será o vencedor.\n");
    break;
    case 3: 
      printf("Saindo do jogo...\n");
    break;
    }

        return 0;
}// Fim do programa.