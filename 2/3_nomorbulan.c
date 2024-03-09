/*Nama File : 3_nomorbulan*/
/*Deskripsi : mengidentifikasikan masukan dan menampilkan keterangan berupa bulan*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 27 Feb 2023*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    int b;
    /*Algoritma*/
    printf("Masukan nomor:");
    scanf("%d",&b);
    if (1<=b && 12>=b){
        if (b==1){printf("Januari");}
        else if (b==2){printf("Febuari");}
        else if (b==3){printf("Maret");}
        else if (b==4){printf("April");}
        else if (b==5){printf("Mei");}
        else if (b==6){printf("Juni");}
        else if (b==7){printf("Juli");}
        else if (b==8){printf("Agustus");}
        else if (b==9){printf("September");}
        else if (b==10){printf("Oktober");}
        else if (b==11){printf("November");}
        else if (b==12){printf("Desember");}}
    else {
        printf("Masukan nomor bulan tidak tepat");}
    return 0;
}