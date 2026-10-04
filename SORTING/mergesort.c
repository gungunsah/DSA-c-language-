#include<stdio.h>
int main(){
    int arr1[20],arr2[20],arr3[40],i,j,k,max1,max2;
    printf("\n enter the total number of element for the first array:");
    scanf("%d",&max1);
    printf("\n take the element in sorted order:\n");
    for(i=0; i<max1; i++){
        printf("\n enter the element %d:",i+1);
        scanf("%d",&arr1[i]);
    }
     printf("\n enter the total number of element for the second array:");
    scanf("%d",&max2);
    printf("\n take the element in sorted order:\n");
    for(j=0; j<max2; j++){
        printf("\n enter the element %d:",j+1);
        scanf("%d",&arr2[j]);
    }

    i=0; j=0; k=0;
    while((i<max1) &&(j<max2)){
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    while(i<max1)
    arr3[k++]=arr1[i++];
    while(j<max2)
    arr3[k++]=arr2[j++];

    printf("\n first array after sorting:\n");
    for(i=0; i<max1; i++)
    printf("%d\t",arr1[i]);

     printf("\n second array after sorting:\n");
    for(i=0; i<max2; i++)
    printf("%d\t",arr2[i]);

     printf("\n merge array after sorting:\n");
    for(i=0; i<max1+max2; i++)
    printf("%d\t",arr3[i]);
    printf("\n");
}
