// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Prática Willams da Silva Gomes

#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main()
{

    char colunas[TAMANHO_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[TAMANHO_TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializando o tabuleiro

    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando o navio na Horizontal
    int linha_navio1_1 = 5;
    int coluna_navio1_1 = 3;
    tabuleiro[linha_navio1_1][coluna_navio1_1] = TAMANHO_NAVIO;

    int linha_navio1_2 = 5;
    int coluna_navio1_2 = 4;
    tabuleiro[linha_navio1_2][coluna_navio1_2] = TAMANHO_NAVIO;

    int linha_navio1_3 = 5;
    int coluna_navio1_3 = 5;
    tabuleiro[linha_navio1_3][coluna_navio1_3] = TAMANHO_NAVIO;

    // Posicionando o navio na vertical
    int linha_navio2_1 = 1;
    int coluna_navio2_1 = 1;
    tabuleiro[linha_navio2_1][coluna_navio2_1] = TAMANHO_NAVIO;

    int linha_navio2_2 = 2;
    int coluna_navio2_2 = 1;
    tabuleiro[linha_navio2_2][coluna_navio2_2] = TAMANHO_NAVIO;

    int linha_navio2_3 = 3;
    int coluna_navio2_3 = 1;
    tabuleiro[linha_navio2_3][coluna_navio2_3] = TAMANHO_NAVIO;

    // Posicionando o terceiro navio na diagonal
    int linha_navio3_1 = 1;
    int coluna_navio3_1 = 3;
    tabuleiro[linha_navio3_1][coluna_navio3_1] = TAMANHO_NAVIO;

    int linha_navio3_2 = 2;
    int coluna_navio3_2 = 4;
    tabuleiro[linha_navio3_2][coluna_navio3_2] = TAMANHO_NAVIO;

    int linha_navio3_3 = 3;
    int coluna_navio3_3 = 5;
    tabuleiro[linha_navio3_3][coluna_navio3_3] = TAMANHO_NAVIO;

    // Posicionando o quarto navio na diagonal
    int linha_navio4_1 = 6;
    int coluna_navio4_1 = 2;
    tabuleiro[linha_navio4_1][coluna_navio4_1] = TAMANHO_NAVIO;

    int linha_navio4_2 = 7;
    int coluna_navio4_2 = 3;
    tabuleiro[linha_navio4_2][coluna_navio4_2] = TAMANHO_NAVIO;

    int linha_navio4_3 = 8;
    int coluna_navio4_3 = 4;
    tabuleiro[linha_navio4_3][coluna_navio4_3] = TAMANHO_NAVIO;

    // Posicionando o quinto navio na diagonal
    int linha_navio5_1 = 1;
    int coluna_navio5_1 = 9;
    tabuleiro[linha_navio5_1][coluna_navio5_1] = TAMANHO_NAVIO;

    int linha_navio5_2 = 2;
    int coluna_navio5_2 = 8;
    tabuleiro[linha_navio5_2][coluna_navio5_2] = TAMANHO_NAVIO;

    int linha_navio5_3 = 3;
    int coluna_navio5_3 = 7;
    tabuleiro[linha_navio5_3][coluna_navio5_3] = TAMANHO_NAVIO;

    printf("  *** Tabuleiro Batalha Naval ***\n");

    printf("   "); // Fazendo o loop para exibir o cabeçalho
    for (int j = 0; j < TAMANHO_TABULEIRO; j++)
    {
        printf("  %c", colunas[j]);
    }
    printf("\n"); // Fazendo o loop para exibir as linhas e o tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    {
        printf(" %2d ", linhas[i]);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
        {
            if (tabuleiro[i][j] == TAMANHO_NAVIO)
            {
                printf(" 3 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}