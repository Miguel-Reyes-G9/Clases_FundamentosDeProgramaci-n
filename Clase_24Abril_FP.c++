#include <stdio.h>

int main()
{ 
    int v1[2][2];
    int j = 0;
    int i = 0;

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 2; i++) {
            v1[i][j] = 1;
        }
    }

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 2; i++) {
            printf(" %d,", v1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 2; i++) {
            if (i == j) {
                v1[i][j] = 0;
            } else {
                v1[i][j] = 1;
            }
        }
    }

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 2; i++) {
            printf(" %d,", v1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
