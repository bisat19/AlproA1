#include <stdio.h>

int main() {
    int T[] = {1, 3, 6}; // contoh array T
    int N = sizeof(T) / sizeof(T[0]); // panjang array T
    int sum = 0; // inisialisasi variabel sum

    // Looping untuk setiap elemen pada array T
    for (int i = 0; i < N; i++) {
        // Tambahkan nilai elemen ke variabel sum
        sum += T[i];

        // Looping untuk setiap elemen pada array T setelah elemen yang sedang diproses
        for (int j = i + 1; j < N; j++) {
            // Tambahkan nilai elemen ke variabel sum
            sum += T[j];
        }
    }

    // Cetak nilai variabel sum sebagai hasil penjumlahan sub array/tabel T
    printf("Penjumlahan sub array/tabel T: %d\n", sum);

    return 0;
}
