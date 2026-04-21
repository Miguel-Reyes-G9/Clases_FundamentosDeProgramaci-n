#include <stdio.h>

int main()
{
    int a, men, may;
    float med = 0;

    printf("Programa diez numeros\n");
    printf("Dame un numero\n");
    scanf("%d", &a);
    men = a;
    may = a;
    med += a;

    for (int i = 1; i < 10; i++) {
        printf("Dame un numero\n");
        scanf("%d", &a);
        med += a;
        if (a > may) {
            may = a;
        } 
        if (a < men) {
            men = a;
        }
    }

    printf("Tu sumatoria es: %.0f\n", med);
    med = med / 10;
    printf("Tu media es: %f\n", med);
    printf("Tu numero mayor es: %d\n", may);
    printf("Tu numero menor es: %d\n", men);
    return 0;
}
