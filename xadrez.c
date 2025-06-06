#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int i; // Declaração das variáveis.

 
    printf("- - - Movimentacao da rainha - - -\n\n"); // Facilitar a vizualização do usuário.

        for (i = 1; i <= 8; i++) // Iniciei o "i" valendo 1 para o valor da variável aumentar concomitantemente com a movimentação da rainha.
        {
            printf("%d Esquerda\n",i); // Mostrei a movimentação para o usuário.
        
            
        }
    
    printf("\n\n- - - Movimentacao da torre - - -\n\n"); // Facilitar a vizualização do usuário.
    
        i = 1; // "i" Volta a valer 1
        while (i <= 5)
        {
            printf("%d Direita\n",i);
            i++;
        }
        
    printf("\n\n- - - Movimentacao do bispo - - -\n\n");

        i = 1; // "i" Volta a valer 1.
        do
        {
            printf("%d Direita\n",i);
            printf("%d Cima\n",i);
            i++;

        } while (i <= 5);
        








    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n\n- - - Movimentacao do cavalo - - -\n\n");

        for ( i = 1; i <= 1; i++)
        {
            int j;
            j = 1;
            do
            {
                printf("cima\n");
                j++;
            } while (j <= 2);
            printf("Direita\n\n");
        
        }
        



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
