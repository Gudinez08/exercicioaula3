#include <stdio.h>

float peso_ideal(float alt, char sexo) {
    float pesoideal;

    if (sexo == 'F' || sexo == 'f') {
        pesoideal = 62.1 * alt - 44.7;
        return pesoideal;
    } 
    else if (sexo == 'M' || sexo == 'm') {
        pesoideal = 72.7 * alt - 58;
        return pesoideal;
    }

    return 0;
}

int main() {
    float alt;
    char sexo = 'G';

    printf("Digite sua altura:");
    scanf("%f", &alt);

    while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Digite seu sexo: ");
        scanf(" %c", &sexo);
    }

    printf("O seu peso ideal é %.2f kilos", peso_ideal(alt, sexo));

    return 0;
}