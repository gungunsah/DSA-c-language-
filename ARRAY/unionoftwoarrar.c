#include<stdio.h>
void main(){
    int a[50], b[50], c[100];
    int n, m, i, j, k, found;

    // Array A input
    printf("\nEnter the number of elements in array A: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }

    // Array B input
    printf("\nEnter the number of elements in array B: ");
    scanf("%d", &m);
    for(i = 0; i < m; i++){
        printf("\nEnter element: ");
        scanf("%d", &b[i]);
    }

    // Pehle A ke saare elements C mein daalo
    k = 0;
    for(i = 0; i < n; i++){
        c[k] = a[i];
        k++;
    }

    // B ke elements daalo — jo A mein nahi hain sirf woh
    for(i = 0; i < m; i++){
        found = 0;
        for(j = 0; j < n; j++){
            if(b[i] == a[j]){
                found = 1;  // Pehle se hai A mein
                break;
            }
        }
        if(found == 0){
            c[k] = b[i];  // Naya element add karo
            k++;
        }
    }

    // Union print karo
    printf("\nUnion of A and B: ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);
}