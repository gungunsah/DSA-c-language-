#include <stdio.h>
int main() {
    int a[50], n, i, j, leader;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        printf("\n enter the elements:");
        scanf("%d", &a[i]);
    }

    printf("Leaders are: ");
    for(i = 0; i < n; i++) {
        leader = 1;

        for(j = i + 1; j < n; j++) {
            if(a[j] >= a[i]) {
                leader = 0;
                break;
            }
        }

        if(leader)
            printf("%d ", a[i]);
    }

    return 0;
}