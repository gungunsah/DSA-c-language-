#include <stdio.h>
void main() {
    int a[50], i, j, k, l, n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("\nQuadruplets whose sum is %d :\n", target);

    int found = 0;
    for (i = 0; i < n - 3; i++) {
        for (j = i + 1; j < n - 2; j++) {
            for (k = j + 1; k < n - 1; k++) {
                for (l = k + 1; l < n; l++) {
                    if (a[i] + a[j] + a[k] + a[l] == target) {
                        printf("[%d, %d, %d, %d]\n",
                                a[i], a[j], a[k], a[l]);
                        found = 1;
                    }
                }
            }
        }
    }

    if (!found)
        printf("not any quadruplet found");
}