#include<stdio.h>
void main(){
    int a[50],i,n,j,t;
    printf("\n enter the total number of elemmet for the array:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elemnts:");
        scanf("%d",&a[i]);
    }
    printf("\n elements are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("after the sorting \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}