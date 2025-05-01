#include <stdio.h>

int main (){

    //Cartas cadastradas
    char pais1[] = "Brasil";
    int populacaoBrasil = 211000000; 
    float areaBrasil = 8515767.0;
    float pibBrasil = 2.055; 
    int pontosTuristicosBrasil = 50;
    float densidadeBrasil = 24.77;

    char pais2[] = "Canadá";
    int populacaoCanada = 38000000; 
    float areaCanada = 9984670.0;
    float pibCanada = 1.643; 
    int pontosTuristicosCanada = 30;
    float densidadeCanada = 3.8;

    int opcao1;
    int opcao2;
    int vitoria1 = 0;
    int vitoria2 = 0;

    //Usuário deve escolher apenas uma opção

    printf("Escolha o primeiro atributo que quer comparar entre Brasil e Canadá:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. Sair do Jogo.\n");
    scanf ("%d", &opcao1);

    // Lógica de comparações
    switch (opcao1) {
        case 1:
            printf("Comparando População Brasil x Canadá.\n");
            printf("Brasil: %d\nCanadá: %d\n", populacaoBrasil, populacaoCanada);
            if (populacaoBrasil > populacaoCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (populacaoBrasil < populacaoCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            printf("Comparando Área Brasil x Canadá.\n");
            printf("Brasil: %.2f\nCanadá: %.2f\n", areaBrasil, areaCanada);
            if (areaBrasil > areaCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (areaBrasil < areaCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            printf("Comparando PIB Brasil x Canadá.\n");
            printf("Brasil: %.3f\nCanadá: %.3f\n", pibBrasil, pibCanada);
            if (pibBrasil > pibCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (pibBrasil < pibCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            printf("Comparando Pontos Turísticos Brasil x Canadá.\n");
            printf("Brasil: %d\nCanadá: %d\n", pontosTuristicosBrasil, pontosTuristicosCanada);
            if (pontosTuristicosBrasil > pontosTuristicosCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (pontosTuristicosBrasil < pontosTuristicosCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            printf("Comparando Densidade Demográfica Brasil x Canadá.\n");
            printf("Brasil: %.2f\nCanadá: %.2f\n", densidadeBrasil, densidadeCanada);
            if (densidadeBrasil < densidadeCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (densidadeBrasil > densidadeCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 6:
            printf("Saindo do jogo.\n");
            return 0;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    printf("\nEscolha o segundo atributo que quer comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf ("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Você já escolheu esse atributo.\n");
        return 1;
    }

    switch (opcao2) {
        case 1:
            printf("Comparando População Brasil x Canadá.\n");
            printf("Brasil: %d\nCanadá: %d\n", populacaoBrasil, populacaoCanada);
            if (populacaoBrasil > populacaoCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (populacaoBrasil < populacaoCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            printf("Comparando Área Brasil x Canadá.\n");
            printf("Brasil: %.2f\nCanadá: %.2f\n", areaBrasil, areaCanada);
            if (areaBrasil > areaCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (areaBrasil < areaCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            printf("Comparando PIB Brasil x Canadá.\n");
            printf("Brasil: %.3f\nCanadá: %.3f\n", pibBrasil, pibCanada);
            if (pibBrasil > pibCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (pibBrasil < pibCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            printf("Comparando Pontos Turísticos Brasil x Canadá.\n");
            printf("Brasil: %d\nCanadá: %d\n", pontosTuristicosBrasil, pontosTuristicosCanada);
            if (pontosTuristicosBrasil > pontosTuristicosCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (pontosTuristicosBrasil < pontosTuristicosCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            printf("Comparando Densidade Demográfica Brasil x Canadá.\n");
            printf("Brasil: %.2f\nCanadá: %.2f\n", densidadeBrasil, densidadeCanada);
            if (densidadeBrasil < densidadeCanada) {
                vitoria1 = vitoria1 + 1;
                printf("%s Vencedor\n", pais1);
            } else if (densidadeBrasil > densidadeCanada) {
                vitoria2 = vitoria2 + 1;
                printf("%s Vencedor\n", pais2);
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    // Exibir vencedor final com operadores lógicos
    if (vitoria1 > vitoria2 && vitoria1 != vitoria2) {
        printf("\nVENCEDOR FINAL: %s\n", pais1);
    } else if (vitoria2 > vitoria1 && vitoria1 != vitoria2) {
        printf("\nVENCEDOR FINAL: %s\n", pais2);
    } else {
        printf("\nRESULTADO FINAL: Empate!\n");
    }

    return 0;
}
