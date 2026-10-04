#include<stdio.h>
void reverse(int a[],int start,int end){
int temp;
while(start<end){
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;
   }
}

void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void main(){
    int a[50],i,j,n;
    int pivot = -1;
    printf("\n enter the number of element for the array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
       printf("\n enter the elements:");
       scanf("%d",&a[i]);
    }
    printf("\n original array:");
    for(i=0; i<n; i++)
    printf("%d",a[i]);

    for(i=n-2; i>=0; i--){
        if(a[i]<a[i+1]){
            pivot=i;
            break;
        }
    }
    if (pivot==-1){
        printf("\n phale se largest hai!");
        reverse(a,0,n-1);
    }
    else{
        for(j=n-1; j>pivot; j--){
            if(a[j]>a[pivot]){
                swap(&a[j],&a[pivot]);
                break;
            }
        }
        reverse(a,pivot+1,n-1);
    }
    printf("\n next permutation:");
    for(i=0; i<n; i++)
    printf("%d",a[i]);
}