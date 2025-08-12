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
int casasTorre = 5;       // Torre: 5 casas para a direita
    int casasBispo = 5;       // Bispo: 5 casas diagonal Cima+Direita
    int casasRainha = 8;      // Rainha: 8 casas para a esquerda

    /* Parâmetros do Cavalo:
       - cada movimento em "L" consiste em 2 casas para baixo e 1 casa para a esquerda
       - movimentosCavalo define quantos movimentos em "L" serão simulados (aqui 1 por padrão) */
    int movimentosCavalo = 1;
    int passosParaBaixo = 2;     // duas casas para baixo por movimento em L
    int passosParaEsquerda = 1;  // uma casa para esquerda por movimento em L

    /* Variáveis de controle (apenas inteiros conforme solicitado) */
    int i;     // contador genérico
    int cont;  // contador auxiliar

    /* --------------------------
       Movimento da TORRE (for)
       -------------------------- */
    // Torre move-se em linha reta — aqui simulamos 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // separador

    /* --------------------------
       Movimento do BISPO (while)
       -------------------------- */
    // Bispo move-se na diagonal — aqui simulamos 5 casas Cima + Direita
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n"); // separador

    /* ------------------------------
       Movimento da RAINHA (do-while)
       ------------------------------ */
    // Rainha pode mover-se em todas as direções — aqui simulamos 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    /* ---------------------------------------------------------
       Movimento do CAVALO (loops aninhados: for externo + while interno)
       --------------------------------------------------------- */
    // Separe o movimento do Cavalo dos anteriores com uma linha em branco (requisito)
    printf("\n");

    printf("Movimento do Cavalo:\n");
    /* 
       Explicação da lógica:
       - Usamos um loop 'for' externo que itera cada movimento em "L" que queremos simular.
       - Dentro dele usamos um loop 'while' para realizar as duas casas para baixo (passosParaBaixo).
       - Após completar as duas casas para baixo, imprimimos a movimentação para a esquerda.
       - Isto simula o padrão: "Baixo", "Baixo", "Esquerda" para cada movimento em L.
    */
    for (i = 0; i < movimentosCavalo; i++) {
        // loop interno (while) para as duas casas para baixo
        cont = 0;
        while (cont < passosParaBaixo) {
            printf("Baixo\n");
            cont++;
        }

        /* após os dois 'Baixo', move-se uma casa para a esquerda
           (como passosParaEsquerda = 1, apenas um printf é necessário) */
        printf("Esquerda\n");
    }

    return 0;
}
