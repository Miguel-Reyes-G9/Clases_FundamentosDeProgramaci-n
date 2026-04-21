#include <stdio.h>

int main()
{
    int a, i;
    int arreglo[20];
    int ta = 19; 

    printf("Tu guardado unidimensional de numeros\n");
    printf("En caso de querer terminar, coloca 0\n");

    do {
        printf("Dame un numero entero: ");
        scanf("%d", &a);

        if (a != 0 && ta >= 0) {
            arreglo[ta] = a;
            ta--;
        }
    } while (a != 0 && ta >= 0);

    printf("Elementos del vector en orden inverso:\n");
    for (i = ta + 1; i < 20; i++) {
        printf("%d ", arreglo[i]);
    }
    return 0;
}
