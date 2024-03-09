/*Nama File : 3_JumFrekNilTabel_dinamis*/
/*Deskripsi : menampilkan jumlah nilai elemen tabel T yang kmunculannya lebih dari 1 kali*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 15 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   /*Kamus*/ 
   int N ;
   int* T = (int*)malloc(N * sizeof(int)); // alokasi memori menggunakan malloc ;
   int i,j;
   int count, sum;
   
   //input tabel
   printf("Masukkan jumlah elemen tabel: ");
   scanf("%d", &N);
   printf("Masukkan elemen tabel:\n");
   for (int i = 0; i < N; i++) {
    scanf("%d", &T[i]);
    }
    sum = 0;
    // Cari elemen yang muncul lebih dari satu kali
    for(i = 0; i < N; i++) {
        count = 1;
        for(j = i+1; j < N; j++) {
            if(T[i] == T[j]) {
                count++;
                T[j] = 0; // Menghindari dihitung ulang
            }
        }
        if(count > 1) {
            sum = sum + (count*T[i]);
        }
    }
    printf("Jadi jumlah dari elemen yang berfrekuensi adalah %d",sum);
    free(T);
   return 0;  
}