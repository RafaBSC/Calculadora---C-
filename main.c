#include <stdio.h>
#include "teste.h"

int main() {

    float calc1, calc2;
    char oper;

    printf("Digite um valor:" );
    scanf("%f %c %f", &calc1, &oper ,&calc2);

    switch(oper) {
        case '+': printf("%.2f + %.2f = %.2f\n", calc1, calc2, calc1 + calc2);break;
        case '-': printf("%.2f - %.2f = %.2f\n", calc1, calc2, calc1 - calc2); break;
        case '*': printf("%.2f * %.2f = %.2f\n", calc1, calc2, calc1 * calc2); break;
        case '/':
        if (calc2 != 0) {
            printf("%.2f / %.2f = %.2f\n", calc1, calc2, calc1 / calc2);
        } else {
            printf("Divisor não pode ser zero");
        }
        break;
        default: printf("Operacao invalida");
    }

return 0;
}