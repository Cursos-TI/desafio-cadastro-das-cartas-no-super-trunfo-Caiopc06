#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Declaração das variáveis que usei no meu código
char estado1;
char estado2;
char codigo1[50];
char codigo2[50];
char cidade1[50];
char cidade2[50];
int populacao1;
int populacao2;
float area1;
float area2;
float PIB1;
float PIB2;
int numPont1;
int numPont2;

// começo do código
int main (){ // aqui começa a interação do usuário, informando o dados necessários para cadastro
    printf("Digite os seguintes dados da Carta 1: \n"); // aqui o usuário irá informar os dados da Carta 1

    printf("O Estado da Carta 1: "); // o usuário irá digitar o estado referente à carta
    scanf("%c", &estado1); // ocorrerá a leitura da variável "estado1"

    printf("O Código da Carta 1: "); // o usuário irá digitar o código referente à carta
    scanf("%s", &codigo1); // ocorrerá a leitura da variável "codigo1"

    printf("O nome da cidade da Carta 1: "); // o usuário irá digitar o nome da cidade referente à carta
    scanf("%s", &cidade1); // ocorrerá a leitura da variável "cidade1"
    //obs: Sem colocar espaço, eu usei as siglas (rj), (sp), senão o programa irá parar

    printf("A população da cidade referente à Carta 1: "); // o usuário irá digitar a população da cidade
    scanf("%d", &populacao1); // ocorrerá a leitura da variável "populacao1"

    printf("A área (em metros quadrados) da cidade referente à Carta 1: "); // o usuário irá digitar a área da cidade
    scanf("%f", &area1); // ocorrerá a leitura da variável "area1"

    printf("O PIB (Poduto Interno Bruto), em bilhões de reais, da cidade referente à Carta 1: "); // o usuário irá digitar o PIB da cidade
    scanf("%f", &PIB1); // ocorrerá a leitura da variável "PIB1"
    // obs: tanto no pib, quanto na área, não consegui definir as casas decimais

    printf("O número de pontos turísticos existente na cidade referente à Carta 1: "); // o usuário irá digitar o número de pontos turísticos da cidade
    scanf("%d", &numPont1); // ocorrerá a leitura da variável "numPont1"
    
    printf("\n"); //comando usado para pular uma linha no terminal

    printf("Digite os seguintes dados da Carta 2: \n"); // aqui o usuário irá informar os dados da Carta 2

    printf("O Estado da carta 2: "); // o usuário irá digitar o estado referente à carta
    scanf("%s", &estado2); // ocorrerá a leitura da variável "estado2"

    printf("O Código da Carta 2: "); // o usuário irá digitar o código referente à carta
    scanf("%s", &codigo2); // ocorrerá a leitura da variável "codigo2"

    printf("O nome da cidade da Carta 2: "); // o usuário irá digitar o nome da cidade referente à carta
    scanf("%s", &cidade2); // ocorrerá a leitura da variável "cidade2"
    //obs: Sem colocar espaço, eu usei as siglas (rj), (sp), senão o programa irá parar

    printf("A população da cidade referente à Carta 2: "); // o usuário irá digitar a população da cidade referente à carta
    scanf("%d", &populacao2);  // ocorrerá a leitura da variável "populacao2"

    printf("A área (em metros quadrados) da cidade referente à Carta 2: "); // o usuário irá digitar a área da cidade
    scanf("%f", &area2); // ocorrerá a leitura da variável "area2"

    printf("O PIB (Poduto Interno Bruto), em bilhões de reais, da cidade referente à Carta 2: ");  // o usuário irá digitar o PIB da cidade
    scanf("%f", &PIB2); // ocorrerá a leitura da variável "PIB2"
    // obs: tanto no pib, quanto na área, não consegui definir as casas decimais

    printf("O número de pontos turísticos existente na cidade referente à Carta 2: ");  // o usuário irá digitar o número de pontos turísticos da cidade
    scanf("%d", &numPont2); // ocorrerá a leitura da variável "numPont2"

    printf("\n"); // comando usado para pular uma linha no terminal

    printf("Cadastros das cartas: \n"); // a partir daqui será mostrado os dados para cadastro das cartas
    printf("\n");
    printf("Carta 1: \n"); // aqui começa a informação dos dados informados para cadastro da carta 1

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1); 
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numPont1);

    printf("\n"); // comando usado para pular uma linha no terminal
    printf("Carta 2: \n"); // aqui começa a informação dos dados informados para cadastro da carta 2

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2); 
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numPont2);

    return 0; 

}
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
