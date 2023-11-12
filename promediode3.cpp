#include <stdio.h>






int main() {
    int cal1, cal2, cal3, promedio;

    printf("Cual es tu calificacion 1: ");
    scanf("%d", &cal1);
    printf("Cual es tu calificacion 2: ");
    scanf("%d", &cal2);
    printf("Cual es tu calificacion 3: ");
    scanf("%d", &cal3);

    promedio = (cal1 + cal2 + cal3) / 3;

    if (promedio > 95) {
        printf("Tu calificacion es 100\n");
    } else if (promedio >= 60) {
        printf("Tu calificacion es %d\n", promedio);
    } else {
        printf("Reprobado\n");
    }

    return 0;
}
