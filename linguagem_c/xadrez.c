#include <stdio.h>

void movimento_bispo(int casas, int atual) {//funcao passando o numero de casas e a posicao inicial
    if (atual > casas) return; //verificacao para nao entrar em loop infinito, enquanto posicao atual for menor que casas continua o loop
     
    for (int v = 0; v < 1; v++) { // Loop externo para o movimento vertical
        printf("Cima\n");
        for (int h = 0; h < 1; h++) {// Loop interno para movimento horizontal
            printf("Direita\n");
        }
    }
    movimento_bispo(casas, atual + 1);// chamando a recursiva para continuar a diagonal
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int torre = 5;//variavel torre recebe o valor 5 para movimento
    const int bispo = 5;//variavel bispo recebe o valor 5 para movimento
    const int rainha = 8;//variavel rainha recebe o valor 5 para movimento
    const int cavalo_v = 2; //variavel cavalo vertical recebe valor 2
    const int cavalo_h = 1; //variavel cavalo horizontal recebe valor 1 

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //printf("BISPO se movimentando\n");
    //int j = 1;
    //while (j <= bispo) {//movimentacao do bispo em diagonal para direita
        //printf("Cima, Direita \n");
        //j++;
    //}
    //printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("TORRE se movimentando para DIREITA\n");
    for (int i = 1; i <= torre; i++) {//movimentaccao da torre para a direita
        printf("Direita \n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("RAINHA se movimentando para ESQUERDA\n");
    int k = 1;
    do {
        printf("Esquerda \n");
        k++;
    } while (k <= rainha);// movimentacao da rainha para esquerda
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    /*printf("CAVALO se movimentando\n");
    for (int i = 1; i <= cavalo_v; i++) {  // movimento do cavalo na vertical
        printf("Baixo\n", i);
        int passo_h = 0;//variavel de controle do passo horizontal
        while (passo_h < cavalo_h && i == cavalo_v) {// movimento do cavalo na horizontal
            printf("Esquerda\n");
            passo_h++;
        }
    }*/

    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("BISPO se movimentando na DIAGONAL\n");
    movimento_bispo(bispo,1);//chamando a funcao de movimento do bispo, e passando posicao inicial
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("CAVALO se movimentando em L\n");
    int movimentos_cavalo = 0;//variavel de controle de movimentos do cavalo

    for (int i = 1; i <= 3; i++) {//loop para controle do movimento vertical
        if (i > 2) {//condicao para subir somente 2 casa, na terceira ele pula
            break;  // assim encerrando a subida
        }
        printf("Cima\n");
        movimentos_cavalo++;//incrementa os movimento... ele so pode dar 3 passos

        for (int j = 1; j <= 2; j++) {//loop verifica se terminou a subida....
            if (i < 2) {// O cavalo só para de subir quando for no terceiro passo
                continue; // se nao atingiu o terceiro passo ele continua o loop(a subida)
            }
            if (j > 1) {// se ele ja virou para a direita 1 vez
                break; //para de se movimentar
            }
            printf("Direita\n");
            movimentos_cavalo++;//incrementa os movimento... ele so pode dar 3 passos
        }
    }

    printf("\n");
    printf("\n");

    return 0;
}
