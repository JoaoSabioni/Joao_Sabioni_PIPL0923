#include <stdio.h>

void converter_tempo(int segundos, int *horas, int *minutos, int *seg_restantes) {
        *horas = segundos / 3600;
        segundos %= 3600;
        *minutos = segundos / 60;
        *seg_restantes = segundos % 60;
}

int main() {
    int segundos_input, horas, minutos, segundos;

    printf("o tempo em segundos: ");
    scanf("%d", &segundos_input);

    converter_tempo(segundos_input, &horas, &minutos, &segundos);

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
