# include <stdio.h>
# include <math
Int main()
{
  float n1, n2, res:
  int op=0;    
  printf ("Bienvenido a mi cacluladora\n");
  printf ("escoge una opcion\n");
  printf ("1.- suma\n");
  printf ("2.- resta\n");
  printf ("3.- multiplicacion\n");
  printf ("4.- division\n");
  printf ("opcion: \n");
  scanf ("%d",&op);
  printf ("Ingresa dos cantidades separadas por el espacio\n");
  scanf ("%f %f", &n1 &n2);
  switch (op) {
    default:
      printf ("Opcion no valida\n");
      break;
    case 1:
      rest = n1 + n2;
      printf ("El resultado es %f\n", res);
      break;
    case 2:
      rest = n1 - n2;
      printf ("El resultado es %f\n", res);
      break;
    case 3:
      rest = n1 * n2;
      printf ("El resultado es %f\n", res);
      break;
    case 4:
      rest = n1/n2;
      printf ("El resultado es %f\n", res);
      break;
    }
  return 0;
  }
