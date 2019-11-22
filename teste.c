#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    int menu = 0;
    int vetor1[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int vetor2[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int vetor = 0;
    int valorRetirar;
    int pesquisar;
    srand(time(NULL));

    for (int i = 0; i >= 0; i++)
    {

        printf("Calculadora \n");
        printf("O que deseja fazer? \n");
        printf("1 - Gerar vetores \n");
        printf("2 - Imprimir vetores\n");
        printf("3 - Eliminar elemento do vetor\n");
        printf("4 - Pesquisar elemento nos vetores\n");
        printf("5 - Ordenar os vetores\n");
        printf("6 - Calcular operacoes matematicas\n");
        printf("7 - Calcular metodos estatisticos\n");
        printf("8 - Total de elementos validos\n");
        printf("9 - Sair \n");
        scanf("%i", &menu);

        if (menu == 1)
        {
            for (int i = 0; i < 8; i++)
            {
                vetor1[i] = rand() % 10;
                vetor2[i] = rand() % 10;
            }
        }

        if (menu == 2)
        {
            printf("Vetor 1 \n");
            printf("[");
            for (int i = 0; i < 8; i++)
            {
                if (i < 7)
                {
                    printf("%i-", vetor1[i]);
                }
                else
                {
                    printf("%i", vetor1[i]);
                }
            }
            printf("] \n");

            printf("Vetor 2 \n");
            printf("[");
            for (int i = 0; i < 8; i++)
            {
                if (i < 7)
                {
                    printf("%i-", vetor2[i]);
                }
                else
                {
                    printf("%i", vetor2[i]);
                }
            }
            printf("] \n");
        }

        if (menu == 3)
        {
            printf("Qual vetor tu quer mexer 1 ou 2? \n");
            scanf("%i", &vetor);

            if (vetor == 1)
            {
                printf("Selecione o valor que quer retirar \n");
                scanf("%i", &valorRetirar);

                if (valorRetirar > 8 || vetor1[valorRetirar] == 0)
                {
                    printf("Erro, tente de novo \n");
                }
                else
                {
                    vetor1[valorRetirar] = 0;
                }
            }
            if (vetor == 2)
            {
                printf("Selecione o valor que quer retirar \n");
                scanf("%i", &valorRetirar);

                if (valorRetirar > 8 || vetor2[valorRetirar] == 0)
                {
                    printf("Erro, tente de novo \n");
                }
                else
                {
                    vetor2[valorRetirar] = 0;
                }
            }
        }

        if (menu == 4)
        {
            printf("Selecione o valor que deseja procurar \n");
            scanf("%i", &pesquisar);

            for (int i = 0; i < 8; i++)
            {
                if (vetor1[i] == pesquisar)
                {
                    printf("Existe na posicao %i \n", i);
                }

                if (vetor2[i] == pesquisar)
                {
                    printf("Existe na posicao %i \n", i);
                }
            }
        }

        if (menu == 5)
        {
            int aux;
            printf("Vetor 1 \n");
            printf("[");
            for (int i = 0; i < 8; i++)
            {
                for (int y = i; y < 8; y++)
                {
                    if (vetor1[i] > vetor1[y])
                    {
                        aux = vetor1[i];
                        vetor1[i] = vetor1[y];
                        vetor1[y] = aux;
                    }
                }
                if (i < 7)
                {
                    printf("%i-", vetor1[i]);
                }
                else
                {
                    printf("%i", vetor1[i]);
                }
            }
            printf("] \n");

            printf("Vetor 2 \n");
            printf("[");

            for (int i = 0; i < 8; i++)
            {
                for (int y = i; y < 8; y++)
                {
                    if (vetor2[i] > vetor2[y])
                    {
                        aux = vetor2[i];
                        vetor2[i] = vetor2[y];
                        vetor2[y] = aux;
                    }
                }
                if (i < 7)
                {
                    printf("%i-", vetor2[i]);
                }
                else
                {
                    printf("%i", vetor2[i]);
                }
            }
            printf("] \n");
        }

        if (menu == 6)
        {
            /* nao entendi*/
        }

        if (menu == 7)
        {
            printf("Mediana do Vetor 1:");

            int aux, resultado1, resultado2, maior1 = 0, chave1 = 0, maior2 = 0, chave2 = 0;
            int vetorAux1[8] = {0, 0, 0, 0, 0, 0, 0, 0};
            int vetorAux2[8] = {0, 0, 0, 0, 0, 0, 0, 0};

            for (int i = 0; i < 8; i++)
            {
                for (int y = i; y < 8; y++)
                {
                    if (vetor1[i] > vetor1[y])
                    {
                        aux = vetor1[i];
                        vetor1[i] = vetor1[y];
                        vetor1[y] = aux;
                    }
                }
            }
            resultado1 = (vetor1[3] + vetor1[4]) / 2;
            printf("%i \n", resultado1);

            printf("Mediana do Vetor 2:");
            for (int i = 0; i < 8; i++)
            {
                for (int y = i; y < 8; y++)
                {
                    if (vetor2[i] > vetor2[y])
                    {
                        aux = vetor2[i];
                        vetor2[i] = vetor2[y];
                        vetor2[y] = aux;
                    }
                }
            }
            resultado2 = (vetor2[3] + vetor2[4]) / 2;
            printf("%i \n", resultado2);

            //MODA

            for (int i = 0; i < 8; i++)
            {
                for (int j = j; j < 8; j++)
                {
                    if (vetor1[i] == vetor1[j])
                    {
                        vetorAux1[i] += 1;
                    }
                }
            }
            for (int i = 0; i < 8; i++)
            {
                if (vetorAux1[i] > maior1)
                {
                    maior1 = vetorAux1[i];
                }
            }
            for (int i = 0; i < 8; i++)
            {
                if (vetorAux1[i] == maior1)
                {
                    chave1 = i;
                }
            }
            printf("A moda do vetor 1: %i \n", vetor1[chave1]);

            for (int i = 0; i < 8; i++)
            {
                for (int j = j; j < 8; j++)
                {
                    if (vetor2[i] == vetor2[j])
                    {
                        vetorAux2[i] += 1;
                    }
                }
            }
            for (int i = 0; i < 8; i++)
            {
                if (vetorAux2[i] > maior2)
                {
                    maior2 = vetorAux2[i];
                }
            }
            for (int i = 0; i < 8; i++)
            {
                if (vetorAux2[i] == maior2)
                {
                    chave2 = i;
                }
            }
            printf("A moda do vetor 2: %i \n", vetor2[chave2]);
        }

        if (menu == 8)
        {
            int elementoValido1 = 0, elementoValido2 = 0;
            for (int i = 0; i < 8; i++)
            {
                if (vetor1[i] >= 1 || vetor1[i] <= 500)
                {
                    elementoValido1 += 1;
                }
                if (vetor2[i] >= 1 || vetor2[i] <= 500)
                {
                    elementoValido2 += 1;
                }
            }

            printf("Vetor 1 tem %i, elementos validos \n", elementoValido1);
            printf("Vetor 2 tem %i, elementos validos \n", elementoValido2);
        }

        if (menu == 9)
        {
            printf("Fim do programa");
            i = -2;
        }
    }

    return 0;
}
