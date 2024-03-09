#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Masukkan jumlah elemen tabel: ");
  scanf("%d", &n);

  int* T = (int*)malloc(n * sizeof(int)); // alokasi memori menggunakan malloc

  printf("Masukkan elemen tabel:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &T[i]);
  }
  // membuat tabel frekuensi kemunculan setiap elemen
  int* freq = (int*)calloc(n, sizeof(int)); // alokasi memori menggunakan calloc

  for (int i = 0; i < n; i++) {
    freq[T[i] - 1]++;
  }

  // mencetak nilai elemen tabel yang frekuensi kemunculannya lebih dari satu kali
  printf("Elemen yang muncul lebih dari satu kali: ");
  for (int i = 0; i < n; i++) {
    if (freq[T[i] - 1] > 1) {
      printf("%d ", T[i]);
      freq[T[i] - 1] = 0; // menandai elemen yang sudah dicetak agar tidak dicetak lagi
    }
  }
  printf("\n");

  free(T); // dealokasi memori yang telah digunakan
  free(freq); // dealokasi memori yang telah digunakan
  return 0;
}