#include <stdio.h>

// Programa Super Trunfo - Cadastro de 2 cartas
int main() {
    // ----------- Carta 1 -----------
    char estado1;                // Estado da carta (A-H)
    char codigo1[4];             // Codigo da carta (ex: 01)
    char nomeCidade1[100];        // Nome da cidade
    int populacao1;              // Populacao
    float area1;                 // Area em km2
    float pib1;                  // PIB
    int pontosTuristicos1;       // Numero de pontos turisticos
    float densidadePopulacional1; // Densidade populacional (populacao/area)
    float pibPerCapita1;          // PIB per capita (pib/populacao)
    float SuperPoder1;         // Super Poder (calculo a definir)

    // ----------- Carta 2 -----------
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float SuperPoder2;

    // Cadastro da Carta 1

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1\n");

    // Letra do estado (A-H)
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    // Codigo da carta (ex: 01)
    printf("Digite o codigo da carta (ex: 01): ");
    scanf("%s", codigo1);

    // Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // permite espaco no nome da cidade

    // Populacao
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    // Area
    printf("Digite a area em km2: ");
    scanf("%f", &area1);

    // PIB
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    // Numero de pontos turisticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //calculo da densidade populacional
    densidadePopulacional1 = populacao1 / area1;

    //calculo do pib per capita
    pibPerCapita1 = pib1 * 1e9 / populacao1; // Convertendo PIB para reais

    //calculo do super poder (exemplo: soma de densidade e pib per capita)
    SuperPoder1 = populacao1 + area1 + pibPerCapita1 + pib1 + pontosTuristicos1;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: 02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1e9 / populacao2;
    SuperPoder2 = populacao2 + area2 + pibPerCapita2 + pib2 + pontosTuristicos2;

    // Exibicao das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Codigo da carta: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Codigo da carta: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparacoes entre as cartas
    printf("\n=== Cartas vencedoras em cada atributo ===\n");
    
    // Comparacao da Populacao
    if (populacao1 > populacao2) {
        printf("Populacao: cidade %s venceu!.\n", nomeCidade1);
    } 
    else if (populacao1 < populacao2) {
        printf("Populacao: cidade %s venceu!.\n", nomeCidade2);
    }
    else if (populacao1 == populacao2) {
        printf("Populacao: Empate!.\n");
    }
    
    // Comparacao da Area
    if (area1 > area2){
        printf("Area: cidade %s venceu!.\n", nomeCidade1);
    } 
    else if (area1 < area2) {
        printf("Area: cidade %s venceu!.\n", nomeCidade2);
    }
    else if (area1 == area2) {
        printf("Area: Empate!.\n");
    }
    
    // Comparacao do PIB
    if (pib1 > pib2) {
        printf("PIB: cidade %s venceu!.\n", nomeCidade1);
    } 
    else if (pib1 < pib2) {
        printf("PIB: cidade %s venceu!.\n", nomeCidade2);
    }
    else if (pib1 == pib2) {
        printf("PIB: Empate!.\n");
    }

    // Comparacao do Numero de Pontos Turisticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos turisticos: cidade %s venceu!.\n", nomeCidade1);
    } 
    else if (pontosTuristicos1 < pontosTuristicos2) {
        printf("Pontos turisticos: cidade %s venceu!.\n", nomeCidade2);
    }
    else if (pontosTuristicos1 == pontosTuristicos2) {
        printf("Pontos turisticos: Empate!.\n");
    }

    // Comparacao da Densidade Populacional
    if (densidadePopulacional1 > densidadePopulacional2) {
        printf("Densidade populacional: cidade %s venceu!.\n", nomeCidade2);
    } 
    else if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Densidade populacional: cidade %s venceu!.\n", nomeCidade1);
    }
    else if (densidadePopulacional1 == densidadePopulacional2) {
        printf("Densidade populacional: Empate!.\n");
    }
    
    // Comparacao do PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB Percapita: cidade %s venceu!.\n", nomeCidade1);
    } 
    else if (pibPerCapita1 < pibPerCapita2) {
        printf("PIB Percapita: cidade %s venceu!.\n", nomeCidade2);
    }
    else if (pibPerCapita1 == pibPerCapita2) {
        printf("PIB Percapita: Empate!.\n");
    }

    // Comparacao do Super Poder
    if (SuperPoder1 > SuperPoder2) {
        printf("Super Poder: %s venceu!.\n", nomeCidade1);
    } 
    else if (SuperPoder1 < SuperPoder2) {
        printf("Super Poder: %s venceu!.\n", nomeCidade2);
    }
    else if (SuperPoder1 == SuperPoder2) {
        printf("Super Poder: Empate!.\n");
    }
    

    return 0;
}