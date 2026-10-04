
#include<stdio.h>
void main(){
    int a[50],b[50],c[100],i,j,n,m,t;
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
    for(i=0; i<m-1; i++)
    {
        for(j=i+1; j<m; j++)
        {
            if (b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    i=0;
    j=0;
    t=0;
    while(i<n && j<m)
    {
        if (a[i]>b[j])
        {
            c[t++]=b[j++];
        }
        else{
            c[t++]=a[i++];
        }
    }
    while (i<n)
    {
        c[t++]=a[i++];
    }
    while(j<m)
    {
        c[t++]=b[j++];
    }
    printf("\n 1st array \n:");
    for(i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
    printf("\n 2nd array\n:");
    for(i=0; i<m; i++){
        printf("%d \t",b[i]);
    }
    printf("\n 3rd array \n:");
    for(i=0; i<t; i++){
        printf("%d \t",c[i]);
    }
}