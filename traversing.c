#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *start = NULL, *last, *temp, *p;
    int answer;
    do
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &temp->data);
        temp->link = NULL;
        if (start == NULL)
        {
            start = temp;
            last = temp;
        }
        else
        {
            last->link = temp;
            last = last->link;
        }
        printf("Do you want to continue? (0 or 1): ");
        scanf("%d", &answer);
    } while (answer != 0);

    // Traversing Linked List
    printf("Linked list is: \n");
    p = start;
    while (p != NULL)
    {
        printf("\t%d", p->data);
        p = p->link;
    }

    return 0;
}