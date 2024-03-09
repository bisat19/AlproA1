// Nama : Faris Naufal Izzatur Rahman
// NIM  : 24060121130055
// Nama Program : InsertionSort.c
// Definisi     : Mengurutkan array dengan proses Insertion Sort

 #include <stdio.h>
 #include <stdlib.h>

   /*---------- SUB PROGRAM - TUKAR ----------*/
 void tukar(int *x, int *y){
    int simpan;
    simpan = *x;
    *x = *y;
    *y = simpan;
}

 /*---------- SUB PROGRAM - INSERTION SORT ----------*/
 void insertionSort(int arr1[], int n){
    int i,j;
    for(i=1;i<n;i++){
        j = i;
        while (j>0){       /*Proses pertukaran dua nilai index*/
            if(arr1[j]<arr1[j-1]){
                tukar(&arr1[j], &arr1[j-1]);
            }
            j--;
        }
    }
 }

 /*---------- MAIN PROGRAM ----------*/
 int main(){
     printf("----------INSERTION SORT----------\n");
/*Deklarasi variabel dan nilai array*/
    int i, n;
    int arr[10] = {27, 5, 2002, 23, 53, 26, 623, 2, 7645, 1999};
    n=sizeof(arr)/sizeof(arr[0]);
/*Print array sebelum disorting beserta nilai terbesar*/
    printf("Array sebelum disorting : ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
/*Print array setelah disorting*/
    printf("\nArray setelah disorting : ");
    insertionSort(arr, n);
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n--------------------");
    return 0;
 }
