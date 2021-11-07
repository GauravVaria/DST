#include <stdio.h>

int main() {

    int number[100] , size, pos, i, element;

    printf("How many elements do you want in the array: ");
    scanf(" %d", &size);

    printf("Enter the elements of an array: \n");

    for ( i = 0; i < size; i++)
    {
        scanf(" %d", &number[i]);
    }

    printf("The array entered: \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t", number[i]);
    }
    
    printf("\nWhich number do you want to add: ");
    scanf(" %d", &element);
    printf("\nwhere do you want to add it: ");
    scanf(" %d", &pos);
    
    for ( i = size; i > pos; i--)
    {
        number[i] = number[i-1];
    }

    number[pos] = element;

    for ( i = 0; i < size; i++)
    {
        printf("%d\t", number[i]);
    }   
    return 0;
}