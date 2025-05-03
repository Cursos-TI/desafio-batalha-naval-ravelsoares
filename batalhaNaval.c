#include <stdio.h>

int main()
{
    int tabuleiro[10][10]; // Inicializando o tabuleiro

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0; // Preenchendo o tabuleiro com zeros
        }
    }

    // Preenchendo a posição do barco horizontal
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    // Preenchendo a posição do barco vertical
    tabuleiro[4][9] = 3;
    tabuleiro[5][9] = 3;
    tabuleiro[6][9] = 3;

    // Exibindo o tabuleiro
    printf("     A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
        {
            printf(" %d | ", i + 1);
        }
        else
        {
            printf("%d | ", i + 1);
        }
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]); // Mostrando o valor de cada posição
        }
        printf("\n");
    }

    return 0;
}