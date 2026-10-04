#include<stdio.h>
void main(){
    int a[50],n,i,j,k;
    printf("\n enter the element for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
   for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
        if (a[i]==a[j]){
            for(k=j; k<n-1; k++){
                a[k]=a[k+1];
            }
            n--;
            j--;
        }
    }
}
    printf("\n duplicate removed elements:");
    for(i=0; i<n; i++)
    printf("%d",a[i]);
   
}