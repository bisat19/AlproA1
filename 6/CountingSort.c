#include <stdio.h>

void counting_sort(int arr1[],int n,int max){
    int count[100]={0},i,j;
    for(i=0;i<n;++i)
        count[arr1[i]]=count[arr1[i]]+1;
        printf("a");
    for(i=0;i<=max;++i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i);
}

int main(){
    int i, n, *arr, max=0;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Array sebelum disorting: ");
    for(i = 0; i < n; i++){
        if(arr[i]>max)
            max=arr[i];
        printf("%d  ", arr[i]);
    }
    //printf("\nNilai Max: %d\n", max);

    printf("\nArray setelah disorting: ");
    counting_sort(arr,n,max);
    return 0;
}
