/*Nama File : 2_nomorhari*/
/*Deskripsi : mengidentifikasikan masukan dan menampilkan keterangan berupa hari*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 27 Feb 2023*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    int h;
    /*Algoritma*/
    printf("Masukan nomor:");
    scanf("%d",&h);
    if (1<=h && 7>=h){
        if (h==1){printf("Senin");}
        else if (h==2){printf("Selasa");}
        else if (h==3){printf("Rabu");}
        else if (h==4){printf("Kamis");}
        else if (h==5){printf("Jumat");}
        else if (h==6){printf("Sabtu");}
        else if (h==7){printf("Minggu");}}
    else {
        printf("Masukan nomor hari tidak tepat");}
    return 0;
}