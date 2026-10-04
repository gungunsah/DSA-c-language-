#include<stdio.h>
void main(){
    int arr[20],n,i,j,t;
    printf("\n enter the total number of element for the array:");
    scanf("%d",&n);
    printf("\n enter the element for the array:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=1; i<n; i++){
        t=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>=t){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
    printf("\n after the sorting");
    for(i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}