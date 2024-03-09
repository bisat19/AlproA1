/*Nama File : 3_gayaSentr*/
/*Deskripsi : menghitung dan menampilkan gaya sentripetal benda*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 20 Feb 2023*/


#include <stdio.h>
int main()
{
    /*Kamus*/
    float m;
    float v;
    float r;
    float F;
    /*Algoritma*/
    printf ("Masukan massa benda: ");
    scanf("%f",&m);
    printf ("Masukan kecepatan: ");
    scanf("%f",&v);
    printf ("Masukan jari-jari benda: ");
    scanf("%f",&r);
    F = m*((v*v)/r);
    printf("Maka gaya sentripetalnya adalah %.2lf \n",F);

    return 0;
}