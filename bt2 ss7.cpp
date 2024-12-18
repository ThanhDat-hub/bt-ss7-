#include <stdio.h>

int main() {
    int array[5];
    printf("Nhap 5 phan tu cho mang:\n");
    for(int i = 0; i < 5; i++) {
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &array[i]); 
    }
    printf("\ncac pahn tu trong mang la:\n");
    for(int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}

