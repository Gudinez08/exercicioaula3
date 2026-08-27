#include <stdio.h>
#include <stdbool.h>

bool numero_par(int valor) {
    if (valor % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (numero_par(valor)) {
        printf("O número é par \n");
    }
    else {
        printf("O número é ímpar \n");
    }

    return 0;
}
