#include <stdio.h>
int KPK (int a, int b);

// program utama

int main(){
    /*Kamus*/
    int a,b,j;
    /*Algoritma*/
    printf("Masukan bilangan integer positif:");
    scanf("%d",&a);
    printf("Masukan bilangan integer positif:");
    scanf("%d",&b);
    j = KPK(a,b);
    printf("%d",j);
    return 0;
}


int KPK(int a, int b) {
    /*Kamus Lokal*/
    int max, i, k;
    /*Algoritma Fungsi*/
    if(a>b){
        max = a;
    }
    else{
        max = b;
    }
    for (i = 1; i <= max; i++){
        if(a%i == 0 && b%i == 0){
            k = (a/i)*(b/i)*i;
            a = a/i;
            b = b/i;
        }
    }
    return k;
}