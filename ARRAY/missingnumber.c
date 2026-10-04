#include<stdio.h>
void main(){
    int a[50],i,sum,n,total,max;
    printf("\n enter the element for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=1; i<n; i++){
        if (a[i]>max)
        max=a[i];
    }

    total = max*(max+1)/2 ;

    sum=0;
    for(i=0; i<n; i++)
    sum = sum+a[i];

    printf("\n missing number=%d",total-sum);
}