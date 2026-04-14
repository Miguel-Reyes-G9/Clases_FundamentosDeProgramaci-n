# include <stdio.h>
# include <math.h>
Int main()
{
  do {
    float n1, n2, res:
    char s;
    int op=0;    
    printf ("Calculadora\n");
    printf ("escoge una opcion\n");
    printf ("1.- suma\n");
    printf ("2.- resta\n");
    printf ("3.- multiplicacion\n");
    printf ("4.- division\n");
    printf ("5.- raiz\n");
    printf ("6.- potencia(primero tu numero y luego tu exponente\n");
    printf ("7.- Salir del programa\n");

    do {
      printf ("opcion: \n");
      scanf ("%d",&op);
    } while (op < 1 || op > 7);
  } while (op > 0 && op < 7);
  if (op != 7){
    printf ("Ingresa dos cantidades separadas por el espacio\n");
    scanf ("%f %f", &n1 &n2);}
  switch (op) {
      default:
        printf ("Opcion no valida\n");
        break;
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
          printf ("El segundo numero, denominador, debe ser distnto a cero. Dame otro: \n");
          scanf ("%f", &n2);
        }
        res = n1/n2;
        break;
      case 5:
        while (n1 =< 0) {
          printf ("No puedes insertar un valor negativo. Dame otro: \n");
          scanf ("%f", &n1);
        }
        res = (sqrt (n1));
        break;
      case 6:
        res = pow (n1,n2);
        break;
      case 7:
        printf ("Desea continuar: Si/No\n")
        scanf ("%n", &s)
      break;
      } while (s = Si)
  return 0;
  }
