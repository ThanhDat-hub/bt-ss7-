#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    printf("cac phan tu trong mang:\n");
    for(int i = 0; i < length; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("do dai cua mang la: %d\n", length);

    return 0;
}

