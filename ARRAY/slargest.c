#include<stdio.h>
void main(){
    int a[50], n, i, max, slargest;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }
    
    // Max dhundo
    max = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > max)
            max = a[i];
    }
    
    // Second largest dhundo
    slargest = -1;
    for(i = 0; i < n; i++){
        if(a[i] > slargest && a[i] != max)
            slargest = a[i];
    }
    
    // Elements print karo
    printf("\nElements are: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    printf("\nMax = %d", max);
    printf("\nSecond Largest = %d", slargest);
}