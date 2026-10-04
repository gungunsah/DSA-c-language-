// BINARY SEARCH

#include<stdio.h>
#include<conio.h>
int main(){
    int arr[10],n,i,num,found=0,beg,end,mid;
    printf("\n enter the total number of element for the array:");
    scanf("%d",&n);
    printf("\n enter the element for the array:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter the element for the searching:");
    scanf("%d",&num);
    beg=0,end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if(arr[mid]==num){
            printf("\n %d is present int thr array at position=%d",num,mid);
            found=1;
            break;
        }
        else if(arr[mid]>num)
         end=mid-1;
       else
         beg=mid+1;
    }
    if(beg>end && found==0)
    printf("\n %d element is not present in the array",num);
   getch();
    return 0;
}