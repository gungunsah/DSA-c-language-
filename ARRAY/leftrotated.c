#include<stdio.h>
void main(){
    int a[50],n,i,temp;
    printf("\n enter the element for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=1; i<n; i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;

    printf("\n after the left rotation:");
    for(i=0; i<n; i++)
    printf("%d",a[i]);
}