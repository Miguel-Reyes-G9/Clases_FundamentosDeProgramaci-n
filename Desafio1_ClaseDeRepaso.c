// Desafiio Numero 1
# include <stdio.h>
int v, v1, v2, n, cont, tam, d;
char c;

void main () {
  printf ("Numeros comprendidos entre el 1 y el 1000.\n");
  printf ("Que cantidad de grupos deaseas imprimir ? \n");
  scanf ("%d", &v);
  printf ("Cual es tu primer limite ? \n");
  scanf ("%d", &v1);
  printf ("Cual es tu segundo limite ? \n");
  scanf ("%d", &v2);
  tam=0;
  while (tam!=1 && v1<=v2) {
      for (cont=0; cont<v; cont++) {
        printf ("%d ,",v1);
        ++v1; 
      }
    printf ("\n");
    printf ("Desea imrpimri otro grupo? S/N \n");
    scanf (" %c", &c);
    if (c!='s'|| c!='s')
      tam=1;
      }
  }
