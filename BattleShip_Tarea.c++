#include <stdio.h>

#define TAM 8

void inicializarTablero(char tablero[TAM][TAM]) {
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tablero[i][j] = 'O';
        }
    }
}

void mostrarTablero(char tablero[TAM][TAM]) {
    printf("\n   ");
    for(int i = 0; i < TAM; i++) printf("%d ", i);
    printf("\n");

    for(int i = 0; i < TAM; i++) {
        printf("%d  ", i);
        for(int j = 0; j < TAM; j++) {
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
}

int contarBarcos(int barcos[TAM][TAM]) {
    int contador = 0;
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            if(barcos[i][j] == 1) contador++;
        }
    }
    return contador;
}

int main() {
    char tablero[TAM][TAM];
    int barcos[TAM][TAM] = {0};
    int col;

    inicializarTablero(tablero);

    printf("=====================================\n");
    printf("         JUEGO DE BATALLA NAVAL\n");
    printf("=====================================\n");
    printf("Se colocara un barco por cada fila.\n");
    printf("Cada barco ocupa 2 posiciones consecutivas.\n");

    // COLOCACIÓN
    for(int fila = 0; fila < TAM; fila++) {
        printf("\nFila %d\n", fila);
        printf("Ingrese columna inicial (0-6): ");
        scanf("%d", &col);

        if(col >= 0 && col < TAM - 1) {
            barcos[fila][col] = 1;
            barcos[fila][col+1] = 1;
            printf("Barco colocado en [%d,%d] y [%d,%d]\n", fila, col, fila, col+1);
        } else {
            printf("Columna invalida. Intente nuevamente.\n");
            fila--;
        }
    }

    printf("\n=====================================\n");
    printf("           INICIO DEL JUEGO\n");
    printf("=====================================\n");

    // MODO DE JUEGO POR FILA Y COLUMNA
    while(contarBarcos(barcos) > 0) {

        for(int fila = 0; fila < TAM; fila++) {
            mostrarTablero(tablero);

            printf("\nFila %d\n", fila);
            printf("Ingrese columna a atacar (0-7): ");
            scanf("%d", &col);

            if(col >= 0 && col < TAM) {

                if(barcos[fila][col] == 1) {
                    printf("Impacto en [%d,%d]\n", fila, col);
                    tablero[fila][col] = 'x';
                    barcos[fila][col] = 0;
                } else {
                    printf("Sin impacto en [%d,%d]\n", fila, col);
                    if(tablero[fila][col] != 'x')
                        tablero[fila][col] = 'O';
                }

            } else {
                printf("Columna fuera de rango.\n");
                fila--; // repetir esa fila
            }

            if(contarBarcos(barcos) == 0)
                break;
        }
    }

    printf("\n=====================================\n");
    printf("Todos los barcos han sido destruidos.\n");
    printf("Fin del juego.\n");
    printf("=====================================\n");

    mostrarTablero(tablero);

    return 0;
}
