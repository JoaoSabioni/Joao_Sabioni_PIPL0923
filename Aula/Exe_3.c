#include <stdio.h>

int main() {
    int num1, num2;

    // Entrada de dados
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    // Exibir em ordem crescente
    if (num1 < num2) {
        printf("Ordem crescente: %d %d\n", num1, num2);
        printf("Ordem decrescente: %d %d\n", num2, num1);
    } else {
        printf("Ordem crescente: %d %d\n", num2, num1);
        printf("Ordem decrescente: %d %d\n", num1, num2);
    }

    return 0;
}
