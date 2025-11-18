#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Desafio nível Mestre (Tema 3 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo)

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
    float pibPerCapita1;

    // Declarando as variáveis da carta 2
    char estado2;
    char codigo2[6];
    char nomeDaCidade2[70];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2; 

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

    // Calculando PIB per Capita
    pibPerCapita1 = pib1 * 1000000000;
    pibPerCapita1 /= (float) populacao1;
    
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

    // Calculando PIB per Capita
    pibPerCapita2 = pib2 * 1000000000;
    pibPerCapita2 /= (float) populacao2;

    // COMPARANDO CARTAS

    //Declarando variáveis para controle do menu
    int atributoEscolhido1, atributoEscolhido2;

    //Início do Menu

    //Exibindo menu para escolha do primeiro atributo a ser comparado
    printf( "Vamos ver qual é a melhor carta. Escolha um atributo. Digite:\n");
    printf( "1- para População\n");
    printf( "2- para Área\n");
    printf( "3- para PIB\n");
    printf( "4- para Pontos Turísticos\n");
    printf( "5- para Densidade Populacional\n");
    printf( "6- para Pib per Capita\n");
    scanf("%d", &atributoEscolhido1);

    //Escolhendo o segundo atributo
    //Removendo da lista o atributoEscolhido1
    switch (atributoEscolhido1)
    {
    case 1: // Removendo População
        printf( "Escolha mais um atributo. Digite:\n");
        printf( "2- para Área\n");
        printf( "3- para PIB\n");
        printf( "4- para Pontos Turísticos\n");
        printf( "5- para Densidade Populacional\n");
        printf( "6- para Pib per Capita\n");
        scanf("%d", &atributoEscolhido2);
        break;

    case 2: // Removendo Área
        printf( "Escolha mais um atributo. Digite:\n");
        printf( "1- para População\n");
        printf( "3- para PIB\n");
        printf( "4- para Pontos Turísticos\n");
        printf( "5- para Densidade Populacional\n");
        printf( "6- para Pib per Capita\n");
        scanf("%d", &atributoEscolhido2);
        break;

    case 3: // Removendo PIB
        printf( "Escolha mais um atributo. Digite:\n");
        printf( "1- para População\n");
        printf( "2- para Área\n");
        printf( "4- para Pontos Turísticos\n");
        printf( "5- para Densidade Populacional\n");
        printf( "6- para Pib per Capita\n");
        scanf("%d", &atributoEscolhido2);
        break;

    case 4: // Removendo Pontos Turísticos
        printf( "Escolha mais um atributo. Digite:\n");
        printf( "1- para População\n");
        printf( "2- para Área\n");
        printf( "3- para PIB\n");
        printf( "5- para Densidade Populacional\n");
        printf( "6- para Pib per Capita\n");
        scanf("%d", &atributoEscolhido2);
        break;

    case 5: // Removendo Densidade Populacional
        printf( "Escolha mais um atributo. Digite:\n");
        printf( "1- para População\n");
        printf( "2- para Área\n");
        printf( "3- para PIB\n");
        printf( "4- para Pontos Turísticos\n");
        printf( "6- para Pib per Capita\n");
        scanf("%d", &atributoEscolhido2);
        break;

    case 6: // Removendo Pib per Capita
        printf( "Escolha mais um atributo. Digite:\n");
        printf( "1- para População\n");
        printf( "2- para Área\n");
        printf( "3- para PIB\n");
        printf( "4- para Pontos Turísticos\n");
        printf( "5- para Densidade Populacional\n");
        scanf("%d", &atributoEscolhido2);
        break;
    
    default:
        printf( "Número inválido.");
        break;
    }

    //Fim do Menu

    //Comparando atributos

    /*
    Calculando Pontuação das cartas {
        Carta 1: Para pontuacaoCarta1, teremos pontuacaoAtributo1Carta1 + pontuacaoAtributo2Carta1 
        Carta 2: Para pontuacaoCarta2, teremos pontuacaoAtributo1Carta2 + pontuacaoAtributo2Carta2
    }

    Clculando Pontuação dos atributos {
    
        Lógica{
        Para termos uma pontuação mais justa e equilibrada, vamos comparar o quão distante está o atributo de uma carta em comparação com o mesmo atributo da outra carta.
        Então, se por exemplo, no atributo população, a carta 1 tem o valor 507000, e a carta 2 tem o valor 1880000, O maior valor (1880000) representa 100.00%, 
        e o menor valor (507000) representa 26.96%;
        A pontuação no primeiro atributo ficaria assim: pontuacaoAtributo1Carta1 = 26.96; pontuacaoAtributo1Carta2 = 100.00;

        Continuando o exemplo, para o segundo atributo, vamos escolher Área. A carta 1 tem o valor 674.123, a carta 2 tem o valor 434.123;
        o maior valor (674.123) representa 100.00%, o menor valor (434.123) representa 64.39%
        A pontuação no segundo atributo ficaria assim: pontuacaoAtributo2Carta1 = 100.00; pontuacaoAtributo2Carta2 = 64.39;

        Para ver qual carta ganha, vamos descobrir qual a pontuação de cada carta e comparar;
        Carta 1: pontuacaoCarta1 = 26.96 + 100.00 // pontuacaoCarta1 = 126.96;
        Carta 2: pontuacaoCarta2 = 100.00 + 64.39 // pontuacaoCarta2 = 164.39;
        
        126.96 < 164.39 // Carta 2 venceu

        Fórmula para calcular a pontuação {

            //pontuação do atributo1

            int maior;
            float pontuacaoAtributo1Carta1, pontuacaoAtributo1Carta2;

            //Atributo 1

            maior= (A >= B) ? 1 : 0;
            
            switch(maior) {
                case 1: // A >= B
                    pontuacaoAtributo1Carta1 = 100;
                    pontuacaoAtributo1Carta2 = (B/A) * 100;
                    break;
                case 0: // A < B
                    pontuacaoAtributo1Carta1 = 100;
                    pontuacaoAtributo1Carta2 = (A/B) * 100;
                    break;
            }

            //Atributo 2

            maior= (A >= B) ? 1 : 0;

            switch(maior) {
                case 1: // A >= B
                    pontuacaoAtributo2Carta1 = 100;
                    pontuacaoAtributo2Carta2 = ((float)B/A) * 100;
                    break;
                case 0: // A < B
                    pontuacaoAtributo2Carta1 = 100;
                    pontuacaoAtributo2Carta2 = ((float)A/B) * 100;
                    break;
            }

            // Se der empate, ou seja, se A = B, Ambos vão receber 100.00 pontos

        }

        } 
    }
    */

    // Comparando Atributo 1 

    int maior;
    float pontuacaoAtributo1Carta1, pontuacaoAtributo1Carta2;

    switch (atributoEscolhido1)
    {
        case 1: // População
            maior = (populacao1 >= populacao2) ? 1 :  0;
            // Se populacao1 == populacao2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo1Carta1 = 100.00;
                pontuacaoAtributo1Carta2 = ((float)populacao2 / populacao1) * 100;
            } else {
                pontuacaoAtributo1Carta2 = 100.00;
                pontuacaoAtributo1Carta1 = ((float)populacao1 / populacao2) * 100;
            }
            break;

        case 2: // Área
            maior = (area1 >= area2) ? 1 :  0;
            // Se area1 == area2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo1Carta1 = 100.00;
                pontuacaoAtributo1Carta2 = (area2 / area1) * 100;
            } else {
                pontuacaoAtributo1Carta2 = 100.00;
                pontuacaoAtributo1Carta1 = (area1 / area2) * 100;
            }
            break;

        case 3: // PIB
            maior = (pib1 >= pib2) ? 1 :  0;
            // Se pib1 == pib2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo1Carta1 = 100.00;
                pontuacaoAtributo1Carta2 = (pib2 / pib1) * 100;
            } else {
                pontuacaoAtributo1Carta2 = 100.00;
                pontuacaoAtributo1Carta1 = (pib1 / pib2) * 100;
            }
            break;

        case 4: // Pontos Turísticos
            maior = (pontosTuristicos1 >= pontosTuristicos2) ? 1 :  0;
            // Se pontosTuristicos1 == pontosTuristicos2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo1Carta1 = 100.00;
                pontuacaoAtributo1Carta2 = ((float)pontosTuristicos2 / pontosTuristicos1) * 100;
            } else {
                pontuacaoAtributo1Carta2 = 100.00;
                pontuacaoAtributo1Carta1 = ((float)pontosTuristicos1 / pontosTuristicos2) * 100;
            }
            break;

        case 5: // Densidade Populacional
            maior = (densidadePopulacional1 <= densidadePopulacional2) ? 1 :  0;
            // Se densidadePopulacional1 == densidadePopulacional2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo1Carta1 = 100.00;
                pontuacaoAtributo1Carta2 = (densidadePopulacional1 / densidadePopulacional2) * 100;
            } else {
                pontuacaoAtributo1Carta2 = 100.00;
                pontuacaoAtributo1Carta1 = (densidadePopulacional2 / densidadePopulacional1) * 100;
            }
            break;

        case 6: // PIB per Capita
            maior = (pibPerCapita1 >= pibPerCapita2) ? 1 :  0;
            // Se pibPerCapita1 == pibPerCapita2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo1Carta1 = 100.00;
                pontuacaoAtributo1Carta2 = (pibPerCapita2 / pibPerCapita1) * 100;
            } else {
                pontuacaoAtributo1Carta2 = 100.00;
                pontuacaoAtributo1Carta1 = (pibPerCapita1 / pibPerCapita2) * 100;
            }
            break;

    
    default:
        printf( "Número inválido.");
        break;

    }

    // Comparando Atributo 2
    
    float pontuacaoAtributo2Carta1, pontuacaoAtributo2Carta2;

    switch (atributoEscolhido2) 
    {   
        case 1: // População
        maior = (populacao1 >= populacao2) ? 1 :  0;
        // Se populacao1 == populacao2, ambos recebem o valor 100
        if (maior == 1) {
            pontuacaoAtributo2Carta1 = 100.00;
            pontuacaoAtributo2Carta2 = ((float)populacao2 / populacao1) * 100;
        } else {
            pontuacaoAtributo2Carta2 = 100.00;
            pontuacaoAtributo2Carta1 = ((float)populacao1 / populacao2) * 100;
        }
        break;

        case 2: // Área
            maior = (area1 >= area2) ? 1 :  0;
            // Se area1 == area2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo2Carta1 = 100.00;
                pontuacaoAtributo2Carta2 = (area2 / area1) * 100;
            } else {
                pontuacaoAtributo2Carta2 = 100.00;
                pontuacaoAtributo2Carta1 = (area1 / area2) * 100;
            }
            break;

        case 3: // PIB
            maior = (pib1 >= pib2) ? 1 :  0;
            // Se pib1 == pib2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo2Carta1 = 100.00;
                pontuacaoAtributo2Carta2 = (pib2 / pib1) * 100;
            } else {
                pontuacaoAtributo2Carta2 = 100.00;
                pontuacaoAtributo2Carta1 = (pib1 / pib2) * 100;
            }
            break;

        case 4: // Pontos Turísticos
            maior = (pontosTuristicos1 >= pontosTuristicos2) ? 1 :  0;
            // Se pontosTuristicos1 == pontosTuristicos2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo2Carta1 = 100.00;
                pontuacaoAtributo2Carta2 = ((float)pontosTuristicos2 / pontosTuristicos1) * 100;
            } else {
                pontuacaoAtributo2Carta2 = 100.00;
                pontuacaoAtributo2Carta1 = ((float)pontosTuristicos1 / pontosTuristicos2) * 100;
            }
            break;

        case 5: // Densidade Populacional
            maior = (densidadePopulacional1 <= densidadePopulacional2) ? 1 :  0;
            // Se densidadePopulacional1 == densidadePopulacional2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo2Carta1 = 100.00;
                pontuacaoAtributo2Carta2 = (densidadePopulacional1 / densidadePopulacional2) * 100;
            } else {
                pontuacaoAtributo2Carta2 = 100.00;
                pontuacaoAtributo2Carta1 = (densidadePopulacional2 / densidadePopulacional1) * 100;
            }
            break;

        case 6: // PIB per Capita
            maior = (pibPerCapita1 >= pibPerCapita2) ? 1 :  0;
            // Se pibPerCapita1 == pibPerCapita2, ambos recebem o valor 100
            if (maior == 1) {
                pontuacaoAtributo2Carta1 = 100.00;
                pontuacaoAtributo2Carta2 = (pibPerCapita2 / pibPerCapita1) * 100;
            } else {
                pontuacaoAtributo2Carta2 = 100.00;
                pontuacaoAtributo2Carta1 = (pibPerCapita1 / pibPerCapita2) * 100;
            }
            break;        
    }

    // Calculando pontuação de cada carta

    //carta 1

    float pontuacaoCarta1, pontuacaoCarta2;
    pontuacaoCarta1 = pontuacaoAtributo1Carta1 + pontuacaoAtributo2Carta1;
    pontuacaoCarta2 = pontuacaoAtributo1Carta2 + pontuacaoAtributo2Carta2;

    //printf( "pontuação da carta 1: %.2f\n", pontuacaoCarta1);
    //printf( "pontuação da carta 2: %.2f\n", pontuacaoCarta2);

    // exibindo atributos

    printf( "O primeiro atributo é: ");
    switch (atributoEscolhido1)
    {
    case 1:
        printf( "População\n");
        break;

    case 2:
        printf( "Área\n");
        break;

    case 3:
        printf( "PIB\n");
        break;

    case 4:
        printf( "Pontos Turísticos\n");
        break;

    case 5:
        printf( "Densidade Populacional\n");
        break;

    case 6:
        printf( "Pib per Capita\n");
        break;
    
    }

    printf( "O segundo atributo é: ");
    switch (atributoEscolhido2)
    {
    case 1:
        printf( "População\n");
        break;

    case 2:
        printf( "Área\n");
        break;

    case 3:
        printf( "PIB\n");
        break;

    case 4:
        printf( "Pontos Turísticos\n");
        break;

    case 5:
        printf( "Densidade Populacional\n");
        break;

    case 6:
        printf( "Pib per Capita\n");
        break;
    
    }

    // Comparando pontuação entre as cartas e exibindo

    if (pontuacaoCarta1 > pontuacaoCarta2) // Carta 1 venceu!
    {
        printf( "Carta 1\n");
        printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
        printf( "Pontuação no primeiro atributo: %.2f\n", pontuacaoAtributo1Carta1);
        printf( "Pontuação no segundo atributo: %.2f\n", pontuacaoAtributo2Carta1);
        printf( "Pontuação total: %.2f\n", pontuacaoCarta1);
        printf( "Carta 2\n");
        printf( "Nome da Cidade: %s\n", nomeDaCidade2);
        printf( "Pontuação no primeiro atributo: %.2f\n", pontuacaoAtributo1Carta2);
        printf( "Pontuação no segundo atributo: %.2f\n", pontuacaoAtributo2Carta2);
        printf( "Pontuação total: %.2f\n", pontuacaoCarta2);
        printf( "Carta 1 venceu!");
    } else if (pontuacaoCarta1 < pontuacaoCarta2)
    {
        printf( "Carta 1\n"); // Carta 2 venceu!
        printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
        printf( "Pontuação no primeiro atributo: %.2f\n", pontuacaoAtributo1Carta1);
        printf( "Pontuação no segundo atributo: %.2f\n", pontuacaoAtributo2Carta1);
        printf( "Pontuação total: %.2f\n", pontuacaoCarta1);
        printf( "Carta 2\n");
        printf( "Nome da Cidade: %s\n", nomeDaCidade2);
        printf( "Pontuação no primeiro atributo: %.2f\n", pontuacaoAtributo1Carta2);
        printf( "Pontuação no segundo atributo: %.2f\n", pontuacaoAtributo2Carta2);
        printf( "Pontuação total: %.2f\n", pontuacaoCarta2);
        printf( "Carta 2 venceu!");
    } else 
    {
        printf( "Carta 1\n"); // Empate!
        printf( "Nome da Cidade:, %s\n", nomeDaCidade1);
        printf( "Pontuação no primeiro atributo: %.2f\n", pontuacaoAtributo1Carta1);
        printf( "Pontuação no segundo atributo: %.2f\n", pontuacaoAtributo2Carta1);
        printf( "Pontuação total: %.2f\n", pontuacaoCarta1);
        printf( "Carta 2\n");
        printf( "Nome da Cidade: %s\n", nomeDaCidade2);
        printf( "Pontuação no primeiro atributo: %.2f\n", pontuacaoAtributo1Carta2);
        printf( "Pontuação no segundo atributo: %.2f\n", pontuacaoAtributo2Carta2);
        printf( "Pontuação total: %.2f\n", pontuacaoCarta2);
        printf( "Empate!");
    }


return 0;
}