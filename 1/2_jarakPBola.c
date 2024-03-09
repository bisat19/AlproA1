/*Nama File : 2_jarakPBola*/
/*Deskripsi : menghitung dan menampilkan jarak pada benda yang gerak parabola*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 20 Feb 2023*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    float v0;
    float t;
    const int g = 10;
    float y;
    /*Algoritma*/
    printf ("Masukan kecepatan awal: ");
    scanf("%f",&v0);
    printf ("Masukan waktu: ");
    scanf("%f",&t);
    y = v0*t-0.5*(g*t*t);
    printf("Maka jaraknya adalah %.2lf \n",y);

    return 0;
}