#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n,d;
    int*T = (int*)malloc(n * sizeof(int));
    int*U = (int*)malloc(d * sizeof(int));


    printf("Masukkan ukuran array 1:");
    scanf("%d",n);

    printf("Masukkan ukuran array 2:");
    scanf("%d",d);

    printf("Masukkan data T: \n");
    for(i=1;i<=n;i++){
        scanf("%d",T[i]);
    }

    printf("Masukkan data U: \n");
    for(i=1;i<=d;i++){
        scanf("%d",T[i]);
    }

    if (n != d){
        printf("Tidak Simetris");
    }else{
        for(i=0;i<10;i++){
            if(T[i]!=U[i]){
                printf("Tidak Simetris");
            }
            else{
                printf("Simetris");
            }
        }
    }

    return 0;

}