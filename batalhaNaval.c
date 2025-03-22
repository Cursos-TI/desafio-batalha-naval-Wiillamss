// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Prática Willams da Silva Gomes

#include <stdio.h>
int main()
{
    // Criação do cabeçalho, referente a colunas
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Criação da númeração das linhas
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Criação do tabuleiro
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    // Posicionando o navio no tabuleiro na vertical
    int navio1[3] = {4, 5, 6};
    for (int i = 0; i < 3; i++)
    {
        int linha1 = navio1[i];
        int coluna1 = 4;
        tabuleiro[linha1][coluna1] = 3;
    }

    // Posicionando o navio no tabuleiro na horizontal
    int navio2[3] = {0, 1, 2};
    for (int i = 0; i < 3; i++)
    {
        int coluna2 = navio2[i];
        int linha2 = 1;
        tabuleiro[linha2][coluna2] = 3;
    }

    printf("   "); // Fazendo o loop para exibir o cabeçalho
    for (int j = 0; j < 10; j++)
    {
        printf("  %c", colunas[j]);
    }
    printf("\n"); // Fazendo o loop para exibir as linhas e o tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf(" %2d ", linhas[i]);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}