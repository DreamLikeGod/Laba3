#include <printf.h>
#include <stdlib.h>

void func() {
    int arr[35],i;
    for (i = 0; i < 35; i++) {
        arr[i] = rand()%100 - 50;
        printf("%d ", arr[i]);
    }
    puts("\n");
    int kol = 0;
    for (i = 0; i < 35; i++) {
        if (!(arr[i]%3) && arr[i]%5) {
            kol++;
        }
    }
    printf("Кол-во элементов кратных 3, но не кратных 5: %d", kol);
}
