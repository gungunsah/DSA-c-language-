#include <stdio.h>
void main() {
    int a[50], i, j, n, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    printf("\nMajority elements (> N/3 = %d times):\n", n/3);

    int found = 0;
    for (i = 0; i < n; i++) {
        count = 0;

        // Duplicate check — pehle dekha hua toh skip
        int dup = 0;
        for (j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                dup = 1;
                break;
            }
        }
        if (dup) continue;

        // Count karo
        for (j = 0; j < n; j++) {
            if (a[j] == a[i])
                count++;
        }

        if (count > n / 3) {
            printf("%d ", a[i]);
            found = 1;
        }
    }

    if (!found)
        printf("Koi majority element nahi mila");
}