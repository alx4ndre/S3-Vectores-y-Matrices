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

    // MOSTRAR NOTAS
    printf("\n=== CALIFICACIONES ===\n");
    for (i = 0; i < 5; i++) {
        printf("Estudiante %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }

    // RESULTADOS POR ESTUDIANTE
    printf("\n=== POR ESTUDIANTE ===\n");
    for (i = 0; i < 5; i++) {
        suma = 0;
        mayor = notas[i][0];
        menor = notas[i][0];

        for (j = 0; j < 3; j++) {
            suma += notas[i][j];

            if (notas[i][j] > mayor) {
                mayor = notas[i][j];
            }

            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }
        }

        promedio = suma / 3;

        printf("Estudiante %d -> Promedio: %.2f | Mayor: %.2f | Menor: %.2f\n",
               i + 1, promedio, mayor, menor);
    }

    // RESULTADOS POR ASIGNATURA
    printf("\n=== POR ASIGNATURA ===\n");
    for (j = 0; j < 3; j++) {
        suma = 0;
        mayor = notas[0][j];
        menor = notas[0][j];
        aprobados = 0;
        reprobados = 0;

        for (i = 0; i < 5; i++) {
            suma += notas[i][j];

            if (notas[i][j] > mayor) {
                mayor = notas[i][j];
            }

            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }

            if (notas[i][j] >= 6) {
                aprobados++;
            } else {
                reprobados++;
            }
        }

        promedio = suma / 5;

        printf("Asignatura %d -> Promedio: %.2f | Mayor: %.2f | Menor: %.2f | Aprobados: %d | Reprobados: %d\n",
               j + 1, promedio, mayor, menor, aprobados, reprobados);
    }
    return 0;
}