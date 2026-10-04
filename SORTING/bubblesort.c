#include<stdio.h>
void main(){
    int arr[10],n,i,j,t;
    printf("\n enter the total number of elements:");
    scanf("%d",&n);

    printf("\n enter the element:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("\n after the sorting");
    for(i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}