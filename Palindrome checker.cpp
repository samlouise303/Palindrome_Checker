#include <stdio.h>

int isPalindrome(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i])
            return 0;
    }
    return 1;
}

void printArray(int arr[], int size)
{
    printf("{");

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);

        if (i != size - 1)
            printf(", ");
    }

    printf("}");
}


