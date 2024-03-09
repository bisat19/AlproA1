#include <stdio.h>

int main() {
    int N;

    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    printf("Deret bilangan dari 1 hingga %d adalah: ", N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    return 0;
}