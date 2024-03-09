/*Nama File : 1_FaktorBil*/
/*Deskripsi : mencari faktor bilangan dan menampilkannya*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 3 Maret 2023*/
#include <stdio.h>

int main() {
    /*Kamus*/
    int N;
    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    printf("Faktor-faktor dari bilangan %d adalah: ", N);

    for (int i = 1; i <= N/2; i++) {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }

    printf("%d", N);

    return 0;
}