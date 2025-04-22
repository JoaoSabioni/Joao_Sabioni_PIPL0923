#include <stdio.h>

void ordenarCrescente(int *a, int *b, int *c) {
    int temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
}

int main() {
    int num1, num2, num3;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int crescente1 = num1, crescente2 = num2, crescente3 = num3;
    ordenarCrescente(&crescente1, &crescente2, &crescente3);

    printf("Valores em ordem crescente: %d %d %d\n", crescente1, crescente2, crescente3);
    printf("Valores em ordem decrescente: %d %d %d\n", crescente3, crescente2, crescente1);

    return 0;
}
