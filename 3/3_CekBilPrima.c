/*Nama File : 3_CekBilPrima*/
/*Deskripsi : memeriksa apakah masukan merupakan bilangan prima atau bukan*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 3 Maret 2023*/

#include <stdio.h>

int main() {
   /*Kamus*/
   int N, i, count = 0;
   /*Algoritma*/
   printf("Masukkan bilangan N: ");
   scanf("%d", &N);

   for (i = 1; i <= N; i++) {
      if (N % i == 0) {
         count++;
      }
   }

   if (count == 2)
      printf("%d Bilangan Prima.", N);
   else
      printf("%d Bukan Bilangan Prima.", N);

   return 0;
}





