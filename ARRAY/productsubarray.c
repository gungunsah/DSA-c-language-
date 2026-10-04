#include<stdio.h>
void main(){
    int a[50], i, j, n;
    int product, maxprod;
    int start, end;          // ✅ Position save karne ke liye

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }

    maxprod = a[0];
    start   = 0;
    end     = 0;

    // Har subarray ka product nikalo
    for(i = 0; i < n; i++){
        product = 1;
        for(j = i; j < n; j++){
            product = product * a[j];

            if(product > maxprod){
                maxprod = product;
                start   = i;       // ✅ Start position save karo
                end     = j;       // ✅ End position save karo
            }
        }
    }

    // Maximum product print karo
    printf("\nMaximum product = %d", maxprod);

    // Subarray print karo
    printf("\nSubarray: ");
    for(i = start; i <= end; i++)
        printf("%d ", a[i]);       // ✅ Subarray print karo

    printf("\nStart position = %d", start);
    printf("\nEnd position   = %d", end);
}