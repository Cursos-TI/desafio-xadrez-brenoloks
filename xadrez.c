#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* =========================================================
   Funções Recursivas para Torre, Bispo e Rainha
   ========================================================= */

// Torre: movimento horizontal simples (direita)
void moverTorreRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return; // caso base da recursão
    printf("Direita\n");
    moverTorreRecursivo(casasRestantes - 1); // chamada recursiva
}

// Bispo: movimento diagonal (Cima Direita)
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Rainha: movimento horizontal simples (esquerda)
void moverRainhaRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casasRestantes - 1);
}

/* =========================================================
   Loops aninhados para o Cavalo (complexo)
   =========================================================
   Movimento: duas casas para cima e uma para a direita
   Usando loops com múltiplas variáveis, continue e break
*/
void moverCavaloComplexo(int movimentos) {
    int i, j;
    for (i = 0; i < movimentos; i++) {
        // duas casas para cima
        for (j = 0; j < 3; j++) { // 3 passos no total, sendo 2 "Cima" e 1 "Direita"
            if (j < 2) {
                printf("Cima\n");
                continue; // pula para a próxima iteração sem checar o restante
            }
            // se não for Cima, então é Direita
            printf("Direita\n");
            break; // encerra o loop interno após o passo para a direita
        }
    }
}

/* =========================================================
   Bispo com loops aninhados (extra)
   =========================================================
   Loop externo: vertical (cima)
   Loop interno: horizontal (direita)
*/
void moverBispoComLoops(int casas) {
    int vertical, horizontal;
    for (vertical = 0; vertical < casas; vertical++) {
        for (horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
}



int main() {
    // Nível Mestre - Movimentação das Peças
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



/* =========================================================
   Função principal
   ========================================================= */

    // Quantidade de casas para recursividade
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Quantidade de movimentos em L do Cavalo
    int movimentosCavalo = 1;

    /* ----------------- Torre ----------------- */
    printf("Movimento da Torre:\n");
    moverTorreRecursivo(casasTorre);

    printf("\n");

    /* ----------------- Bispo ----------------- */
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\n");

    /* Bispo também com loops aninhados */
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(casasBispo);

    printf("\n");

    /* ----------------- Rainha ----------------- */
    printf("Movimento da Rainha:\n");
    moverRainhaRecursivo(casasRainha);

    printf("\n");

    /* ----------------- Cavalo ----------------- */
    printf("Movimento do Cavalo:\n");
    moverCavaloComplexo(movimentosCavalo);

    return 0;
}