#include <stdio.h>

int main()
{

    int escolhaCarta, carta1Ou2, populacao1Ou2;
    int area1Ou2, pib1Ou2, pontosTuristicos1Ou2;
    int pontosTuristicosA = 50, pontosTuristicosB = 30;
    int densidadePopulacionalOu2;
    int populacaoA = 12325000, populacaoB = 6748000;
    float densidadePopuA = 8102.47, densidadePopuB = 5622.24;
    float areaA = 1521.11, areaB = 1200.25;
    float pibA = 699.28, pibB = 300.50;
    char cidade1[15] = "São Paulo", cidade2[15] = "Rio de Janeiro";

    // Menu de atributos.
    printf("***Escolha uma opção: ***\n\n");

    printf("1. Nome do cidade:\n");

    printf("2. Populção:\n");

    printf("3. Área:\n");

    printf("4. PIB:\n");

    printf("5. Número de pontos turísticos:\n");

    printf("6. Densidade populacional:\n");

    printf("Escolha:");

    scanf("%d", &escolhaCarta);

    printf("\n");

    // Selação de atributos carta 1 e carta 2.
    switch (escolhaCarta)
    {
    case 1:
        // Menu cartas.
        printf("1.-Para carta 1\n");
        printf("2.-Para carta 2\n");
        printf("Escolha a carta: ");
        scanf("%d", &carta1Ou2);

        // Nome das cidades carta 1 ou carta 2.
        switch (carta1Ou2)
        {
        case 1:
            printf("\nVocê escolheu a carta 1\n");
            printf("A cidade é São Paulo.\n");
            break;

        case 2:
            printf("\nVocê escolheu a carta 2\n");
            printf("A cidade é Rio de Janeiro.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
        break;

    case 2:
        // Menu  para escolha de carta (atributo populaçaõ):
        printf("O atributo escolhido foi ** POPULAÇÃo**\n");
        printf("1.-Para carta 1:\n");
        printf("2.-Para carta 2:\n");
        printf("  Escolha a carta: ");
        scanf("%d", &populacao1Ou2);

        // Resultado da escolha: (população carta 1 ou carta 2):
        switch (populacao1Ou2)
        {
        case 1:
            printf("** Você escolheu a carta 1. São Paulo **\n");
            printf("A população da carta 1 é de %d habitantes.\n\n", populacaoA);

            // Comparação atributo população (carta 1):
            if ((escolhaCarta == 2) && (populacao1Ou2 == 1))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é População!!\n");
                printf("A população da carta 1 é %d e a ", populacaoA);
                printf("Carta 2 é %d\n", populacaoB);

                if (populacaoA > populacaoB)
                {
                    printf("***Carta 1 Venceu!!***\n");
                }
                else if (populacaoA == populacaoB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é População!!\n");
                printf("A população da carta 1 é %d e a ", populacaoA);
                printf("Carta 2 é %d\n", populacaoB);

                if (populacaoB > populacaoA)
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
                else if (populacaoB == populacaoA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
            }

            break;

        case 2:
            printf("** Você escolheu a carta 2. Rio de Janeiro **\n");
            printf("A população da carta 2 é de %d habitantes.\n\n", populacaoB);

            // Comparação atributo população (carta 2):
            if ((escolhaCarta == 2) && (populacao1Ou2 == 2))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é População!!\n");
                printf("A população da carta 1 é %d e a ", populacaoA);
                printf("Carta 2 é %d\n", populacaoB);

                if (populacaoB > populacaoA)
                {
                    printf("***Carta 2 Venceu!!***\n");
                }
                else if (populacaoB == populacaoA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é População!!\n");
                printf("A população da carta 1 é %d e a ", populacaoA);
                printf("Carta 2 é %d\n", populacaoB);

                if (populacaoA > populacaoB)
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
                else if (populacaoA == populacaoB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
            }

            break;

        default:
            printf("Opção inválida.\n");
            break;
        }
        break;

    case 3:
        // Menu para ecolha de carta (atributa área):
        printf("O atributo escolhido foi ** ÁREA **\n");
        printf("1.-Para carta 1:\n");
        printf("2.-Para carta 2:\n");
        printf("Escolha a carta: ");
        scanf("%d", &area1Ou2);

        // Resultado da escolha: (área carta 1 ou carta 2):
        switch (area1Ou2)
        {
        case 1:
            printf("** Você escolheu a carta 1. São Paulo **\n");
            printf("A Área da carta 1 é de %.2f km².\n\n", areaA);

            // Comparação atributo área (carta 1):
            if ((escolhaCarta == 3) && (area1Ou2 == 1))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é área!\n");
                printf("A área da carta 1 é %.2f e a ", areaA);
                printf("Carta 2 é %.2f\n", areaB);

                if (areaA > areaB)
                {
                    printf("***Carta 1 Venceu!!***\n");
                }
                else if (areaA == areaB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("** Carta 2 Venceu!! **\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é área!\n");
                printf("A área da carta 1 é %.2f e a ", areaA);
                printf("Carta 2 é %.2f\n", areaB);

                if (areaB > areaA)
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
                else if (areaB == areaA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
            }
            break;

        case 2:
            printf("** Você escolheu a carta 2. Rio de Janeiro **\n");
            printf("A Área da carta 2 é de %.2f km².\n\n", areaB);

            // Comparação atributo área (carta 2):
            if ((escolhaCarta == 3) && (area1Ou2 == 2))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é área!\n");
                printf("A área da carta 1 é %.2f e a ", areaA);
                printf("Carta 2 é %.2f\n", areaB);

                if (areaB > areaA)
                {
                    printf("***Carta 2 Venceu!!***\n");
                }
                else if (areaB == areaA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("** Carta 1 Venceu!! **\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é área!\n");
                printf("A área da carta 1 é %.2f e a ", areaA);
                printf("Carta 2 é %.2f\n", areaB);

                if (areaA > areaB)
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
                else if (areaA == areaB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
            }
            break;

        default:
            printf("Opção inválida.\n");
            break;
        }
        break;

    case 4:
        // Menu para ecolha de carta (atributo PIB):
        printf("O atributo escolhido foi ** PIB **\n\n");
        printf("1.-Para carta 1:\n");
        printf("2.-Para carta 2:\n");
        printf("  Escolha a carta: ");
        scanf("%d", &pib1Ou2);

        // Resultado da escolha: (PIB carta 1 ou carta 2):
        switch (pib1Ou2)
        {
        case 1:
            printf("** Você escolheu a carta 1. São Paulo **\n");
            printf("O PIB da carta 1 é de %.2f bilhões de reais.\n\n", pibA);

            // Comparação atributo PIB (carta 1):
            if ((escolhaCarta == 4) && (pib1Ou2 == 1))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é PIB!\n");
                printf("O PIB da carta 1 é %.2f e a ", pibA);
                printf("Carta 2 é %.2f\n", pibB);

                if (pibA > pibB)
                {
                    printf("***Carta 1 Venceu!!***\n");
                }
                else if (pibA == pibB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("** Carta 2 Venceu!! **\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é PIB!\n");
                printf("O PIB da carta 1 é %.2f e a ", pibA);
                printf("Carta 2 é %.2f\n", pibB);

                if (pibB > pibA)
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
                else if (pibB == pibA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
            }
            break;

        case 2:
            printf("** Você escolheu a carta 2. Rio de Janeiro **\n");
            printf("O PIB da carta 2 é de %.2f bilhões de reais.\n\n", pibB);

            // Comparação atributo PIB (carta 2):
            if ((escolhaCarta == 4) && (pib1Ou2 == 2))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é PIB!\n");
                printf("O PIB da carta 1 é %.2f e a ", pibA);
                printf("Carta 2 é %.2f\n", pibB);

                if (pibB > pibA)
                {
                    printf("***Carta 2 Venceu!!***\n");
                }
                else if (pibB == pibA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("** Carta 1 Venceu!! **\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é PIB!\n");
                printf("O PIB da carta 1 é %.2f e a ", pibA);
                printf("Carta 2 é %.2f\n", pibB);

                if (pibA > pibB)
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
                else if (pibA == pibB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
            }
            break;

        default:
            printf("Opção inválida.\n");
            break;
        }
        break;

    case 5:
        // Menu para ecolha de carta (atributo pontos turísticos):
        printf("O atributo escolhido foi ** Pontos Turísticos **\n\n");
        printf("1.-Para carta 1:\n");
        printf("2.-Para carta 2:\n");
        printf("  Escolha a carta: ");
        scanf("%d", &pontosTuristicos1Ou2);

        // Resultado da escolha: (pontos turísticos carta 1 ou carta 2):
        switch (pontosTuristicos1Ou2)
        {
        case 1:
            printf("** Você escolheu a carta 1. São Paulo **\n");
            printf("O número de pontos turísticos da carta 1 é de %d.\n\n", pontosTuristicosA);

            // Comparação atributo Pontos turísticos (carta 1):
            if ((escolhaCarta == 5) && (pontosTuristicos1Ou2 == 1))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é Pontos turísticos!\n");
                printf("O número de pontos turísticos da carta 1 é %d e a ", pontosTuristicosA);
                printf("Carta 2 é %d\n", pontosTuristicosB);

                if (pontosTuristicosA > pontosTuristicosB)
                {
                    printf("***Carta 1 Venceu!!***\n");
                }
                else if (pontosTuristicosA == pontosTuristicosB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("** Carta 2 Venceu!! **\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é Pontos turísticos!\n");
                printf("O número de pontos turísticos da carta 1 é %d e a ", pontosTuristicosA);
                printf("Carta 2 é %d \n", pontosTuristicosB);

                if (pontosTuristicosB > pontosTuristicosA)
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
                else if (pontosTuristicosB == pontosTuristicosA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
            }
            break;

        case 2:
            printf("** Você escolheu a carta 2. Rio de Janeiro **\n");
            printf("O número de pontos turísticos da carta 2 é de %d.\n\n", pontosTuristicosB);

            // Comparação atributo pontos turísticos (carta 2):
            if ((escolhaCarta == 4) && (pontosTuristicos1Ou2 == 2))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é Pontos turísticos!\n");
                printf("O número de pontos turísticos da carta 1 é %d e a", pontosTuristicosA);
                printf("Carta 2 é %d\n", pontosTuristicosB);

                if (pontosTuristicosB > pontosTuristicosA)
                {
                    printf("***Carta 2 Venceu!!***\n");
                }
                else if (pontosTuristicosB == pontosTuristicosA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("** Carta 1 Venceu!! **\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é Pontos turísticos!\n");
                printf("O número de pontos turísticos da carta 1 é %d e a ", pontosTuristicosA);
                printf("Carta 2 é %d\n", pontosTuristicosB);

                if (pontosTuristicosA > pontosTuristicosB)
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
                else if (pontosTuristicosA == pontosTuristicosB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
            }

            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
        break;

    case 6:
        // Menu para ecolha de carta (atributo densidade populacional):
        printf("O atributo escolhido foi ** Densidade Populacional **\n\n");
        printf("1.-Para carta 1:\n");
        printf("2.-Para carta 2:\n");
        printf("  Escolha a carta: ");
        scanf("%d", &densidadePopulacionalOu2);

        // Resultado da escolha: (densidade populacional carta 1 ou carta 2):
        // Obs; o menor valor vence.
        switch (densidadePopulacionalOu2)
        {
        case 1:
            printf("** Você escolheu a carta 1. São Paulo **\n");
            printf("A Densidade Populacional da carta 1 é de %.2f\n\n", densidadePopuA);

            // Comparação atributo Densidade Popullacional (carta 1):
            if ((escolhaCarta == 6) && (densidadePopulacionalOu2 == 1))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é Densidade Populacional!\n");
                printf("A Densidade Populacional da carta 1 é %.2f e a ", densidadePopuA);
                printf("Carta 2 é %.2f\n", densidadePopuB);

                if (densidadePopuA < densidadePopuB)
                {
                    printf("***Carta 1 Venceu!!***\n");
                }
                else if (densidadePopuA == densidadePopuB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("** Carta 2 Venceu!! **\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é Pontos turísticos!\n");
                printf("O número de pontos turísticos da carta 1 é %.2f e a ", pontosTuristicosA);
                printf("Carta 2 é %.2f\n", pontosTuristicosB);

                if (densidadePopuB < densidadePopuA)
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
                else if (densidadePopuB == densidadePopuA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
            }
            break;

        case 2:
            printf("** Você escolheu a carta 2. Rio de Janeiro **\n");
            printf("A Densidade Populacional da carta 2 é de %.2f.\n\n", densidadePopuB);

            // Comparação atributo Densidade Populacional (carta 2):
            if ((escolhaCarta == 6) && (densidadePopulacionalOu2 == 2))
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é Densiade Populacional!\n");
                printf("A Densidade Populacional da carta 1 é %.2f e a", densidadePopuA);
                printf("Carta 2 é %.2f\n", densidadePopuB);

                if (densidadePopuB < densidadePopuA)
                {
                    printf("***Carta 2 Venceu!!***\n");
                }
                else if (densidadePopuB == densidadePopuA)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("** Carta 1 Venceu!! **\n");
                }
            }
            else
            {
                printf("*** Resultado da comparação ***\n\n");
                printf("As duas cidades são: %s e %s!\n", cidade1, cidade2);
                printf("O atributo comparado é Densidade Populacional!\n");
                printf("A Densidade Populacional da carta 1 é %.2f e a ", densidadePopuA);
                printf("Carta 2 é %.2f\n", densidadePopuB);

                if (densidadePopuA < densidadePopuB)
                {
                    printf("*** Carta 1 Venceu!! ***\n");
                }
                else if (densidadePopuA == densidadePopuB)
                {
                    printf("*** Empate!! ***\n");
                }
                else
                {
                    printf("*** Carta 2 Venceu!! ***\n");
                }
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    default:
        printf("Opção inválida,tente novamente!!\n");
    }
    return 0;
}