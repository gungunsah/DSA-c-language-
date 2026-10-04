#include<stdio.h>
void main(){
    int arr[20],n,i,j,smallest,t;
    printf("\n enter the total number of element for the array:");
    scanf("%d",&n);
    printf("\n enter the element for the array:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++){
        smallest=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        t=arr[smallest];
        arr[smallest]=arr[i];
        arr[i]=t;
    }
    printf("\n after the sorting");
    for(i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}