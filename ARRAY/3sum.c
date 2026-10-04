#include <stdio.h>
void main() {
    int a[50], i, j, k, n;
    printf("Enter number of elements for array a : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
     {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    printf("\nTriplets whose sum is 0:\n");

    int found = 0;
    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                if (a[i] + a[j] + a[k] == 0) {
                    printf("[%d, %d, %d]\n", a[i], a[j], a[k]);
                    found = 1;
                }
            }
        }
    }

    if (!found)
        printf("not any triplet found");
}