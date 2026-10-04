// write a programme to delete a particular elemts from the array
#include<stdio.h>
void main(){
    int a[50],i,j,n,d;
    printf("\n enter the element for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("\n elements are:");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n enter the element for deletion:");
    scanf("%d",&d);
    for(i=0; i<n; i++)
    {
        if(a[i]==d)
        {
            for(j=i; j<n; j++)
            a[j]=a[j+1];
        }
    }
    --n;
    printf("\n after the deletion elements are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d \t",a[i]);
    }
}