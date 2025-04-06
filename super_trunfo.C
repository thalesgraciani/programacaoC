#include <stdio.h>


int main() {
    
    char estado;
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //coletando dados carta 1
    printf("Bem vindo ao cadastramento de cartas do supertrunfo de estados.\nEscolha uma letra para representar o Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta, exemplo: A01: \n");
    scanf("%s", &codigo);

    printf("Agora me dê o nome da cidade que essa carta vai representar: \n");
    scanf("%s", cidade);    

    printf("Quantas pessoas moram nessa cidade?: \n");
    scanf("%i", &populacao);

    printf("Quantos km² de área tem a cidade (use ponto para número não inteiros)?: \n");
    scanf("%f", &area);

    printf("Qual o PIB?: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem a cidade?: \n");
    scanf("%d", &pontos_turisticos);

    
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

     //coletando dados carta 2
     printf("Bem vindo ao cadastramento de cartas do supertrunfo de estados.\nEscolha uma letra para representar o Estado: \n");
     scanf(" %c", &estado2);
 
     printf("Digite o código da carta, exemplo: A01: \n");
     scanf("%s", &codigo2);
 
     printf("Agora me dê o nome da cidade que essa carta vai representar: \n");
     scanf("%s", cidade2);    
 
     printf("Quantas pessoas moram nessa cidade?: \n");
     scanf("%i", &populacao2);
 
     printf("Quantos km² de área tem a cidade (use ponto para número não inteiros)?: \n");
     scanf("%f", &area2);
 
     printf("Qual o PIB?: \n");
     scanf("%f", &pib2);
 
     printf("Quantos pontos turísticos tem a cidade?: \n");
     scanf("%d", &pontos_turisticos2);
     printf("\n");


    //Mostrando os dados coletados carta 1

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %i habitantes\n", populacao);
    printf("Área: %2f km²\n", area);
    printf("PIB: %2f bilhões de reais \n", pib);
    printf("Número de Pontos Turisticos: %i\n", pontos_turisticos);
    printf("\n");
    
     //Mostrando os dados coletados carta 2

     printf("Carta 2 \n");
     printf("Estado: %c \n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da cidade: %s\n", cidade2);
     printf("População: %i habitantes\n", populacao2);
     printf("Área: %2f km²\n", area2);
     printf("PIB: %2f bilhões de reais \n", pib2);
     printf("Número de Pontos Turisticos: %i\n", pontos_turisticos2);








    return 0;
}
