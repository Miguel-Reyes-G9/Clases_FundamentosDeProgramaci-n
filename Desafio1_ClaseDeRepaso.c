// Desafiio Numero 1
# include <stdio.h>
int v, v1, n, cont, tam;
char c;

void main () {
  printf ("Numeros comprendidos entre el 1 y el 1000.\n");
  printf ("Grupo predefinido es de 20 \n");
  v=20, v1=1, tam=0;
  while (tam!=1 && v1<=1000) {
      for (cont=v1; cont<=v; cont++) {
        printf ("%d ,",v1);
        ++v1; }
    v1=v+1;
    v=(v+20);
    printf ("\n");
    printf ("Desea imrpimri otros diez valores? S/N \n");
    scanf (" %c",c);
    if (c=='s'&& c=='s')
      tam=1;
  }
}
