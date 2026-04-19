#include <stdio.h>

int main() {

    float notas[5][3];
    int i, j;

    float suma, promedio;
    float mayor, menor;
    int aprobados, reprobados;

    // INGRESO DE NOTAS
    for (i = 0; i < 5; i++) {
        printf("\nEstudiante %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            do {
                printf("Ingrese la nota de la asignatura %d: ", j + 1);
                scanf("%f", &notas[i][j]);

                if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Error: la nota debe estar entre 0 y 10\n");
                }

            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
    }

    return 0;
}