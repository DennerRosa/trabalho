#include <stdio.h>
int main() {

    char CARTA [4]= "SP";
    char ESTADO[50] = "Sao_Paulo";
    char CODIGO[50] = "A";
    char CIDADE[50] = "Sao_Paulo";
    float POPULACAO = 12325000;
    float AREA = 1521.11;
    float PIB = 699.2800;
    int PONTOS_TURISTICOS = 50;
    float DENSIDADE_POPULACIONAL = (POPULACAO / AREA);
    float PIB_PER_CAPITA = (POPULACAO / PIB);

    printf("Carta: %s\n", CARTA);
    printf("Estado: %s\n", ESTADO);
    printf("Código: %s\n", CODIGO);
    printf("Cidade: %s\n", CIDADE);
    printf("População: %.2f\n", POPULACAO);
    printf("Área: %.2f\n", AREA);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", PONTOS_TURISTICOS);
    printf("Densidade Populacional: %.2f\n", DENSIDADE_POPULACIONAL);
    printf("PIB per Capita: %.2f\n", PIB_PER_CAPITA);

printf("\n\n");



    
    char CARTA1[4]= "RJ";
    char ESTADO1[50] = "RIO_DE_JANEIRO";
    char CODIGO1[2] = "R";
    char CIDADE1[50]= "RIO_DE_JANEIRO";
    float POPULACAO1= 6748000;
    float AREA1= 1200.25;
    float PIB1= 300500;
    int PONTOS_TURISTICOS1=30;
    float DENSIDADE_POPULACIONAL1 = (POPULACAO1 / AREA1);
    float PIB_PER_CAPITA1 = (POPULACAO1 / PIB1);

    printf("Carta: %s\n", CARTA1);
    printf("Estado: %s\n", ESTADO1);
    printf("Código: %s\n", CODIGO1);
    printf("Cidade: %s\n", CIDADE1);
    printf("População: %.2f\n", POPULACAO1);
    printf("Área: %.2f\n", AREA1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", PONTOS_TURISTICOS1);
    printf("Densidade Populacional: %.2f\n", DENSIDADE_POPULACIONAL1);
    printf("PIB per Capita: %.2f\n", PIB_PER_CAPITA1);
return 0;
}
