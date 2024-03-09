#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,i,j,k,l;
    int jum=0;

    printf("Masukkan ukuran array:");
    scanf("%d",n);

   int*T = (int*)malloc(n * sizeof(int));

    printf("Masukkan data T: \n");
    for(i=1;i<=n;i++){
        scanf("%d",T[i]);
    }

    for (i=0; i<n; i++){
        k = T[i];
        for (j=0; j<1; j++){
            l = T[j];
            if (k==1){
                jum = jum +T[j];
                printf("%d",T[j]);
                printf("\n");
            }
        }
    }

    printf("jumlahnya %d", jum);

    free (T);

}