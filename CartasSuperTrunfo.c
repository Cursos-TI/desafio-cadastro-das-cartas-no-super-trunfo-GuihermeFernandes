#include <stdio.h>


int main() {

    int populacao, turista, populacao2, turista2;
    char estado[20], nome[20], codigo[20], estado2[20], nome2[20], codigo2[20];
    float pib, area, pib2, area2;

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


    printf("\nAs cartas são as seguinte:\n");
    
    printf("\nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNumero de turistas: %d\n", estado, codigo,nome,populacao,area,pib,turista);
    printf("\nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNumero de turistas: %d\n", estado2, codigo2,nome2,populacao2,area2,pib2,turista2);
}