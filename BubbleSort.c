#include <stdio.h>
#define MAX 20
void bubblesort()
{
    int arr[MAX], size, temp;
    printf("\nEnter Size of Array: ");
    scanf("%d", &size);
    printf("\nEnter Array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
}
int main()
{
    bubblesort();
    return 0;
}