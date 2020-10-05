#include <stdio.h>


 int main() {
    int a[10], i, j, b,N=10;
    
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }

    for (i = 0; i < N; i++) {
        printf("%d", a[i]);
        printf("\n");
    }
}