#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[6] = {0, 2, 4, 6, 8, 10};
    int element, low, high, mid;
    low = 0;
    high = 5;
    printf("\nEnter element to find: ");
    scanf("%d", &element);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            printf("\n%d found at position: %d", arr[mid], mid);
            break;
        }
    }
    printf("\nElement not found");

    return 0;
}
