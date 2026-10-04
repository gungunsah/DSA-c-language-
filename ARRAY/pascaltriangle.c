#include <stdio.h>
void main() {
    int a[20][20], i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Values fill karo
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {

            // Pehla aur aakhri element hamesha 1
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                // Upar wale do ka sum
                a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    // Print karo
    for (i = 0; i < n; i++) {
        // Spaces for triangle shape
        for (j = 0; j < n - i; j++)
            printf("  ");

        for (j = 0; j <= i; j++)
            printf("%4d", a[i][j]);

        printf("\n");
    }
}