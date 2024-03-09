/*Nama File : JumPrima_function*/
/*Deskripsi : menampilkan jumlah deret prima sampai ke N untuk N>0 dengan sub-program fungsi*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 22 Maret 2023*/

#include <stdio.h>
int JumPrima (int N);

// program utama

int main(){
    /*Kamus*/
    int N, jumprime;
    /*Algoritma*/
    printf("Masukan bilangan integer positif:");
    scanf("%d",&N);
    if (N<0){
        printf("Tidak ada Bilangan Prima, sehingga jumlah Sn = 0");
    }else if(N == 0 || N == 1){
        printf("Tidak ada Bilangan Prima, sehingga jumlah Sn = 0");
    }else{
        jumprime = JumPrima(N);
        printf("Jumlah Sn = %d", jumprime);
    }
    return 0;
}

//implementasi sub-program fungsi

int JumPrima(int N) {
    /*Kamus Lokal*/
    int i, j, isPrime, total = 0;
    /*Algoritma Fungsi*/
    for (i = 2; i <= N; i++) {
        isPrime = 1;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0; // i bukanlah bilangan prima
                break;
            }
        }
        if (isPrime == 1) {
            total += i;
        }
    }
    
    return total;
}