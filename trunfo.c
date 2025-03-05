#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char carta = 'A';
    char estado[50] = "Sao_Paulo";
    char codigo = 'S';
    int populacao = 45000000;
    double pib = 1.180000000;
    float area_km2 = 1520000.0;
    int pontos_turisticos = 200;
 
    printf("carta: %c \n", carta);
    printf("estado: %s \n", estado);
    printf("codigo: %c \n", codigo);
    printf("populacao: %d \n", populacao);
    printf("pib: %f \n", pib);
    printf("area_km2: %f \n", area_km2);
    printf("pontos turisticos: %d \n", pontos_turisticos);
 
    char carta2 = 'B';
    char estado2[50] = "Rio_de_Janeiro";
    char codigo2 = 'R';
    int populacao2 = 28000000;
    double pib2 = 1.16000000;
    float area_km22 = 1360000.0;
    int pontos_turisticos2 = 1500;
 
    printf("carta: %c \n", carta2);
    printf("estado: %s \n", estado2);
    printf("codigo: %c \n", codigo2);
    printf("populacao: %d \n", populacao2);
    printf("pib: %f \n", pib2);
    printf("area_km2: %f \n", area_km22);
    printf("pontos turisticos: %d \n", pontos_turisticos2);
 
}