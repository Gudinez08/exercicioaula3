#include <stdio.h>

int LerIdade() {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    return idade;
}

const char* classificacaoNadador(int idade) {
    if (idade >= 5 && idade <= 7) {
        return "Infantil A";
    } else if (idade >= 8 && idade <= 10) {
        return "Infantil B";
    } else if (idade >= 11 && idade <= 13) {
        return "Juvenil A";
    } else if (idade >= 14 && idade <= 17) {
        return "Juvenil B";
    } else if (idade >= 18) {
        return "Adulto";
    } else {
        return "Sem categoria (idade inferior a 5 anos)";
    }
}

void apresentacaoResultado(int idade, const char *categoria) {
    printf("Idade: %d anos\n", idade);
    printf("Categoria: %s\n", categoria);
}

int main() {
    int idade = LerIdade();
    const char *categoria = classificacaoNadador(idade);
    apresentacaoResultado(idade, categoria);

    return 0;
}