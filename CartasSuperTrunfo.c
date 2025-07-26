#include <stdio.h>

int main() {
    

    // Variáveis da Carta 1
    char Estado1;
    char CodigoCarta1[4]; 
    char NomeCidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float Pibpercapita1;
    float Densidadepopulacional1; 
    float Superpoder1;
    
    // Variáveis da Carta 2
    char Estado2;
    char CodigoCarta2[4];
    char NomeCidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;
    float Pibpercapita2;
    float Densidadepopulacional2;
    float Superpoder2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1\n");

    printf("Estado (letra de 'A' a 'H'):\n");
    scanf(" %c", &Estado1);  // espaço para limpar buffer

    printf("Código da Carta (ex: A01):\n");
    scanf("%3s", CodigoCarta1);

    printf("Nome da Cidade:\n");
    scanf("%49s", NomeCidade1);

    printf("População:\n");
    scanf("%lu", &Populacao1);

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
    scanf("%lu", &Populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &Area2);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &Pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &PontosTuristicos2);

    // Cálculo da Densidade Populacional
    Densidadepopulacional1 = Populacao1 / Area1;  //Carta 1
    Densidadepopulacional2 = Populacao2 / Area2; //Carta 2

    // Cálculo do PIB per Capita
    Pibpercapita1 = (Pib1 * 1000000000) / Populacao1;  //Carta 1
    Pibpercapita2 = (Pib2 * 1000000000) / Populacao2; //Carta 2
    
    // Cálculo do SuperPoder 
    Superpoder1 = (float)Populacao1 + Area1 + (Pib1 * 1000000000) + (float)PontosTuristicos1 + Pibpercapita1 + (1/Densidadepopulacional1);
    Superpoder2 = (float)Populacao2 + Area2 + (Pib2 * 1000000000) + (float)PontosTuristicos2 + Pibpercapita2 + (1/ Densidadepopulacional2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
   
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidadepopulacional1);
    printf(" PIB per capita: %.2f Reais\n", Pibpercapita1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
   
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidadepopulacional2);
    printf(" PIB per capita: %.2f Reais\n", Pibpercapita2);
 
    //Comparação entre as cartas
   printf("***Comparação entre as Cartas***\n\n");

   printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
   printf("Area: Carta 1 venceu (%d)\n", Area1 > Area2);
   printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
   printf("Pontos Turisticos: Carta 1 vencer (%d)\n", PontosTuristicos1 > PontosTuristicos2 );
   printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidadepopulacional1 > Densidadepopulacional2);
   printf("PIB per Capita: Carta 1 venceu (%d)\n", Pibpercapita1 > Pibpercapita2);
   printf("Super Poder: Carta 1 venceu (%d)\n", Superpoder1 > Superpoder2);
  
  
   return 0;
    
}
