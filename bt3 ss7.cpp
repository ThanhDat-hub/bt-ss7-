#include <stdio.h>

int main() {
    int arr[5] = {1, 7, 3, 9, 5};
    int sochan = 0;
    printf("cac phan tu chan trong mang\n");
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {  
            printf("%d\n", arr[i]);
            sochan = 1; 
        }
    }
    if(sochan==0) {
        printf("mang khong chua so chan\n");
    }

    return 0;
}

