#include <stdio.h>

int main(){

    char estado;
    char codigocarta[3];
    char cidade[20];
    int populacao;
    int pturisticos;
    float area;
    float PIB;
    int i;
    int count;

    count=2; //numero de cartas que o programa vai ler

    for (i = 0; i < count; i++) //contador de cartas
    {
        printf("Digite o estado da carta (de 'A' a 'H'): \n");
        scanf(" %c", &estado);
    
        printf("Digite o cOdigo da carta sendo ele uma letra e dois numeros (ex: A01): \n");
        scanf("%s", codigocarta);
    
        printf("Digite o nome de uma cidade: \n");
        scanf("%s", cidade);
    
        printf("Digite o numero de habitantes: \n");
        scanf("%d", &populacao);
    
        printf("Digite a area da cidade em km quadrados: \n");
        scanf("%f", &area);
    
        printf("Digite o PIB da cidade: \n");
        scanf("%f", &PIB);
    
        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &pturisticos);
    
        printf("Carta %d\n", i + 1); //incrementa o contador de cartas
        printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nNumero de pontos Turisticos: %d\n\n", estado, codigocarta, cidade, populacao, area, PIB, pturisticos);
    }

    return 0;
}