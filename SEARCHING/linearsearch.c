//LINEAR SEARCH

#include<stdio.h>
#include<conio.h>
int main(){
    int arr[10],n,i,num,found=0,POS=-1;
    clrscr();
    printf("\n enter the total number of elemnet for the array:");
    scanf("%d",&n);
    printf("\n enter the elements for the array:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter the element for the searching:");
    scanf("%d",&num);
    for(i=0; i<n; i++){
        if(arr[i]==num){
            found=1;
            POS=i;
            printf("\n %d is found in the array at position=%d",num,i);
            break;
        }
    }
    if(found==0){
        printf("\n %d is not exit in the array",num);
        getch();
        return 0;
    }
}
