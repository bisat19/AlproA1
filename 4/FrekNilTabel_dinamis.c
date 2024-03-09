#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int n;
    int* T = (int*)malloc(n * sizeof(int)); // alokasi memori menggunakan malloc
    int i,j;
    int count; //untuk menghitung banyak frekuensi elemen

    /*Algoritma*/
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &n);
    //input tabel
    printf("Masukkan elemen tabel:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }
    //end input
    //proses
    for (i= 0; i<n; i++){
        count = 1; //inisiasi count
        for (j = 1; j<n; j++){
            if(T[i] != 0  && T[i] == T[j]){
                count = count + 1;
                T[j] = 0;
            }
        }
        if (count > 1){
            printf("%d",T[i]);
        }
    }
    free(T); // dealokasi memori yang telah digunakan
    return 0;

}
