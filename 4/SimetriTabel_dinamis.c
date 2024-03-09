#include <stdio.h>
#include <stdlib.h>

int main() {
  /*Kamus*/
  int n;
  int m;
  int* T = (int*)malloc(n * sizeof(int)); // alokasi memori menggunakan malloc
  int* U = (int*)malloc(m * sizeof(int)); // alokasi memori menggunakan malloc
  int i,j;
  int count;
  /*Algoritma*/
  // input tabel
  printf("Masukkan jumlah elemen tabel pertama: ");
  scanf("%d", &n);
  printf("Masukkan elemen tabel pertama:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &T[i]);
  }
  printf("Masukkan jumlah elemen tabel kedua: ");
  scanf("%d", &m);
  printf("Masukkan elemen tabel kedua:\n");
  for (int j = 0; j < m; j++) {
    scanf("%d", &U[i]);
  }
  // end input tabel
  if (n == m){
    count = 0;
    for (i=0;i<n;i++){
        if(U[i] == T[i]){
            count++;
        }
    }
    if (count == n){
        printf("Tabel Simetri");
    }
    else{
        printf("Tabel Tidak Simetri");
    }
  }else{
    printf("Tabel Tidak Simetri");
  }

  free(U);
  free(T);  
  return 0;
} 