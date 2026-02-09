#include <stdio.h>

/* ===================== TORRE ===================== */
/* Função recursiva que simula o movimento da Torre para cima */
void moverTorre(int casas) {
    if (casas == 0) {
        return; // condição de parada da recursão
    }

    printf("Cima\n");
    moverTorre(casas - 1); // chamada recursiva
}

/* ===================== RAINHA ===================== */
/* Função recursiva que simula o movimento da Rainha para a direita */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverRainha(casas - 1);
}

/* ===================== BISPO (RECURSIVO) ===================== */
/* Função recursiva para movimento diagonal do Bispo */
void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima\n");
    printf("Direita\n");

    moverBispoRecursivo(casas - 1);
}

/* ===================== BISPO (LOOPS ANINHADOS) ===================== */
/*
   Loop externo: movimento vertical
   Loop interno: movimento horizontal
*/
void moverBispoLoops(int casas) {
    int vertical, horizontal;

    for (vertical = 0; vertical < casas; vertical++) {
        printf("Cima\n");

        for (horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
}

/* ===================== CAVALO ===================== */
/*
   Movimento em "L":
   - Duas casas para cima
   - Uma casa para a direita
   Uso de loops aninhados, continue e break
*/
void moverCavalo() {
    int i, j;

    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 2; j++) {

            if (i == 1 && j == 2) {
                printf("Cima\n");
                continue; // controla o fluxo do loop
            }

            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Direita\n");
                break; // encerra o loop interno
            }
        }
    }
}

/* ===================== MAIN ===================== */
int main() {

    int casasTorre = 3;
    int casasRainha = 4;
    int casasBispo = 3;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(casasBispo);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
