#include <stdio.h>
int main() {
    int a[50][50];
    int row[50] = {0};
    int col[50] = {0};
    int m, n, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    /* Mark rows and columns containing 0 */
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    /* Set marked rows and columns to 0 */
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(row[i] || col[j]) {
                a[i][j] = 0;
            }
        }
    }

    printf("\nMatrix after setting zeroes:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}