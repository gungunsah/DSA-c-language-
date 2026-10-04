//write a programme to input n number of element in single dimensional array and to find out the largest
//and smallest element of array?
#include<stdio.h>
void main(){
    int a[50],i,n,max,min;
    printf("\n enter the elememt for the array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
       max=min=a[0];
    printf("\n elements are:");
    for(i=0; i<n; i++)
    {
        printf(" %d \n",a[i]);
        if (max<a[i])
        max=a[i];
        if (min>a[i])
        min>a[i];
    }
    printf("\n max=%d,min=%d",max,min);
}