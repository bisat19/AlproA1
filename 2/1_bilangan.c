/*Nama File : 1_bilangan*/
/*Deskripsi : mengidentifikasikan masukan dan menampilkan keterangan bilangan*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 27 Feb 2023*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    int i;
    /*Algoritma*/
    printf("Masukan bilangan bebas: ");
    if (scanf("%d",&i) != 1){
        printf("Bukan bilangan");
    }else{
        if (i<0){
            printf("Bilangan negatif");
        }else if (i>0){
            printf("Bilangan positif");
        }else{
            printf("Nol");}
    }
    return 0;
}