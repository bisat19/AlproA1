/*Nama File : 1_JumDeret*/
/*Deskripsi : menjumlahkan bilangan dan menampilkannya*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 3 Maret 2023*/

#include <stdio.h>

int main() {
    /*Kamus*/
    int N, total = 0;
    /*Algoritma*/
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        total += i;
    }

    printf("Jumlah total dari deret bilangan 1 hingga %d adalah %d", N, total);

    return 0;
}

