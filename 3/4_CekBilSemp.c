/*Nama File : 4_CekBilSemp*/
/*Deskripsi : memeriksa apakah masukan merupakan bilangan sempurna atau bukan*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 3 Maret 2023*/

#include <stdio.h>

int main() {
   /*Kamus*/
   int N, i, sum = 0;
   /*Algotima*/
   printf("Masukkan bilangan N: ");
   scanf("%d", &N);

   for (i = 1; i < N; i++) {
      if (N % i == 0) {
         sum += i;
      }
   }

   if (sum == N)
      printf("%d adalah bilangan sempurna.", N);
   else
      printf("%d bukan bilangan sempurna.", N);

   return 0;
}
