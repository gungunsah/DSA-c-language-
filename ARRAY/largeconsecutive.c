#include <stdio.h>
static void sort_ints(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[50], n, i;
    int longest;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 50)
    {
        printf("Invalid input for n\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &a[i]) != 1)
        {
            printf("Invalid input\n");
            return 0;
        }
    }

    sort_ints(a, n);

    longest = 1;
    int current = 1;

    for (i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            continue; // skip duplicates
        }

        if (a[i] == a[i - 1] + 1)
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if (current > longest)
        {
            longest = current;
        }
    }

    printf("Longest consecutive sequence = %d\n", longest);
    return 0;
}

