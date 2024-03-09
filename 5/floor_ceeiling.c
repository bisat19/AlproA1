#include <stdio.h>
#include <math.h>
int main(){
    float V, k;
    int C;
    int floor, ceilling;

    printf("Masukan angka sembarang:");
    scanf("%d",&V);
    C = (trunc(V));
    k = (V-trunc(V));
    

    if(k<0.5){
        floor =  C-1;
        printf("%d",floor);
    }else{
        ceilling = C + 1;
        printf("%d",ceilling);
    }
    return 0;
}