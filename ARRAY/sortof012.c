#include<stdio.h>
void main(){
    int a[50], i, n;
    int low, mid, high, temp;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter element (0, 1 ya 2): ");
        scanf("%d", &a[i]);
    }

    low  = 0;
    mid  = 0;
    high = n-1;

    while(mid <= high){

        if(a[mid] == 0){
            // 0 mila → low ke saath swap karo
            temp    = a[low];
            a[low]  = a[mid];
            a[mid]  = temp;
            low++;
            mid++;
        }
        else if(a[mid] == 1){
            // 1 mila → apni jagah hai
            mid++;
        }
        else{
            // 2 mila → high ke saath swap karo
            temp     = a[mid];
            a[mid]   = a[high];
            a[high]  = temp;
            high--;
        }
    }

    printf("\nSorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}