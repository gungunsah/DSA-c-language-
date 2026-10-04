#include <stdio.h>
int main() {
    int a[50][50];
    int m, n, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    printf("Spiral Order: ");

    while(top <= bottom && left <= right) {

        /* Left to Right */
        for(j = left; j <= right; j++)
            printf("%d ", a[top][j]);
        top++;

        /* Top to Bottom */
        for(i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        /* Right to Left */
        if(top <= bottom) {
            for(j = right; j >= left; j--)
                printf("%d ", a[bottom][j]);
            bottom--;
        }

        /* Bottom to Top */
        if(left <= right) {
            for(i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }

    return 0;
}