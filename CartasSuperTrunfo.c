#include <stdio.h>

int main() {
    

    // Variáveis da Carta 1
    char Estado1;
    char CodigoCarta1[4];    // 3 caracteres + '\0'
    char NomeCidade1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;


    // Variáveis da Carta 2
    char Estado2;
    char CodigoCarta2[4];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;


    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1\n");

    printf("Estado (letra de 'A' a 'H'):\n");
    scanf(" %c", &Estado1);  // espaço para limpar buffer

    printf("Código da Carta (ex: A01):\n");
    scanf("%3s", CodigoCarta1);

    printf("Nome da Cidade:\n");
    scanf("%49s", NomeCidade1);

    printf("População:\n");
    scanf("%d", &Populacao1);

    printf("Área (em km²):\n");
    scanf("%f", &Area1);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &Pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &PontosTuristicos1);


    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2\n");

    printf("Estado (letra de 'A' a 'H'):\n");
    scanf(" %c", &Estado2);

    printf("Código da Carta (ex: B02):\n");
    scanf("%3s", CodigoCarta2);

    printf("Nome da Cidade:\n");
    scanf("%49s", NomeCidade2);

    printf("População:\n");
    scanf("%d", &Populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &Area2);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &Pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &PontosTuristicos2);


    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
   
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);


    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
   
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);

    
    return 0;
}
