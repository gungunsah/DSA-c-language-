#include<stdio.h>
void  main(){
    int a[50],i,n,max,count;
    printf("\n enter the total number of elements for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    max=0; 
    count=0;

    for(i=0; i<n; i++){
        if(a[i]==1){
        count++;
        if(count>max){
            max=count;
        }
    }
    else{
        count=0;
    }
}
    printf("\n maximum consecutive 1's=%d",max);
    
}