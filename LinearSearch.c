#include <stdio.h>
#define MAX 10
void linearsearch()
{
    int arr[MAX], val, size, count = 0;
    printf("\nEnter Size of Array: ");
    scanf("%d", &size);
    printf("\nEnter Array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &val);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            printf("\nElement present at position %d", i + 1);
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nElement not found in array");
    }
    else
    {
        printf("\nElement present %d times", count);
    }
}
int main()
{
    linearsearch();
    return 0;
}