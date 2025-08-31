#include <stdio.h>

int main(){
    // Tipagem das variaveis das duas cartas
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    char estado1, nomeCidade1[20], codigoCarta1[10], estado2, nomeCidade2[20], codigoCarta2[10];
    float area1, pib1, area2, pib2;

    //Introdução dos dados da primeira carta
    printf("Introdução dos dados da primeira carta: \n");

    printf("Digite o o estado da carta (representado por uma letra entre A-H): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (Representado pela letra do estado mais um número entre 01 a 04 (Ex.: B04)): ");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade1);

    printf("Digite o numero populacional da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) do estado: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos que esse estado possui: ");
    scanf("%d", &pontosTuristicos1);

    //Introdução dos dados da segunda carta

    printf("Introdução dos dados da segunda carta: \n");

    printf("Digite o o estado da carta (representado por uma letra entre A-H): ");
    scanf("%c", &estado2);

    printf("Digite o código da carta (Representado pela letra do estado mais um número entre 01 a 04 (Ex.: B04)): ");
    scanf("%s", &codigoCarta2);

    printf("Digitew o nome da cidade: ");
    scanf("%s]", &nomeCidade2);

    printf("Digite o numero populacional da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) do estado: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos que esse estado possui: ");
    scanf("%d", &pontosTuristicos2);

    printf("CARTA 1\n");
    printf("Estado: %c \n Código: %s \n Nome da cidade: %s \n População: %d \n Área: %.1fkm² \n PIB: %.1f reais \n Número de pontos turisticos: %d \n", estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("CARTA 2\n");
    printf("Estado: %c \n Código: %s \n Nome da cidade: %s \n População: %d \n Área: %.1fkm² \n PIB: %.1f reais \n Número de pontos turisticos: %d \n", estado2, codigoCarta2, nomeCidade2, populacao1, area2, pib2, pontosTuristicos2);

    return 0;

}
