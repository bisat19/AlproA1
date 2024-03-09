/*Nama File : 5_JumBarKolMat_statis*/
/*Deskripsi : menampilkan jumlah setiap baris dan kolom pada tabel T (matrik)*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 15 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int n = 3;
    int m = 3;
    int T[3][3] ={{1,3,5},{2,5,2},{4,2,4}};
    int i,j;
    int sumBaris,sumKolom;

    /*Algoritma*/
    // menjumlahkan baris
    for (i = 0; i < n; i++) {
        sumBaris = 0;
        for (j = 0; j < n; j++) {
            sumBaris += T[i][j];
        }
        // menampilkan hasil jumlah baris
        printf("Jumlah baris %d: %d\n", i+1, sumBaris);
    }

    // menjumlahkan kolom
    for (i = 0; i < m; i++) {
        sumKolom = 0;
        for (j = 0; j < m; j++) {
            sumKolom += T[j][i];
        }
        // menampilkan hasil jumlah kolom
        printf("Jumlah kolom %d: %d\n", i+1, sumKolom);
    }

    return 0;

}