#include <stdio.h>
void main() {
    int a[50], i, j, n, k;
    int xorVal, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
     {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    printf("\nSubarrays with XOR = %d :\n", k);

    for (i = 0; i < n; i++) {
        xorVal = 0;
        for (j = i; j < n; j++) {
            xorVal ^= a[j];

            if (xorVal == k) {
                count++;

                // Subarray print karo
                printf("Subarray %d: [", count);
                int m;
                for (m = i; m <= j; m++) {
                    if (m == j)
                        printf("%d", a[m]);     // last element
                    else
                        printf("%d, ", a[m]);   // baaki elements
                }
                printf("]  →  XOR = %d\n", xorVal);
            }
        }
    }

    printf("\nTotal Count = %d", count);
}