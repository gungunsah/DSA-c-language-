#include <stdio.h>
int main() {
    int a[50][50], n;
    int i, j, temp;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    /* Transpose */
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    /* Reverse each row */
    for(i = 0; i < n; i++) {
        for(j = 0; j < n / 2; j++) {
            temp = a[i][j];
            a[i][j] = a[i][n - 1 - j];
            a[i][n - 1 - j] = temp;
        }
    }

    printf("\nRotated Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}