#include <stdio.h>

float valorS(int N) {
    float S = 0.0;
    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;
    }
    return S;
}

int main() {
    int N = -1;

    while(N <= 0) {
        printf("Digite o valor inteiro e positivo de N: ");
        scanf("%d", &N);
    }

    printf("O valor de S é %.2f \n", valorS(N));

    return 0;
}