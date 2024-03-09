/*Nama File : 5_luasKellayang*/
/*Deskripsi : menghitung dan menampilkan luas dan keliling layang-layang*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 20 Feb 2023*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    int s1;
    int s2;
    int d1;
    int d2;
    int Luas;
    int Keliling;
    /*Algoritma*/
    printf ("Masukan sisi pertama: ");
    scanf("%d",&s1);
    printf ("Masukan sisi kedua: ");
    scanf("%d",&s1);
    printf ("Masukan diagonal pertama: ");
    scanf("%d",&d1);
    printf ("Masukan diagonal kedua: ");
    scanf("%d",&d2);
    Luas = 0.5*d1*d2;
    printf("Maka luasnya adalah %d \n",Luas);
    Keliling = 2*(s1+s2);
    printf("Maka kelilingnya adalah %d \n",Keliling);

    return 0;
}