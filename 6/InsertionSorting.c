// Nama         : Abisatya Hastarangga Pradana
// NIM          : 24060122120004
// Nama Program : InsertionSorting.c
// Definisi     : Mengurutkan array secara descending dengan proses Insertion Sort

#include <stdio.h>
#include <stdlib.h>

//=========SUB PROGRAM INSERTION SORT============//
void insertition_sort(int N, int T[]){
    //KAMUS LOKAL//
    int i; 
    int Temp; 
    int Pass;
    //ALGORITMA//
    for (Pass=1;Pass<N;Pass++){
        Temp = T[Pass];
        i = Pass-1;
        while(Temp >= T[i] && i>0 ){
            T[i+1] = T[i];
            i = i-1;
        }
        if (Temp < T[i]){
            T[i+1] = Temp;
        }else if (Temp >= T[i]){
            T[i+1] = T[i];
            T[i] = Temp;
        }
    }
}

//============MAIN PROGRAM===========//
int main(){
    //KAMUS
    int i, n;
    int T[10] = {19, 1, 28, 5, 6, 10, 11, 3, 7, 20};
    n=sizeof(T)/sizeof(T[0]);
    //ALGORITMA
    printf("===insert sort descending===");
    printf("\nArray sebelum disorting : ");
    for(i=0;i<n;i++){
        printf("%d ", T[i]);
    }
    printf("\n=========================");
    printf("\nArray setelah disorting : ");
    insertition_sort(n, T);
    for(i=0;i<n;i++){
        printf("%d ", T[i]);
    }
    printf("\n=========================");
     return 0;
}

