#include <stdio.h>


int main() {

    int escolha;
    int menu;

    printf("1. Iniciar jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair do jogo\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("=== Super Trunfo ===\n");
    // ----------- Carta 1 -----------
    char codigo1[10] = "A01";             // Codigo da carta (ex: A01)
    char nomeCidade1[50] = "sao paulo";        // Nome da cidade
    int populacao1 = 12300000;              // Populacao
    float area1 = 1521.11;                 // Area em km2
    float pib1 = 699.1;                  // PIB
    int pontosTuristicos1 = 10;       // Numero de pontos turisticos
    float densidadePopulacional1; // Densidade populacional (populacao/area)
    float pibPerCapita1;          // PIB per capita (pib/populacao)
    float SuperPoder1;         // Super Poder (calculo a definir)

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1e9 / populacao1;
    SuperPoder1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1) / 5;

    // ----------- Carta 2 -----------
    char codigo2[10] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 8419600;
    float area2 = 1182.3;
    float pib2 = 657.9;
    int pontosTuristicos2 = 15;
    float densidadePopulacional2;
    float pibPerCapita2;
    float SuperPoder2;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1e9 / populacao2;
    SuperPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2) / 5;
    
    // Exibicao das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("escolha uma propriedade jogar: \n");
    printf("[1] - Populacao\n");
    printf("[2] - Area\n");
    printf("[3] - PIB\n");
    printf("[4] - Numero de Pontos Turisticos\n");
    printf("[5] - Densidade Populacional\n");
    printf("[6] - PIB per Capita\n");
    printf("[7] - Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Atributo de comparacao: Populacao\n");
        printf("Carta %s-%s:\n Populacao de %d\n", codigo1, nomeCidade1, populacao1);
        printf("Carta %s-%s:\n Populacao de %d\n", codigo2, nomeCidade2, populacao2);
        if (populacao1 > populacao2) 
            printf("Carta %s-%s venceu\n", codigo1, nomeCidade1);
        else if (populacao2 > populacao1) {
            printf("Carta %s-%s venceu\n", codigo2, nomeCidade2);
        } else {
            printf("### Empate! ###\n");
        }
    break;
    case 2:
        printf("Atributo de comparacao: Area\n");
        printf("Carta %s-%s:\n Area de %.2f km2\n", codigo1, nomeCidade1, area1);
        printf("Carta %s-%s:\n Area de %.2f km2\n", codigo2, nomeCidade2, area2);
        if (area1 > area2) 
            printf("Carta %s-%s venceu com Area de %.2f contra %.2f\n", codigo1, nomeCidade1, area1, area2);
        else if (area2 > area1) {
            printf("Carta %s-%s venceu com Area de %.2f contra %.2f\n", codigo2, nomeCidade2, area2, area1);
        } else {
            printf("### Empate! ###\n");
        }
    break;
    case 3:
        printf("Atributo de comparacao: PIB\n");
        printf("Carta %s-%s:\n PIB de %.2f bilhoes de reais\n", codigo1, nomeCidade1, pib1);
        printf("Carta %s-%s:\n PIB de %.2f bilhoes de reais\n", codigo2, nomeCidade2, pib2);
        if (pib1 > pib2)
            printf("Carta %s-%s venceu com Pib de %.2f contra %.2f\n", codigo1, nomeCidade1, pib1, pib2);
        else if (pib2 > pib1) {
            printf("Carta %s-%s venceu com Pib de %.2f contra %.2f\n", codigo2, nomeCidade2, pib2, pib1);
        } else {
            printf("### Empate! ###\n");
        }
    break;
    case 4:
        printf("Atributo de comparacao: Numero de Pontos Turisticos\n");   
        printf("Carta %s-%s:\n Numero de Pontos Turisticos de %d\n", codigo1, nomeCidade1, pontosTuristicos1);
        printf("Carta %s-%s:\n Numero de Pontos Turisticos de %d\n", codigo2, nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) 
            printf("Carta %s-%s venceu com Pontos turisticos de %d contra %d\n", codigo1, nomeCidade1, pontosTuristicos1, pontosTuristicos2);
        else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("Carta %s-%s venceu com Pontos turisticos de %d contra %d\n", codigo2, nomeCidade2, pontosTuristicos2, pontosTuristicos1);
        } else {
            printf("### Empate! ###\n");
        }
    break;
    case 5:
        printf("Atributo de comparacao: Densidade Populacional\n");
        printf("Carta %s-%s:\n Densidade populacional de %.2f hab/km2\n", codigo1, nomeCidade1, densidadePopulacional1);
        printf("Carta %s-%s:\n Densidade populacional de %.2f hab/km2\n", codigo2, nomeCidade2, densidadePopulacional2);
        if (densidadePopulacional1 > densidadePopulacional2)
            printf("Carta %s-%s venceu com menor Densidade populacional de %.2f contra %.2f\n", codigo2, nomeCidade2, densidadePopulacional2, densidadePopulacional1);
        else if (densidadePopulacional2 > densidadePopulacional1) {
            printf("Carta %s-%s venceu com menor Densidade populacional de %2.f contra %.2f\n", codigo1, nomeCidade1, densidadePopulacional1, densidadePopulacional2);
        } else {
            printf("### Empate! ###\n");
        }
    break;
    case 6:
        printf("Atributo de comparacao: PIB per Capita\n");
        printf("Carta %s-%s:\n PIB per Capita de %.2f reais\n", codigo1, nomeCidade1, pibPerCapita1);
        printf("Carta %s-%s:\n PIB per Capita de %.2f reais\n", codigo2, nomeCidade2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) 
            printf("Carta %s-%s venceu com pibPerCapita de %2.f contra %2.f\n", codigo1, nomeCidade1, pibPerCapita1, pibPerCapita2);
        else if (pibPerCapita2 > pibPerCapita1) {
            printf("Carta %s-%s venceu com PibPerCapita de %.2f contra %.2f\n", codigo2, nomeCidade2, pibPerCapita2, pibPerCapita1);
        } else {
            printf("### Empate! ###\n");
        }
    break;
    case 7:
        printf("Atributo de comparacao: Super Poder\n");
        printf("Carta %s-%s:\n Super Poder de %.2f\n", codigo1, nomeCidade1, SuperPoder1);
        printf("Carta %s-%s:\n Super Poder de %.2f\n", codigo2, nomeCidade2, SuperPoder2);
        if (SuperPoder1 > SuperPoder2) 
            printf("Carta %s-%s venceu com SuperPoder de %.2f contra %.2f \n", codigo1, nomeCidade1, SuperPoder1, SuperPoder2);
        else if (SuperPoder2 > SuperPoder1) {
            printf("Carta %s-%s venceu com SuperPoder de %.2f contra %.2f\n", codigo2, nomeCidade2, SuperPoder2, SuperPoder1);
        } else {
            printf("### Empate! ###\n");
        }
    break;
    default:
        printf("!!!Opcao invalida!!!\n");
        printf("Por favor, insira uma opcao valida!\n");
    break;
    }
    break;
    case 2:
        printf("Regras do jogo\n");
        printf("1. Cada jogador escolhe uma carta.\n");
        printf("2. Um jogador escolhe um atributo para comparar.\n");
        printf("3. A carta com o maior valor no atributo escolhido vence a rodada.\n");
        printf("3,5. Para o atributo 'Densidade Populacional', a carta com o menor valor vence.\n");
        printf("4. Em caso de empate, a rodada é considerada empatada.\n");
        printf("5. O jogo pode ser jogado em várias rodadas, e o jogador com mais vitorias ao final vence o jogo.\n");
    break; 
    case 3:
        printf("Sair do jogo\n");
    break;
    default:
        printf("!!!Opcao invalida!!!\n");
        printf("Por favor, insira uma opcao valida!\n");
        break;
    }

    return 0;

}