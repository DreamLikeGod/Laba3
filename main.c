#include <stdio.h>
#include "load.h"

int main(void) {
    int a = 0, b = 1;
    printf("Файл работает с ОС Linux!");
    while (b) {
        printf("С чем вы хотите поработать?\n");
        printf("---------------------------\n");
        printf("1 - Array\n");
        printf("2 - matrix\n");
        printf("3 - Quit\n");
        printf("---------------------------\n");
        scanf("%d", &a);
        if (a == 1)
            LoadRun("libarray.so");
        if (a == 2)
            LoadRun("libmatrix.so");
        if (a == 3)
            b = 0;
        printf("\n");
    }
    return 0;
}
