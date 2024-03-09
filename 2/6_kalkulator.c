#include <stdio.h>

int main() {
    int iA, iB, hasil;
    char pilihan;

    printf("Masukkan bilangan bulat pertama: ");
    scanf("%d", &iA);

    printf("Masukkan bilangan bulat kedua: ");
    scanf("%d", &iB);

    printf("Masukkan pilihan menu: ");
    scanf(" %c", &pilihan);

    switch(pilihan) {
        case 'a':
            hasil = iA + iB;
            printf("Hasil: %d\n", hasil);
            break;
        case 'b':
            hasil = iA - iB;
            printf("Hasil: %d\n", hasil);
            break;
        case 'c':
            hasil = iA * iB;
            printf("Hasil: %d\n", hasil);
            break;
        case 'd':
            hasil =  (float) iA / iB;
            printf("Hasil: %f\n", hasil);
            break;
        case 'e':
            hasil = iA / iB;
            printf("Hasil: %d\n", hasil);
            break;
        case 'f':
            hasil = iA % iB;
            printf("Hasil: %d\n", hasil);
            break;
        default:
            printf("Bukan pilihan menu yang benar\n");
    }

    return 0;
}
