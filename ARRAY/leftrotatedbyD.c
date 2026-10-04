#include<stdio.h>
void main(){
    int a[50],n,i,temp[50],d;
    printf("\n enter the element for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("\nKitne position rotate karna hai: ");
    scanf("%d", &d); 

    for(i=0; i<d; i++)
    {
        temp[i]=a[i];
    }
    for(i=d; i<n; i++)
    {
        a[i-d]=a[i];
    }
    for(i=n-d; i<n; i++)
    {
        a[i]=temp[i-(n-d)];
    }
    printf("\n after the rotation by %d:",d);
    for(i=0; i<n; i++)
    printf("%d ",a[i]);
}