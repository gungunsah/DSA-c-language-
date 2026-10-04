// write a programme to add the elemt after the particular number in the array?
#include<stdio.h>
void main(){
    int a[50],i,j,n,A,after;
    printf("\n enter the element for the array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("\n elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n Enter new element & after which element to insert :");
    scanf("%d%d",&A,&after);
    for(i=0; i<n; i++)
    {
        if(a[i]==after)
        {
            for(j=n; j<i+1; j--)
            {
                 a[j]=a[j-1];
            }
            a[i+1]=A;
        }
    }
    n++;
    printf("\n after the addition elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}