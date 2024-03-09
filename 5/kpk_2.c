#include <stdio.h>

int cari_hari_bertemu(int iX, int iY) {
    int n = 1;
    while (n % iX != 0 || n % iY != 0) {
        n++;
    }
    return n;
}

int main() {
    int iX, iY;
    printf("Masukkan nilai iX: ");
    scanf("%d", &iX);
    printf("Masukkan nilai iY: ");
    scanf("%d", &iY);

    int hari_bertemu = cari_hari_bertemu(iX, iY);

    printf("Pak Kentos dan Pak Kabul akan bertemu pada hari ke-%d\n", hari_bertemu);

    return 0;
}