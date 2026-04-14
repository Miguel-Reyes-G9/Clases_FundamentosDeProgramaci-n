#include <stdio.h>
#include <math.h>
float n1, n2, res;
int op;
char s;

int main() {
  do {
    printf ("Calculadora\n");
    printf ("1.- suma\n");
    printf ("2.- resta\n");
    printf ("3.- multiplicacion\n");
    printf ("4.- division\n");
    printf ("5.- raiz\n");
    printf ("6.- potencia\n");
    printf ("7.- salir\n");

    do {
      printf ("Opcion: ");
      scanf ("%d", &op);
    } while (op < 1 || op > 7);

    if (op >= 1 && op <= 6) {
      printf ("Ingresa n1: ");
      scanf ("%f", &n1);}

    if (op >= 1 && op <= 4 || op == 6) {
      printf ("Ingresa n2: ");
      scanf ("%f", &n2);}

    switch (op) {
      case 1:
        res = n1 + n2;
        break;
      case 2:
        res = n1 - n2;
        break;
      case 3:
        res = n1 * n2;
        break;
      case 4:
        while (n2 == 0) {
          printf ("Denominador no puede ser 0. Ingresa otro: ");
          scanf ("%f", &n2);
        }
        res = n1 / n2;
        break;
      case 5:
        while (n1 < 0) {
          printf ("No puede poner numeros negativos. Ingresa otro: ");
          scanf ("%f", &n1);
        }
        res = sqrt(n1);
        break;
      case 6:
        res = pow(n1, n2);
        break;
      case 7:
        return 0;
    }
    printf ("Resultado: %.2f\n", res);

    printf ("Desea continuar? (S/N): ");
    scanf (" %c", &s);

  } while (s == 'S' || s == 's');
  return 0;
}
