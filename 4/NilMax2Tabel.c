/*Nama File : 1_NilMax2Tabel*/
/*Deskripsi : menampilkan deret bilangan sempurna hingga N*/
/*Nama      : Abisatya Hastarangga Pradana*/
/*NIM       : 24060122120004*/
/*Tanggal   : 13 Maret 2023*/

#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    /*Kamus*/
    int tab[MAX_SIZE]; 
    int i; 
    int N;
    int max = 0;
    int max2 = 0;
    /*Algoritma*/
    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &tab[i]);
        if(tab[i]>max){
            max2 = max;
            max = tab[i];
        } else{
            max2 = tab[i];
        }
    }
    /*for(i=0; i<N; i++)
    {
        if(tab[i] == max);
        tab[i] = tab[i+1];
         if(tab[i]>max2){
            max2 = tab[i];
        }
    }*/
    printf("%d",max2);
    return 0;
}