#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolha_carta_jogador;
    int atributo_escolhido;

    // Dados da carta A
    char estadoA[50] = "Sao Paulo";
    char codigoA = 'S';
    int populacaoA = 45000000;
    double pibA = 1.180;
    float areaA = 1520000.0;
    int pontosA = 200;

    // Dados da carta B
    char estadoB[50] = "Rio de Janeiro";
    char codigoB = 'R';
    int populacaoB = 28000000;
    double pibB = 1.160;
    float areaB = 1360000.0;
    int pontosB = 1500;

    srand(time(0));

    printf("*** SUPER TRUNFO ***\n\n");
    printf("Escolha sua carta:\n");
    printf("1 - Carta A (%s)\n", estadoA);
    printf("2 - Carta B (%s)\n", estadoB);
    printf("Digite 1 ou 2: ");
    scanf("%d", &escolha_carta_jogador);

    if (escolha_carta_jogador != 1 && escolha_carta_jogador != 2) {
        printf("Escolha inválida!\n");
        return 1;
    }

    // A carta do computador é a que o jogador não escolheu
    int carta_computador = (escolha_carta_jogador == 1) ? 2 : 1;

    printf("\nAgora escolha o atributo para competir:\n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área (km²)\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo_escolhido);

    printf("\n=== RESULTADO ===\n");

    // Comparação dos atributos
    switch (atributo_escolhido) {
        case 1:
            if (escolha_carta_jogador == 1)
                printf("Sua população: %d\nPopulação do computador: %d\n", populacaoA, populacaoB);
            else
                printf("Sua população: %d\nPopulação do computador: %d\n", populacaoB, populacaoA);
            break;
        case 2:
            if (escolha_carta_jogador == 1)
                printf("Seu PIB: %.2lf\nPIB do computador: %.2lf\n", pibA, pibB);
            else
                printf("Seu PIB: %.2lf\nPIB do computador: %.2lf\n", pibB, pibA);
            break;
        case 3:
            if (escolha_carta_jogador == 1)
                printf("Sua área: %.2f km²\nÁrea do computador: %.2f km²\n", areaA, areaB);
            else
                printf("Sua área: %.2f km²\nÁrea do computador: %.2f km²\n", areaB, areaA);
            break;
        case 4:
            if (escolha_carta_jogador == 1)
                printf("Seus pontos turísticos: %d\nPontos do computador: %d\n", pontosA, pontosB);
            else
                printf("Seus pontos turísticos: %d\nPontos do computador: %d\n", pontosB, pontosA);
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Verifica quem ganhou
    int jogador_venceu = 0, empate = 0;

    switch (atributo_escolhido) {
        case 1:
            jogador_venceu = (escolha_carta_jogador == 1) ? populacaoA > populacaoB : populacaoB > populacaoA;
            empate = populacaoA == populacaoB;
            break;
        case 2:
            jogador_venceu = (escolha_carta_jogador == 1) ? pibA > pibB : pibB > pibA;
            empate = pibA == pibB;
            break;
        case 3:
            jogador_venceu = (escolha_carta_jogador == 1) ? areaA > areaB : areaB > areaA;
            empate = areaA == areaB;
            break;
        case 4:
            jogador_venceu = (escolha_carta_jogador == 1) ? pontosA > pontosB : pontosB > pontosA;
            empate = pontosA == pontosB;
            break;
    }

    if (empate)
        printf("Empate!\n");
    else if (jogador_venceu)
        printf("Parabéns, você venceu!\n");
    else
        printf("Você perdeu! O computador venceu.\n");

    return 0;
}