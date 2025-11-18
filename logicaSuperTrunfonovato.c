#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Desafio nível aventureiro (Tema 3 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo)

int main() {
    // Declarando as variáveis da carta 1
    char estado1;
    char codigo1[6];
    char nomeDaCidade1[70];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;
    float superPoder1;

    // Declarando as variáveis da carta 2
    char estado2;
    char codigo2[6];
    char nomeDaCidade2[70];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;
    float superPoder2;

    // COLETANDO OS DADOS DA CARTA 1
    printf( "Carta 1: \n");

    // Coletando o estado
    printf( "Digite o estado (Uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

    // Coletando codigo
    printf( "Digite o código (Letra + número. Ex: A01): \n");
    scanf("%5s", codigo1);
    scanf("%*c");

    // Coletando o nome da cidade mesmo que seja composto
    printf( "Digite o nome da cidade: \n");
    fgets(nomeDaCidade1, 70, stdin);
    int len = strlen(nomeDaCidade1);
    if(len > 0 && nomeDaCidade1[len -1] == '\n') {
        nomeDaCidade1[len -1] = '\0';
    }

    // Coletando população
    printf( "Digite a população: \n");
    scanf("%lu", &populacao1);
    
    // Coletando a área
    printf( "Digite a área em km²: \n");
    scanf("%f", &area1);
    
    // Coletando PIB
    printf( "Digite o PIB em bilhões de reais: \n");
    scanf("%f", &pib1);
    
    // Coletando pontos turísticos
    printf( "Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);
    
    // Calculando densidade populacional
    densidadePopulacional1 = (float) populacao1 / area1;

    // Calculando PIB per Capta
    pibPerCapta1 = pib1 * 1000000000;
    pibPerCapta1 /= (float) populacao1;

    // Calculando Super Poder
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapta1 - densidadePopulacional1; 
    
    // COLETANDO OS DADOS DA CARTA 2
    
    printf( "Carta 2: \n");
    
    // Coletando o estado
    printf( "Digite o estado (Uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado2);
    
    // Coletando codigo
    printf( "Digite o código (Letra + número. Ex: A01): \n");
    scanf("%5s", codigo2);
    scanf("%*c");
    
    // Coletando o nome da cidade mesmo que seja composto
    printf( "Digite o nome da cidade: \n");
    fgets(nomeDaCidade2, 70, stdin);
    int length = strlen(nomeDaCidade2);
    if(length > 0 && nomeDaCidade2[length -1] == '\n') {
        nomeDaCidade2[length -1] = '\0';
    }
    
    // Coletando população
    printf( "Digite a população: \n");
    scanf("%lu", &populacao2);
    
    // Coletando a área
    printf( "Digite a área em km²: \n");
    scanf("%f", &area2);
    
    // Coletando PIB
    printf( "Digite o PIB em bilhões de reais: \n");
    scanf("%f", &pib2);
    
    // Coletando pontos turísticos
    printf( "Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    
    // Calculando densidade populacional
    densidadePopulacional2 = (float) populacao2 / area2;

    // Calculando PIB per Capta
    pibPerCapta2 = pib2 * 1000000000;
    pibPerCapta2 /= (float) populacao2;

    // COMPARANDO CARTAS

    //Declarando variável para controle do menu
    int atributoEscolhido;

    //Início do Menu

    //Exibindo menu para escolha do primeiro atributo a ser comparado
    printf( "Vamos ver qual é a melhor carta. Escolha um atributo. Digite:\n");
    printf( "1- para População\n");
    printf( "2- para Área\n");
    printf( "3- para PIB\n");
    printf( "4- para Pontos Turísticos\n");
    printf( "5- para Densidade Populacional\n");
    printf( "6- para Pib per Capta\n");
    scanf("%d", &atributoEscolhido);
    // Fim do menu

    // Comparando atributos
    switch (atributoEscolhido) {
    case 1: //população
        if (populacao1 > populacao2) 
        {
            printf( "Atributo escolhido: População\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "População: %lu\n", populacao1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "População: %lu\n", populacao2);
            printf( "Carta 1 venceu!");
        } else if (populacao1 < populacao2) 
        {
            printf( "Atributo escolhido: População\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "População: %lu\n", populacao1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "População: %lu\n", populacao2);
            printf( "Carta 2 venceu!");
        } else 
        {
            printf( "Atributo escolhido: População\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "População: %lu\n", populacao1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "População: %lu\n", populacao2);
            printf( "Empate!");
        }        
        break;

    case 2: //Área
        if (area1 > area2) 
        {
            printf( "Atributo escolhido: Área\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Área: %f\n", area1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Área: %f\n", area2);
            printf( "Carta 1 venceu!");
        } else if (area1 < area2) 
        {
            printf( "Atributo escolhido: Área\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Área: %f\n", area1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Área: %f\n", area2);
            printf( "Carta 2 venceu!");
        } else 
        {
            printf( "Atributo escolhido: Área\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Área: %f\n", area1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Área: %f\n", area2);
            printf( "Empate!");
        }        
        break;

    case 3: //PIB
        if (pib1 > pib2) 
        {
            printf( "Atributo escolhido: PIB\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "PIB: %f\n", pib1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "PIB: %f\n", pib2);
            printf( "Carta 1 venceu!");
        } else if (pib1 < pib2) 
        {
            printf( "Atributo escolhido: PIB\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "PIB: %f\n", pib1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "PIB: %f\n", pib2);
            printf( "Carta 2 venceu!");
        } else 
        {
            printf( "Atributo escolhido: PIB\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "PIB: %f\n", pib1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "PIB: %f\n", pib2);
            printf( "Empate!");
        }        
        break;

    case 4: //Pontos Turísticos
        if (pontosTuristicos1 > pontosTuristicos2) 
        {
            printf( "Atributo escolhido: Pontos Turísticos\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Pontos Turísticos: %d\n", pontosTuristicos1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Pontos Turísticos: %d\n", pontosTuristicos2);
            printf( "Carta 1 venceu!");
        } else if (pontosTuristicos1 < pontosTuristicos2) 
        {
            printf( "Atributo escolhido: Pontos Turísticos\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Pontos Turísticos: %d\n", pontosTuristicos1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Pontos Turísticos: %d\n", pontosTuristicos2);
            printf( "Carta 2 venceu!");
        } else 
        {
            printf( "Atributo escolhido: Pontos Turísticos\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Pontos Turísticos: %d\n", pontosTuristicos1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Pontos Turísticos: %d\n", pontosTuristicos2);
            printf( "Empate!");
        }        
        break;

    case 5: //Densidade Populacional
        if (densidadePopulacional1 < densidadePopulacional2) 
        {
            printf( "Atributo escolhido: Densidade Populacional\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
            printf( "Carta 1 venceu!");
        } else if (densidadePopulacional1 > densidadePopulacional2) 
        {
            printf( "Atributo escolhido: Densidade Populacional\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
            printf( "Carta 2 venceu!");
        } else 
        {
            printf( "Atributo escolhido: Densidade Populacional\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
            printf( "Empate!");
        }        
        break; 

    case 6: //Pib per Capta
        if (pibPerCapta1 > pibPerCapta2) 
        {
            printf( "Atributo escolhido: Pib per Capta\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Pib per Capta: %f\n", pibPerCapta1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Pib per Capta: %f\n", pibPerCapta2);
            printf( "Carta 1 venceu!");
        } else if (pibPerCapta1 < pibPerCapta2) 
        {
            printf( "Atributo escolhido: Pib per Capta\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Pib per Capta: %f\n", pibPerCapta1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Pib per Capta: %f\n", pibPerCapta2);
            printf( "Carta 2 venceu!");
        } else 
        {
            printf( "Atributo escolhido: Pib per Capta\n");
            printf( "Carta 1\n");
            printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
            printf( "Pib per Capta: %f\n", pibPerCapta1);
            printf( "Carta 2\n");
            printf( "Nome da Cidade: %s\n", nomeDaCidade2);
            printf( "Pib per Capta: %f\n", pibPerCapta2);
            printf( "Empate!");
        }        
        break;
    
    default:
        printf( "Número inválido. Tente digitar um número de 1 a 6");
        break;
    }

    return 0;
}