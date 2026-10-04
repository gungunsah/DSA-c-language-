#include<stdio.h>
void main(){
    int a[50], n, i, j, k;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }

    // Zero remove karo
    for(i = 0; i < n; i++){
        if(a[i] == 0){
            // Sab ko ek jagah aage khiskaao
            for(k = i; k < n-1; k++){
                a[k] = a[k+1];
            }
            n--;   // Size kam karo
            i--;   // Index adjust karo
        }
    }

    // Print karo
    printf("\nZero remove karne ke baad: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}