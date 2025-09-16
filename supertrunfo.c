#include <stdio.h>

int main() {
    
    // abaixo a declaraçao das variaveis da carta1:
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontostur1; // numero de pontos turisticos;
    
    // abaixo a declaraçao das variaveis da carta2:
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;
    
    // entrada de dados da carta1:
    
    printf("Digite uma letra de A até H correspondente ao Estado da primeira carta: \n");
    scanf(" %c", &estado1);  // lê o estado (1 letra)

    printf("Digite o código da primeira carta (ex: A01): \n");
    scanf("%s", codigo1);  // lê o código (string)

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %[^\n]", cidade1);  // lê o nome (aceita espaços)

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1);  // lê população (inteiro)

    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &area1);  // lê área (decimal)

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);  // lê PIB (decimal)

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontostur1);  // lê pontos turísticos (inteiro)

     // entrada da carta2:
    
    printf("Digite uma letra de A até H correspondente ao Estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontostur2);
    
       // título do jogo
    printf("************************************\n");
    printf("*        SUPER TRUNFO               *\n");
    printf("************************************\n\n");

    // exibindo os dados da carta1
    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostur1);
    
    
    printf("\n------------------------------------\n\n");

    // exibindo os dados da carta2:
    
    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostur2);


    return 0;
}

