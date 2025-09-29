#include <stdio.h>


int main() {

    int escolha1, escolha2;
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
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        printf("escolha uma segunda opção para jogar: \n");
        printf("[2] - Area\n");
        printf("[3] - PIB\n");
        printf("[4] - Numero de Pontos Turisticos\n");
        printf("[5] - Densidade Populacional\n");
        printf("[6] - PIB per Capita\n");
        printf("[7] - Super Poder\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
    break;
    case 2:
        printf("escolha uma segunda opção para jogar: \n");
        printf("[1] - Populacao\n");
        printf("[3] - PIB\n");
        printf("[4] - Numero de Pontos Turisticos\n");
        printf("[5] - Densidade Populacional\n");
        printf("[6] - PIB per Capita\n");
        printf("[7] - Super Poder\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
    break;
    case 3:
        printf("escolha uma segunda opção para jogar: \n");
        printf("[1] - Populacao\n");
        printf("[2] - Area\n");
        printf("[4] - Numero de Pontos Turisticos\n");
        printf("[5] - Densidade Populacional\n");
        printf("[6] - PIB per Capita\n");
        printf("[7] - Super Poder\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
    break;
    case 4:
        printf("escolha uma segunda opção para jogar: \n");
        printf("[1] - Populacao\n");
        printf("[2] - Area\n");
        printf("[3] - PIB\n");
        printf("[5] - Densidade Populacional\n");
        printf("[6] - PIB per Capita\n");
        printf("[7] - Super Poder\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
    break;
    case 5:
        printf("escolha uma segunda opção para jogar: \n");
        printf("[1] - Populacao\n");
        printf("[2] - Area\n");
        printf("[3] - PIB\n");
        printf("[4] - Numero de Pontos Turisticos\n");
        printf("[6] - PIB per Capita\n");
        printf("[7] - Super Poder\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
    break;
    case 6:
       printf("escolha uma segunda opção para jogar: \n");
        printf("[1] - Populacao\n");
        printf("[2] - Area\n");
        printf("[3] - PIB\n");
        printf("[4] - Numero de Pontos Turisticos\n");
        printf("[5] - Densidade Populacional\n");
        printf("[7] - Super Poder\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
    break;
    case 7:
        printf("escolha uma segunda opção para jogar: \n");
        printf("[1] - Populacao\n");
        printf("[2] - Area\n");
        printf("[3] - PIB\n");
        printf("[4] - Numero de Pontos Turisticos\n");
        printf("[5] - Densidade Populacional\n");
        printf("[6] - PIB per Capita\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
    break;
    default:
        printf("!!!Opcao invalida!!!\n");
        printf("Por favor, insira uma opcao valida!\n");
    break;
    }
    // ======================================
    // Comparação dos dois atributos escolhidos
    // ======================================
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

    // Primeiro atributo escolhido
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = densidadePopulacional1; valor1_c2 = densidadePopulacional2; break;
        case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; break;
        case 7: valor1_c1 = SuperPoder1; valor1_c2 = SuperPoder2; break;
    }

    // Segundo atributo escolhido
    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = densidadePopulacional1; valor2_c2 = densidadePopulacional2; break;
        case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; break;
        case 7: valor2_c1 = SuperPoder1; valor2_c2 = SuperPoder2; break;
    }

    // Determinar vencedores individuais
    int vencedor1 = (escolha1 == 5) 
        ? (valor1_c1 < valor1_c2 ? 1 : (valor1_c2 < valor1_c1 ? 2 : 0))
        : (valor1_c1 > valor1_c2 ? 1 : (valor1_c2 > valor1_c1 ? 2 : 0));

    int vencedor2 = (escolha2 == 5) 
        ? (valor2_c1 < valor2_c2 ? 1 : (valor2_c2 < valor2_c1 ? 2 : 0))
        : (valor2_c1 > valor2_c2 ? 1 : (valor2_c2 > valor2_c1 ? 2 : 0));

    // Soma final
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    int vencedorFinal = (soma1 > soma2) ? 1 : (soma2 > soma1 ? 2 : 0);

    // Exibir resultados
    printf("\n=== Resultado da rodada ===\n");
    printf("Atributo 1: Carta1 = %.2f | Carta2 = %.2f -> %s\n",
           valor1_c1, valor1_c2,
           vencedor1 == 1 ? nomeCidade1 : vencedor1 == 2 ? nomeCidade2 : "Empate");
    printf("Atributo 2: Carta1 = %.2f | Carta2 = %.2f -> %s\n",
           valor2_c1, valor2_c2,
           vencedor2 == 1 ? nomeCidade1 : vencedor2 == 2 ? nomeCidade2 : "Empate");

    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f\n", nomeCidade1, soma1);
    printf("%s = %.2f\n", nomeCidade2, soma2);

    if (vencedorFinal == 0)
        printf("\nResultado final: Empate!\n");
    else
        printf("\nResultado final: %s venceu!\n", vencedorFinal == 1 ? nomeCidade1 : nomeCidade2);
    // ======================================
    // Fim da comparação
    // ======================================
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