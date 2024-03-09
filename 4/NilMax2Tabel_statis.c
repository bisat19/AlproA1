/*Nama File : NilaiMax2Tabel_statis*/
/*Deskripsi : memeriksa apakah masukan merupakan bilangan prima atau bukan*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 15 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  /*Kamus*/
  int n = 10;
  int T[] = {7,4,5,7,6,5,3,5,1,4}; // alokasi memori menggunakan malloc
  int i;
  int max1, max2;
  /*Algoritma*/
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
  return 0;
}