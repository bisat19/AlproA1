/*Nama File : NilMax2Tabel_dinamis*/
/*Deskripsi : mengeluarkan keluaran berupa nilai maximal kedua dari sebuah inputan tabel*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 15 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  /*Kamus*/
  int n;
  int* T = (int*)malloc(n * sizeof(int)); // alokasi memori menggunakan malloc
  int i;
  int max1, max2;
  /*Algoritma*/
// input tabel
  printf("Masukkan jumlah elemen tabel: ");
  scanf("%d", &n);
  printf("Masukkan elemen tabel:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &T[i]);
  }
// end input tabel
// inisiasi max
  max1 = 0;
  max2 = 0;

//kalkulasi max
  for(i=0; i<n; i++){
    if(T[i]>max1){
      max2 = max1;
      max1 = T[i]; 
    }
    if(T[i]>max2 && T[i]<max1){
      max2 = T[i];
    }
  }

  printf("Nilai maksimum ke-2 dari tabel adalah: %d\n", max2);

  free(T); // dealokasi memori yang telah digunakan
  return 0;
}
