/*Nama File : 5_JumBarKolMat_dinamis*/
/*Deskripsi : menampilkan jumlah setiap baris dan kolom pada tabel T (matrik)*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 15 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*Kamus*/
    int **T; // deklarasi tabel T
    int n, m; // variabel untuk menyimpan ukuran tabel
    int *row_sum, *col_sum; // variabel untuk menyimpan hasil penjumlahan
    //alokasi memori untuk tabel matriks
    T = (int **) malloc(n * sizeof(int *));
    // alokasi memori untuk variabel row_sum dan col_sum
    row_sum = (int *) malloc(n * sizeof(int));
    col_sum = (int *) malloc(m * sizeof(int));

/*Algoritma*/
    // meminta input ukuran tabel
    printf("Masukkan ukuran tabel (baris kolom): ");
    scanf("%d %d", &n, &m);

    // alokasi memori untuk tabel T
    for (int i = 0; i < n; i++) {
        T[i] = (int *) malloc(m * sizeof(int));
    }

    // meminta input nilai-nilai elemen pada tabel T
    printf("Masukkan nilai-nilai elemen pada tabel T: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &T[i][j]);
        }
    }

    // inisialisasi variabel row_sum dan col_sum dengan nilai 0
    for (int i = 0; i < n; i++) {
        row_sum[i] = 0;
    }
    for (int j = 0; j < m; j++) {
        col_sum[j] = 0;
    }

    // menjumlahkan semua elemen pada baris dan kolom
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            row_sum[i] += T[i][j]; // menjumlahkan elemen pada baris
            col_sum[j] += T[i][j]; // menjumlahkan elemen pada kolom
        }
    }

    // menampilkan hasil penjumlahan pada setiap baris
    printf("Hasil penjumlahan pada setiap baris:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    // menampilkan hasil penjumlahan pada setiap kolom
    printf("Hasil penjumlahan pada setiap kolom:\n");
    for (int j = 0; j < m; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    // membebaskan memori yang telah dialokasikan
    for (int i = 0; i < n; i++) {
        free(T[i]);
    }

    //dealokasi
    free(T);
    free(row_sum);
    free(col_sum);

    return 0;
}
