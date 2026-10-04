#include<stdio.h>
void main(){
    int a[50],n,i,j,max,maxsum,sum;
    printf("\n enter the elements for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    maxsum=a[0];
    for(i=0; i<n; i++){
        sum=0;
        for(j=0; j<n; j++){
            if (sum+=a[j]);
            if (sum>maxsum)
            maxsum=sum;
        }
    }
    printf("\n maximum sum=%d",maxsum);
}