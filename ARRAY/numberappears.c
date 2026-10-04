#include<stdio.h>
void main(){
    int a[50], i, j, n, count;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }
    // Har element ka count nikalo
    for(i = 0; i < n; i++){
        count = 0;

        for(j = 0; j < n; j++){
            if(a[i] == a[j]){
                count++;          // Kitni baar aaya
            }
        }

        if(count == 1){
            printf("\nEk baar aane wala number = %d", a[i]);
        }
        else if(count == 2){
            printf("\nDo baar aane wala number = %d", a[i]);
        }
    }
}