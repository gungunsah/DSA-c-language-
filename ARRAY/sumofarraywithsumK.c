#include <stdio.h>

int main() {
    int a[100], n, k;
    int i, j, count = 0, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        sum = 0;

        for(j = i; j < n; j++) {
            sum += a[j];

            if(sum == k) {
                count++;

                printf("Subarray %d: ", count);

                for(int p = i; p <= j; p++) {
                    printf("%d ", a[p]);
                }

                printf("\n");
            }
        }
    }

    printf("Total subarrays = %d\n", count);

    return 0;
}