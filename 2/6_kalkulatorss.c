/*Nama File : 6_kalkulatorss*/
/*Deskripsi : mengidentifikasikan masukan dan menampilkan hasil perhitungan berdasar 
              masukan*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 27 Feb 2023*/

#include <stdio.h>
int main()
{
    /*Kamus*/
    int iA;
    int iB;
    char o;
    float h;
    /*Algoritma*/
    printf("Masukan bilangan A: ");
    scanf("%d",&iA);
    printf("Masukan bilangan B: ");
    scanf("%d",&iB);
    printf("Masukan operator: ");
    scanf(" %c",&o);
    if(o == 'a'){
        printf("Hasilnya adalah %d\n",iA+iB);
    } else if(o == 'b'){
        printf("Hasilnya adalah %d\n",iA-iB);
    } else if(o == 'c'){
        printf("Hasilnya adalah %d\n",iA*iB);
    } else if(o == 'd'){
        h = iA/iB;
        printf("Hasilnya adalah %f \n",h);
    } else if(o == 'e'){
        printf("Hasilnya adalah %d\n",iA/iB);
    } else if(o == 'f'){
        printf("Hasilnya adalah %d\n",iA%iB);
    } else{
        printf("Bukan pilihan menu");
    }
    return 0;
}