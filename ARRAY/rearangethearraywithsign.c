#include<stdio.h>
void main(){
    int a[50],pos[50],neg[50],i,n;
    int p=0,q=0;
    printf("\n enter the elements for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]>=0)
        pos[p++]=a[i];
        else
        neg[q++]=a[i];
    }
    int k=0;
    for(i=0; i<p && i<q; i++){
        a[k++]=pos[i];
        a[k++]=neg[i];

    }

        while(i<p) a[k++] = pos[i++];
        while(i<q) a[k++] = neg[i++];
    
        printf("\n rearranges array:");
        for(i=0; i<n; i++)
        printf("%d",a[i]);
    
}