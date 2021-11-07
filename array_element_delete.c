#include <stdio.h>

int main() {

    int number[100] , size, pos, i;

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
    
    printf("\nIndex of the element you want to delete: ");
    scanf(" %d", &pos);
    
    for ( i = pos; i < size; i++)
    {
        number[i] = number[i+1];
    }
    size --;
    for ( i = 0; i < size; i++)
    {
        printf("%d\t", number[i]);
    }   
    return 0;
}