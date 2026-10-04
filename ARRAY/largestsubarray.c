#include<stdio.h>
void main(){
    int a[50], i, j, n, sum, target;
    int start, end, maxlen, currsum;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }
    printf("\nEnter target sum: ");
    scanf("%d", &target);

    maxlen = -1;
    start  = -1;
    end    = -1;

    // Har subarray check karo
    for(i = 0; i < n; i++){
        currsum = 0;

        for(j = i; j < n; j++){
            currsum = currsum + a[j];  // Sum badhao

            if(currsum == target){     // Sum mila?
                if(j - i + 1 > maxlen){
                    maxlen = j - i + 1; // Length update karo
                    start  = i;         // Start position
                    end    = j;         // End position
                }
            }
        }
    }

    // Result print karo
    if(maxlen == -1){
        printf("\nKoi subarray nahi mila!");
    }
    else{
        printf("\nLargest subarray: ");
        for(i = start; i <= end; i++)
            printf("%d ", a[i]);

        printf("\nStart position = %d", start);
        printf("\nEnd position   = %d", end);
        printf("\nLength         = %d", maxlen);
    }
}