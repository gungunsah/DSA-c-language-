#include<stdio.h>
void main(){
    int a[50], b[50], c[50];
    int n, m, i, j, k;

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

    // Intersection dhundo
    k = 0;
    i = 0;
    j = 0;

    while(i < n && j < m){
        if(a[i] == b[j]){         // Dono same hain
            c[k] = a[i];          // C mein daalo
            k++;
            i++;
            j++;
        }
        else if(a[i] < b[j]){    // A chhota hai
            i++;                  // A aage badhao
        }
        else{                     // B chhota hai
            j++;                  // B aage badhao
        }
    }

    // Intersection print karo
    printf("\nIntersection of A and B: ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    if(k == 0){
        printf("Koi common element nahi!");
    }
}