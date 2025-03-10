#include <stdio.h>


int main() {

    int populacao, turista, populacao2, turista2;
    char estado[10], nome[20], codigo[5], estado2[10], nome2[20], codigo2[5];
    float pib, area, pib2, area2, desidade, ppc, desidade2, ppc2;

    printf("Para o desafio do Super Trufo insira as seguintes informações: \n");
    
    
    printf("Estado: ");
    scanf("%s", &estado);

    printf("Codigo: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Turistas: ");
    scanf("%d", &turista);

    desidade = populacao / area;
    ppc = pib / populacao;



    printf("\nInsira as informações da segunda carta: \n");

    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Codigo: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Turistas: ");
    scanf("%d", &turista2);

    desidade2 = populacao2 / area2;
    ppc2 = pib2 / populacao2;
    

    printf("\nAs cartas são as seguinte:\n");
    
    printf("\n***Primeira Carta***\n");
    printf("\nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f bilhões de reais\nNumero de turistas: %d\ndesidade populacional: %.2f hab/km²\nPIB Per Capita: %.2f reais\n", estado, codigo,nome,populacao,area,pib,turista,desidade, ppc);
    printf("\n***Segunda Carta***\n");
    printf("\nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f bilhões de reais\nNumero de turistas: %d\ndesidade populacional: %.2f hab/km²\nPIB Per Capita: %.2f reais\n", estado2, codigo2,nome2,populacao2,area2,pib2,turista2,desidade2,ppc2);


    printf("\n***O resultado das compracoes***\n");

    int resultadopopulacao;
    int resultadoarea;
    int resultadopib;
    int resultadoturistas;
    int resultadodensidade;
    int resultadoppc;
    
    resultadoarea = area > area2;
    resultadopopulacao = populacao > populacao2;
    resultadopib = pib > pib2;
    resultadoturistas = turista > turista2;
    resultadodensidade = desidade < desidade2;
    resultadoppc = ppc > ppc2;

    printf("A carta um e maior que a carta dois em populacao? %d\nA carta um e maior que a carta dois em area? %d\nA carta um e maior que a carta dois em PIB? %d\nA carta um  e maior que a carta dois em turistas? %d\nA carta um e menor que a carta dois em densidade populacional %d\nA carta um e maior que a carta dois em PIB Per Capita? %d\n", resultadopopulacao, resultadoarea, resultadopib, resultadoturistas, resultadodensidade, resultadoppc);

return 0;
}
