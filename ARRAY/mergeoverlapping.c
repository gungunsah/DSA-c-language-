#include <stdio.h>
void main() {
    int intervals[50][2], i, j, n;
    printf("Enter number of intervals: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Enter interval %d [start end]: ", i + 1);
        scanf("%d %d", &intervals[i][0], &intervals[i][1]);
    }

    // Bubble sort — start time ke basis pe
    int temp0, temp1;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (intervals[j][0] > intervals[j+1][0]) {
                temp0 = intervals[j][0];
                temp1 = intervals[j][1];
                intervals[j][0]   = intervals[j+1][0];
                intervals[j][1]   = intervals[j+1][1];
                intervals[j+1][0] = temp0;
                intervals[j+1][1] = temp1;
            }
        }
    }

    printf("\nSorted Intervals: ");
    for (i = 0; i < n; i++)
        printf("[%d,%d] ", intervals[i][0], intervals[i][1]);

    // Merge karo
    int merged[50][2], m = 0;
    merged[0][0] = intervals[0][0];
    merged[0][1] = intervals[0][1];

    for (i = 1; i < n; i++) {
        // Overlap check
        if (intervals[i][0] <= merged[m][1]) {
            // Merge karo — end max lelo
            if (intervals[i][1] > merged[m][1])
                merged[m][1] = intervals[i][1];
        }
        else {
            // No overlap — naya interval add karo
            m++;
            merged[m][0] = intervals[i][0];
            merged[m][1] = intervals[i][1];
        }
    }

    printf("\n\nMerged Intervals: ");
    for (i = 0; i <= m; i++)
        printf("[%d,%d] ", merged[i][0], merged[i][1]);
}