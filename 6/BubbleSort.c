// Nama : Faris Naufal Izzatur Rahman
// NIM  : 24060121130055
// Nama Program : BubbleSort.c
// Definisi     : Mengurutkan array dengan proses Bubble Sort

 #include <stdio.h>
 #include <stdlib.h>

 /*---------- SUB PROGRAM - TUKAR ----------*/
 void tukar(int *x, int *y){
    int simpan;
    simpan = *x;      /*Nilai index data awal lebih besar dari data index setelahnya, nilai data awal disimpan terlebih dahulu*/
    *x = *y;          /*Index setelahnya yang lebih kecil nilai datanya maju karena nilai data sebelumnya kosong*/
    *y = simpan;      /*Index yang disimpan tadi akan bertukar posisi dengan index setelahnya*/
 }

 /*---------- SUB PROGRAM - BUBBLE SORT ----------*/
 void bubbleSort(int arr[], int n){
     int i, j;                        /*i,j => Counter && simpan => Penyimpanan nilai data sementara*/
     for (i=0;i<n-1;i++){             /*Count untuk perulangan banyak proses sort*/
        for (j=0;j<n-i-1;j++){        /*Count untuk perulangan jumlah data yang akan diurutkan*/
            if (arr[j]>arr[j+1]){     /*Proses swapping saat nilai index lebih besar dari setelahnya*/
                tukar(&arr[j], &arr[j+1]);
            }
        }
     }
 }

 /*---------- MAIN PROGRAM ----------*/
 int main(){
     printf("----------BUBBLE SORT----------\n");
/*Deklarasi variabel dan nilai array*/
     int i, n=10;
     int arr[10] = {27, 5, 2002, 23, 53, 26, 623, 2, 7645, 1999};
/*Print array sebelum disorting*/
     printf("Array sebelum disorting : ");
     for (i=0;i<n;i++)
        printf("%d ",arr[i]);
/*Proses sort array dengan Bubble Sort*/
     bubbleSort(arr,n);
/*Print array setelah disorting*/
     printf("\nArray yang sudah disorting : ");
     for (i=0;i<n;i++)
        printf("%d ",arr[i]);
     printf("\n--------------------");
     return 0;
 }
