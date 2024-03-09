/*Nama File : 5_BilPrimaN*/
/*Deskripsi : menampilkan deret bilangan prima hingga N*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 3 Maret 2023*/

#include <stdio.h>

int main() {
    /*Kamus*/
    int i, j, N, isPrime;
    /*Algoritma*/
    // Meminta user untuk memasukkan nilai N
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    // Menampilkan bilangan prima dari 2 hingga N
    printf("Bilangan prima dari 2 hingga %d:\n", N);
    for (i = 2; i <= N; i++) {
        isPrime = 1; // Menganggap i adalah bilangan prima
        // Menguji apakah i adalah bilangan prima atau tidak
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0; // i bukanlah bilangan prima
                break;
            }
        }
        // Jika i adalah bilangan prima, maka ditampilkan
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
