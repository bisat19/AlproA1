/*Nama File : 5_apakahsegitiga*/
/*Deskripsi : mengidentifikasikan masukan dan menampilkan jenis segitiganya*/
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
    /*Algoritma*/
    printf("Masukan sisi 1: ");
    scanf("%d",&a);
    printf("Masukan sisi 2: ");
    scanf("%d",&b);
    printf("Masukan sisi 3: ");
    scanf("%d",&c);
    if(a>0 && b>0 && c>0){
        if(a+b>c && b+c>a && c+a>b){
            if(a==b && a==c && b==c){
                printf("Segitiga sama sisi");
            }
            else if(a==b || b==c || c==a){
                printf("Segitiga sama kaki");
            }
            else{
                printf("Segitiga sembarang");
            }
        }
        else{
            printf("Terdapat nilai yang bukan nilai segitiga");
        }
    }
    else{
        printf("Terdapat nilai yang bukan nilai segitiga");
    }
    return 0;
}