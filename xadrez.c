#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

     // Quantidade de casas que cada peça vai andar
    int passosTorre = 5;
    int passosBispo = 5;
    int passosRainha = 8;

       printf("=== MOVIMENTACAO DAS PECAS DE XADREZ ===\n\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

     // BISPO 
    // O bispo vai andar 5 casas na diagonal
    // Aqui foi usado o WHILE

    printf("Movimento do Bispo:\n");

    int contadorBispo = 0;

    while (contadorBispo < passosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // TORRE 
    // A torre vai andar 5 casas para a direita
    // Aqui foi usado o FOR

    printf("Movimento da Torre:\n");

    for (int i = 0; i < passosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimento da Rainha:\n");

    int contadorRainha = 0;

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < passosRainha);

    printf("\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
