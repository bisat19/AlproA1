#include <stdio.h>
#include <stdlib.h>

int main() {
  /*Kamus*/
  int n = 10;
  int m = 10;
  int U[] = {7,4,5,7,6,5,3,5,1,4};
  int T[] = {7,4,5,7,6,5,3,5,1,4};
  int i;
  int count;

  /*Algoritma*/
  if (n == m){
    count = 0;
    for (i=0;i<n;i++){
        if(U[i] == T[i]){
            count++;
        }
    }
    if (count == n){
        printf("Tabel Simetri");
    }
    else{
        printf("Tabel Tidak Simetri");
    }
  }else{
    printf("Tabel Tidak Simetri");
  }

 return 0; 
}