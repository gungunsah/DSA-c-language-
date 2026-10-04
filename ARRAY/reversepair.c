#include<stdio.h>
void main(){
    int a[50], i, j, n;
    int count = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }

    // Har pair check karo
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(a[i] > 2 * a[j]){   // Reverse pair condition
                count++;
                printf("\nReverse pair: %d aur %d", a[i], a[j]);
            }
        }
    }

    printf("\n\nTotal reverse pairs = %d", count);
}