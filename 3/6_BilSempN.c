/*Nama File : 6_BilSempN*/
/*Deskripsi : menampilkan deret bilangan sempurna hingga N*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 3 Maret 2023*/

#include <stdio.h>

int main() {
    /*Kamus*/
    int i, j, N, sum;
    /*Algoritma*/
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Bilangan sempurna dari 1 hingga %d:\n", N);
    for (i = 1; i <= N; i++) {
        sum = 0; 
        for (j = 1; j <= i/2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
