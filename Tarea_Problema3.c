#include <stdio.h>

#define TAM1 5
#define TAM2 5

int main() {
    int v1[TAM1], v2[TAM2];
    int v3[TAM1 + TAM2];
    int i;

    printf("Introduce los %d elementos del primer vector:\n", TAM1);
    for (i = 0; i < TAM1; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
        // Primero lo guardas en una variable y despues 
    }

    printf("\nIntroduce los %d elementos del segundo vector:\n", TAM2);
    for (i = 0; i < TAM2; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < TAM1; i++) {
        v3[i] = v1[i];
    }

    for (i = 0; i < TAM2; i++) {
        v3[TAM1 + i] = v2[i];
    }

    printf("\nVector resultante:\n");
    for (i = 0; i < TAM1 + TAM2; i++) {
        printf("%d ", v3[i]);
    }

    printf("\n");
    return 0;
}
