#include "teste.h"
 #include<stdio.h>

float soma (float a, float b) {
    return a + b;
}

float subtracao (float c, float d) {
    return c - d;
}

float multiplicacao (float e, float f) {
    return e * f;
}

float divisao (float g, float h) {
    if (h == 0) {
        printf("Erro!");
    } else {

    }
    return g/h;
}

float potencia (float base, float expoente) {
    int k, calc=1;

    for (k = 1; k <= expoente; k++) {
        calc*=base;
    }
    return calc;
}
