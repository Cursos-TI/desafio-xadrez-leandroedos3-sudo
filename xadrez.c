#include <stdio.h>

// =========================================================================
// DEFINIÇÃO DAS FUNÇÕES RECURSIVAS (REQUISITO NÍVEL MESTRE)
// Explicando alteraçãoes: Funções recursivas substituem loops tradicionais utilizando a 
// pilha de execução do sistema. Cada chamada reduz o contador até ao Caso Base.
// =========================================================================

// Função recursiva para a movimentação da Torre.
// Caso base: Quando 'passos' chega a 0, a execução da pilha é interrompida.
// Caso recursivo: Imprime a direção e chama-se a si mesma decrementando 1 unidade.
void moverTorreRecursivo(int passos) {
    if (passos <= 0) {
        return; // Caso base: ponto de paragem da recursão
    }
    printf("Direita\n");
    moverTorreRecursivo(passos - 1); // Chamada recursiva com decremento
}

// Função recursiva para a movimentação do Bispo.
// Simula o deslocamento diagonal imprimindo os dois eixos combinados a cada passo.
void moverBispoRecursivo(int passos) {
    if (passos <= 0) {
        return; // Caso base: ponto de paragem da recursão
    }
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1); // Chamada recursiva com decremento
}

// Função recursiva para a movimentação da Rainha.
// Controla o número de casas a mover para a esquerda de forma puramente funcional.
void moverRainhaRecursivo(int passos) {
    if (passos <= 0) {
        return; // Caso base: ponto de paragem da recursão
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(passos - 1); // Chamada recursiva com decremento
}

int main() {
    // Definindo variáveis constantes para os limites de movimentos (Boas Práticas)
    const int passosTorre = 5;
    const int passosBispo = 5;
    const int passosRainha = 8;
    const int passosVerticaisCavalo = 2;   // Deslocamento vertical do "L"
    const int passosHorizontaisCavalo = 1; // Deslocamento perpendicular do "L"

    printf("=== MOVIMENTACAO DAS PECAS DE XADREZ - NIVEL MESTRE ===\n\n");

    // =========================================================================
    // 1. RECURSIVIDADE: TORRE
    // Movimento de 5 casas para a Direita obtido através de chamadas recursivas.
    // =========================================================================
    printf("Movimento da Torre (Recursivo):\n");
    moverTorreRecursivo(passosTorre);
    printf("\n"); // Linha em branco para separação obrigatória de blocos

    // =========================================================================
    // 2. RECURSIVIDADE: BISPO
    // Movimento de 5 casas na diagonal Cima-Direita gerido por recursão.
    // =========================================================================
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(passosBispo);
    printf("\n");

    // =========================================================================
    // 3. RECURSIVIDADE: RAINHA
    // Movimento de 8 casas para a Esquerda controlado via função recursiva.
    // =========================================================================
    printf("Movimento da Rainha (Recursivo):\n");
    moverRainhaRecursivo(passosRainha);
    printf("\n");

    // =========================================================================
    // 4. BISPO COM LOOPS ANINHADOS
    // Requisito: Loop externo para o eixo vertical e interno para o horizontal.
    // Como a diagonal avança simultaneamente nos dois eixos a cada iteração,
    // o loop interno atua imprimindo o estado combinado com base na matriz lógica.
    // =========================================================================
    printf("Movimento do Bispo (Loops Aninhados):\n");
    for (int vertical = 1; vertical <= passosBispo; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
    printf("\n");

    // =========================================================================
    // 5. LOOPS COMPLEXOS: CAVALO
    // Objetivo: Mover 2 casas para Cima e 1 para a Direita.
    // Lógica Avançada: O loop 'for' externo controla a subida vertical.
    // Múltiplas variáveis: Inicializamos 'cima' no 'for' e controlamos 'direita' 
    // no 'while' interno. Comandos 'break' gerem a quebra de fluxo precisa.
    // =========================================================================
    printf("Movimento do Cavalo (Loops Complexos):\n");

    // Loop externo (FOR): incrementa a altura do Cavalo passo a passo
    for (int cima = 1, direita = 0; cima <= passosVerticaisCavalo; cima++) {
        printf("Cima\n");

        // Loop interno (WHILE): avalia o desvio lateral do movimento em "L"
        while (direita < passosHorizontaisCavalo) {
            // Condição Avançada: Se o Cavalo ainda não subiu as 2 casas necessárias,
            // o 'break' interrompe o loop horizontal para permitir que o 'for' continue a subir.
            if (cima < passosVerticaisCavalo) {
                break; 
            }
            
            // Quando a altura máxima (2) for atingida, o fluxo executa a curva do "L"
            printf("Direita\n");
            direita++; // Atualização para encerrar o ciclo do loop interno
        }
    }
    printf("\n");

    return 0;
}