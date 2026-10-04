#include <stdio.h>
int main() {
    int a[50], i, n;
    int candidate, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
     {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }
    // Step 1: Candidate dhundo
    for (i = 0; i < n; i++)
     {
        if (count == 0) {
            candidate = a[i];
            count = 1;
        }
        else if (a[i] == candidate)
            count++;
        else
            count--;
    }

    // Step 2: Verify karo
    count = 0;
    for (i = 0; i < n; i++) 
    {
        if (a[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("\nMajority element is: %d", candidate);
    else
        printf("\nNo majority element found");

    return 0;
}