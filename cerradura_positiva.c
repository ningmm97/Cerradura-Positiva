#include <stdio.h>
#include <string.h>

void generarCombinaciones(char conjunto[], int len, int inicio, int fin, char array[], int posicion, int r) {
    if (posicion == r) {
        for (int j = 0; j < r; j++) {
            printf("%c", array[j]);
        }
        printf("\n");
        return;
    }

    for (int i = inicio; i <= fin; i++) {
        array[posicion] = conjunto[i];
        generarCombinaciones(conjunto, len, inicio, fin, array, posicion + 1, r);
    }
}

int main() {
    char conjunto[] = {'a', 'b', 'c'};
    int len = sizeof(conjunto) / sizeof(conjunto[0]);
    int r;

    printf("Ingrese la longitud de las combinaciones: ");
    scanf("%d", &r);

    if (r <= 0) {
        printf("La longitud debe ser mayor que cero.\n");
        return 1;
    }

    char array[r];

    generarCombinaciones(conjunto, len, 0, len - 1, array, 0, r);

    return 0;
}
