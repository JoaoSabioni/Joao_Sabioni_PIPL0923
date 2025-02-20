#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = num1;
    int menor = num1;

    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;

    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    printf("O maior numero �: %d\n", maior);
    printf("O menor numero �: %d\n", menor);

    return 0;
}
