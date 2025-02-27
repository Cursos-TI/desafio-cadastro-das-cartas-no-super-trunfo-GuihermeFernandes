#include <stdio.h>

int main() {

    int populacao, turista;
    char estado[20], nome[20], codigo[20];
    float pib, area;

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

    printf("\nEstado: %s\nCodigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNumero de turistas: %d\n", estado, codigo,nome,populacao,area,pib,turista);
}
