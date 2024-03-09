#include <stdio.h>
#include <stdlib.h>

int main() {
   /*Kamus*/ 
   int N = 10;
   int T[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};
   int i,j;
   int count;

   /*Algoritma*/
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
         printf("%d ", T[i]);
      }
   }

   return 0;
}
