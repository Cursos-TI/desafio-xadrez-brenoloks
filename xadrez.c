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

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

      // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // Variável de controle dos loops

    // --------------------------
    // Movimento da TORRE (for)
    // --------------------------
    // Torre move-se em linha reta — aqui vamos simular 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre as peças

    // --------------------------
    // Movimento do BISPO (while)
    // --------------------------
    // Bispo move-se na diagonal — aqui simulamos 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    i = 1; // reinicia o contador
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n"); // Espaço entre as peças

    // --------------------------
    // Movimento da RAINHA (do-while)
    // --------------------------
    // Rainha pode mover-se em qualquer direção — aqui simulamos 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 1; // reinicia o contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}
