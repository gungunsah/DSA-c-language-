// write a programme to input in two different array and merge them into another array
#include<stdio.h>
void main(){
    int a[50],b[50],c[100],i,j,n,m;
    printf("\n enter the element for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("\n enter the elements for array b:");
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&b[i]);
    }
    printf("\n first array:");
    j=0;
    for(i=0; i<n; i++)
    {
        printf("%d \t",a[i]);
        c[j++]=a[i];
    }
    printf("\n second array:");
    for(i=0; i<m; i++)
    {
        printf("%d \t",b[i]);
        c[j++]=b[i];
    }
    printf("\n 3rd array:");
    for(i=0; i<j; i++)
    {
        printf("%d \t",c[i]);
    }
}