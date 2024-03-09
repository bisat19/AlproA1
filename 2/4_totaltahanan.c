/*Nama File : 4_totaltahanan*/
/*Deskripsi : mengidentifikasikan masukan dan menampilkan jumlah seri masukan*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 27 Feb 2023*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    int a;
    int b;
    int c;
    int T;
    /*Algoritma*/
    printf("Masukan tahanan 1: ");
    scanf("%d",&a);
    printf("Masukan tahanan 2: ");
    scanf("%d",&b);
    printf("Masukan tahanan 3: ");
    scanf("%d",&c);
    if (a>0 && b>0 && c>0){
        T = a+b+c;
        printf("Total tahanan dirangkai seri: %d\n",T);}
    else {
        printf("Masukan tahanan tidak boleh negatif");}
    return 0;
}