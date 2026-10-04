#include<stdio.h>
void main(){
    int a[50], i, n, num, found;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }

    // Kaunsa number dhoondhna hai
    printf("\n which number do you wants to find: ");
    scanf("%d", &num);   

    found = 0;

    for(i = 0; i < n; i++){
        if(a[i] == num){        
            printf("\n found ! %d index %d par hai", num, i);
            found = 1;
        }
    }

    if(found == 0){
        printf("\n%d not found in the array", num);
    }

    printf("\nArray elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}