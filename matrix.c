#include <printf.h>
#include <stdlib.h>

void func() {
    int matrix[5][7],i,j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            matrix[i][j] = rand()%100 - 50;
            printf("%d ", matrix[i][j]);
        }
        puts("\n");
    }
    puts("\n");
    int kol = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if (!(matrix[i][j]%3) && matrix[i][j]%5) {
                kol++;
            }
        }
    }
    printf("Кол-во элементов кратных 3, но не кратных 5: %d", kol);
}
