/*Nama File : 1_jarakGLBB*/
/*Deskripsi : menghitung dan menampilkan jarak pada benda yang GLBB*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 20 Feb 2023*/


#include <stdio.h>
int main()
{
    /*Kamus*/
    float v0;
    float t;
    float a;
    float s;
    /*Algoritma*/
    printf ("Masukan kecepatan awal: ");
    scanf("%f",&v0);
    printf ("Masukan waktu: ");
    scanf("%f",&t);
    printf ("Masukan percepatan: ");
    scanf("%f",&a);
    s = v0*t+0.5*(a*t*t);
    printf("Maka jaraknya adalah %.2lf \n",s);

    return 0;
}
