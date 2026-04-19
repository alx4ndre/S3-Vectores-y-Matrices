#include <stdio.h>

int main() {

    float notas[5][3];
    int i, j;

    float suma, promedio;
    float mayor, menor;
    int aprobados, reprobados;

    for (i = 0; i < 5; i++) {
        printf("\nEstudiante %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            printf("Ingrese la nota de la asignatura %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    return 0;
}