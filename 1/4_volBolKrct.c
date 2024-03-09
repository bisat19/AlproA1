/*Nama File : 4_volBolKrct*/
/*Deskripsi : menghitung dan menampilkan volume bola dan kerucut*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 20 Feb 2023*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    float r;
    const float phi = 3.14;
    float Vb;
    double Vk;
    /*Algoritma*/
    printf ("Masukan jari-jari: ");
    scanf("%f",&r);
    Vb = 1.33*phi*r*r*r;
    printf ("Maka Volume bola adalah %.2lf \n",Vb);
    Vk = 0.5*Vb;
    printf ("Maka Volume kerucut adalah %.lf \n",Vk);

    return 0;
}
/*perlu revisi*/