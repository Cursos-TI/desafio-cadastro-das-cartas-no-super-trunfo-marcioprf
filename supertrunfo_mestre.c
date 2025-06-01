#include <stdio.h>

int main () {
    
    char estado1,estado2;
    char codigo1[4],codigo2[4]; 
    char cidade1[50],cidade2[50];
    unsigned long int populacao1,populacao2;
    float areakm1,areakm2;
    float pib1,pib2;
    int pontos1,pontos2;
    float densidade1,densidade2;
    float pibcapita1,pibcapita2;
    float superpoder1,superpoder2;
    
//carta 1
    printf("Digite os dados da Carta 1:\n");//pulando linhas com \n
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);//%s string nao precisa de &
    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &areakm1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
     
     //calculo densidade
     densidade1 = (populacao1 / areakm1);
     //calculo pib per capita
     pibcapita1 = (pib1 / populacao1);
     //calculo poder 1
     superpoder1 = (float)populacao1 + areakm1 + pib1 + (float)pontos1 + pibcapita1 + (1.0f / densidade1);

//carta 2
    printf("\nDigite os dados da Carta 2:\n");//pulando linhas com \n
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);//%s string nao precisa de &
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &areakm2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    
    //calculo densidade
    densidade2 = (populacao2 / areakm2);
    //calculo pib per capita
    pibcapita2 = (pib2 / populacao2);
    //super poder 2
    superpoder2 = (float)populacao2 + areakm2 + pib2 + (float)pontos2 + pibcapita2 + (1.0f / densidade2);

   
//resultado cidade 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);//.2f para duas casas decimais do float
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("A   densidade populacional é: %f\n",densidade1);
    printf("O Pib percapita é: %f\n",pibcapita1);
    printf("Super Poder: %.2f\n", superpoder1);

//resultado cidade 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);//.2f para duas casas decimais do float
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("A   densidade populacional é: %f\n",densidade2);
    printf("O Pib percapita é: %f\n",pibcapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    
    printf("#################################################\n");
    printf("COMPARANDO CARTAS\n");
    printf("\n\n");
     if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    if (areakm1 > areakm2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (pontos1 > pontos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    // Densidade: menor vence
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (pibcapita1 > pibcapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (superpoder1 > superpoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    
        
    
    return 0;
}


