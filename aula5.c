#include <stdio.h>
#include <string.h>

int main() {
    char estado[2][2], codigocarta[2][4], cidade[2][20];
    int populacao[2], pturisticos[2];
    float area[2], PIB[2], densidadep[2], pibcapita[2];
    int opcao1, opcao2;

    // Entrada de dados para as duas cartas
    for (int i = 0; i < 2; i++) {
        printf("Digite o estado da carta %d (de 'A' a 'H'): \n", i + 1);
        scanf(" %c", &estado[i][0]);

        printf("Digite o codigo da carta %d (ex: A01): \n", i + 1);
        scanf("%s", codigocarta[i]);

        printf("Digite o nome de uma cidade para a carta %d: \n", i + 1);
        scanf(" %[^\n]", cidade[i]);

        printf("Digite o numero de habitantes da carta %d: \n", i + 1);
        scanf("%d", &populacao[i]);

        printf("Digite a area da cidade em km quadrados para a carta %d: \n", i + 1);
        scanf("%f", &area[i]);

        printf("Digite o PIB da cidade para a carta %d: \n", i + 1);
        scanf("%f", &PIB[i]);

        printf("Digite o numero de pontos turisticos para a carta %d: \n", i + 1);
        scanf("%d", &pturisticos[i]);

        // Calcula a densidade populacional
        densidadep[i] = (float)(populacao[i] / area[i]);

        // Calcula o PIB per capita
        pibcapita[i] = (float)(PIB[i] / populacao[i]);
    }

    // Menu interativo para escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao1);

    // Menu interativo para escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar as cartas (diferente do primeiro):\n");
    switch (opcao1) {
        case 1: printf("2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n"); break;
        case 2: printf("1 - População\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n"); break;
        case 3: printf("1 - População\n2 - Área\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n"); break;
        case 4: printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n"); break;
        case 5: printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n"); break;
        default: printf("Opção inválida!\n"); return 1;
    }
    printf("Escolha uma opção: ");
    scanf("%d", &opcao2);

    // Verifica se o jogador escolheu o mesmo atributo duas vezes
    if (opcao1 == opcao2) {
        printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    // Variáveis para armazenar a soma dos atributos
    float somaCarta1 = 0, somaCarta2 = 0;

    // Comparação do primeiro atributo
    printf("\nComparação do Primeiro Atributo:\n");
    switch (opcao1) {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 (%s): %d habitantes\n", cidade[0], populacao[0]);
            printf("Carta 2 (%s): %d habitantes\n", cidade[1], populacao[1]);
            somaCarta1 += populacao[0];
            somaCarta2 += populacao[1];
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 (%s): %.2f km²\n", cidade[0], area[0]);
            printf("Carta 2 (%s): %.2f km²\n", cidade[1], area[1]);
            somaCarta1 += area[0];
            somaCarta2 += area[1];
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 (%s): %.2f\n", cidade[0], PIB[0]);
            printf("Carta 2 (%s): %.2f\n", cidade[1], PIB[1]);
            somaCarta1 += PIB[0];
            somaCarta2 += PIB[1];
            break;
        case 4: // Número de pontos turísticos
            printf("Atributo: Número de pontos turísticos\n");
            printf("Carta 1 (%s): %d pontos turísticos\n", cidade[0], pturisticos[0]);
            printf("Carta 2 (%s): %d pontos turísticos\n", cidade[1], pturisticos[1]);
            somaCarta1 += pturisticos[0];
            somaCarta2 += pturisticos[1];
            break;
        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", cidade[0], densidadep[0]);
            printf("Carta 2 (%s): %.2f hab/km²\n", cidade[1], densidadep[1]);
            somaCarta1 += (1 / densidadep[0]);
            somaCarta2 += (1 / densidadep[1]);
            break;
    }

    // Comparação do segundo atributo
    printf("\nComparação do Segundo Atributo:\n");
    switch (opcao2) {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 (%s): %d habitantes\n", cidade[0], populacao[0]);
            printf("Carta 2 (%s): %d habitantes\n", cidade[1], populacao[1]);
            somaCarta1 += populacao[0];
            somaCarta2 += populacao[1];
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 (%s): %.2f km²\n", cidade[0], area[0]);
            printf("Carta 2 (%s): %.2f km²\n", cidade[1], area[1]);
            somaCarta1 += area[0];
            somaCarta2 += area[1];
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 (%s): %.2f\n", cidade[0], PIB[0]);
            printf("Carta 2 (%s): %.2f\n", cidade[1], PIB[1]);
            somaCarta1 += PIB[0];
            somaCarta2 += PIB[1];
            break;
        case 4: // Número de pontos turísticos
            printf("Atributo: Número de pontos turísticos\n");
            printf("Carta 1 (%s): %d pontos turísticos\n", cidade[0], pturisticos[0]);
            printf("Carta 2 (%s): %d pontos turísticos\n", cidade[1], pturisticos[1]);
            somaCarta1 += pturisticos[0];
            somaCarta2 += pturisticos[1];
            break;
        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", cidade[0], densidadep[0]);
            printf("Carta 2 (%s): %.2f hab/km²\n", cidade[1], densidadep[1]);
            somaCarta1 += (1 / densidadep[0]);
            somaCarta2 += (1 / densidadep[1]);
            break;
    }

    // Soma dos atributos e resultado final
    printf("\nSoma dos Atributos:\n");
    printf("Carta 1 (%s): %.2f\n", cidade[0], somaCarta1);
    printf("Carta 2 (%s): %.2f\n", cidade[1], somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Resultado Final: Carta 1 vence!\n");
    } else if (somaCarta1 < somaCarta2) {
        printf("Resultado Final: Carta 2 vence!\n");
    } else {
        printf("Resultado Final: Empate!\n");
    }

    return 0;
}
