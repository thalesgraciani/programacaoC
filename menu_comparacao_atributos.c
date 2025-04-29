#include<stdio.h>


int main (){

    //Cartas cadastradas
    char Brasil[] = "Brasil";
    int popBrasil = 211000000; 
    float areaBrasil = 8515767.0;
    float pibBrasil = 2.055; 
    int pontosBrasil = 50;
    float densDemBrasil = 24.77;

    char Canada[] = "Canadá";
    int popCanada = 38000000; 
    float areaCanada = 9984670.0;
    float pibCanada = 1.643; 
    int pontosCanada = 30;
    float densDemCanada = 3.8;

    int opcao;


    //Usuário deve escolher apenas uma opção

    printf("Escolha qual atributo quer comparar entre Brasil e Canadá:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Densidade demografica\n");
    printf("6.Sair do Jogo.\n");
    scanf ("%d", &opcao);

    

    //logica de comparações
    switch (opcao)
    {
    case 1:
        printf("Comparando o atributo População Brasil x Canadá.\n");
        printf("Brasil: %d.\n", popBrasil);
        printf("Canadá: %d.\n", popCanada);
        if (popBrasil > popCanada)
        {
            printf("%s Vencedor\n", Brasil );
        } else if (popBrasil < popCanada)
        {
            printf("%s Vencedor.\n", Canada);
        } else{printf("Empate.\n");}      
        
        break;
        case 2:
            printf("Comparando do atributo Área do Brasil x Canadá.\n");
            printf("Brasil: %f.\n", areaBrasil);
            printf("Canadá: %f.\n", areaCanada);
            if (areaBrasil > areaCanada)
            {
                printf("%s Vencedor.\n", Brasil);
            } else if (areaBrasil < areaCanada)
            {
                printf("%s Vencedor.", Canada);
            } else{printf("Empatou.\n");}
        break;
        case 3:
            printf("Comparando o atributo PIB Brasil x Canadá.\n");
            printf("Brasil: %f.\n", pibBrasil);
            printf("Candá: %f.\n", pibCanada);
            if (pibBrasil > pibCanada)
            {
                printf("%s Vencedor.", Brasil);
            } else if (pibBrasil < pibCanada)
            {
                printf("%s Vencedor.\n", Canada);
            }   else{printf("Empatou!!\n");}
        break;
        case 4:
            printf("Comparando o atributo Pontos Turísticos Brasil x Canadá.\n");
            printf("Brasil: %d.\n", pontosBrasil);
            printf("Brasil: %d.\n", pontosCanada);
            if (pontosBrasil > pontosCanada)
            {
                printf("%s Vencedor.", Brasil);
            } else if (pontosBrasil<pontosCanada)
            {
                printf("%s Vencedor.\n", Canada);
            } else{printf("Empate!!\n");}
        break;
        case 5:
            printf("Comparando o atributo Densidade Demografica Brasil x Canadá\n");
            printf("Brasil: %f.\n", densDemBrasil);
            printf("Canadá: %f.\n", densDemCanada);
            if (densDemBrasil<densDemCanada) //inversao para densidade demografica
            {
                printf("%s Vencedor!!!", Brasil );
            }else if (densDemBrasil>densDemCanada)
            {
                printf("%s Vencedor", Canada);
            } else{
                printf("Empatou!!!");
            }
        break;
        case 6:
            printf("Sair do Jogo\n"); // caso o usuario queira sair do jogo
        break;
    
    default:
            printf("Opção inválida.\n"); // mensagem para opção invalida
        break;
    }
    return 0;
}