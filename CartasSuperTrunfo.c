#include <stdio.h>
#include <string.h>

int main (){
    // Dados carta 1
    
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[50];
    int populacao1;
    float area1; 
    float pib1;
    int pontos_turisticos1;

    // dados carta 2
     char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[50];
    int populacao2;
    float area2; 
    float pib2;
    int pontos_turisticos2;

// Estado 
    printf(" Digite o estado da carta-(de A até H): \n");
    scanf(" %c", &estado1);
//Codigo das cartas
    printf(" Digite codigo da carta: \n");
    scanf(" %s", codigo_da_carta1);

// Nome da cidade
    getchar();
    printf(" Digite o nome da cidade:");
    fgets(nome_da_cidade1, 50, stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0';

//População
    printf(" Digite a populacao: \n");
    scanf(" %d", &populacao1);

//Area
    printf(" Digite a area: \n");
    scanf(" %f", &area1);

//PIB
    printf(" Digite o PIB: \n");
    scanf(" %f", &pib1);

// Numero de pontos turisticos
    printf(" Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontos_turisticos1);

// Proxima carta
    printf("Carta Seguinte \n");

// Estado
    printf(" Digite o estado da carta-(de A até H): \n");
    scanf(" %c", &estado2);

//Codigo da carta
    printf(" Digite codigo da carta: \n");
    scanf(" %s", codigo_da_carta2);

// Nome da cidade  
    getchar();
    printf(" Digite o nome da cidade:");
    fgets(nome_da_cidade2, 50, stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0';

// Populaçao
    printf(" Digite a populacao: \n");
    scanf(" %d", &populacao2);

// Area
    printf(" Digite a area: \n");
    scanf(" %f", &area2);

// PIB 
    printf(" Digite o PIB: \n");
    scanf(" %f", &pib2);

// Numero de pontos turisticos
    printf(" Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontos_turisticos2);

//Mostrando Carta1
      printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Area (em km^2) %.2f \n PIB: %.2f \n Número de Pontos Turisticos: %d\n", 
           estado1, codigo_da_carta1, nome_da_cidade1, populacao1, area1, pib1, pontos_turisticos1);

//Mostrando Carta1
    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Area (em km^2) %.2f \n PIB: %.2f \n Número de Pontos Turisticos: %d\n", 
           estado2, codigo_da_carta2, nome_da_cidade2, populacao2, area2, pib2, pontos_turisticos2);
    
    
    
           return 0;
}
