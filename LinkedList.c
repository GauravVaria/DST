// C program for the all operations in
// the Singly Linked List
#include <stdio.h>
#include <stdlib.h>
// Linked List Node
struct node
{
    int data;
    struct node *link;
};
struct node *start = NULL;

// Function to traverse the linked list
void traverse()
{
    struct node *temp;

    // List is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Else print the LL
    else
    {
        temp = start;
        printf("Linked list = ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
    struct node *temp;
    temp =(struct node *) (struct node *) malloc(sizeof(struct node));;
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &temp->data);

    // Pointer of temp will be
    // assigned to start
    temp->link = start;
    start = temp;
}

// Function to insert at the end of
// the linked list
void insertAtEnd()
{
    struct node *temp, *head;
    temp =(struct node *) (struct node *) malloc(sizeof(struct node));;

    // Enter the number
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &temp->data);

    // Changes links
    temp->link = 0;
    head = start;
    while (head->link != NULL)
    {
        head = head->link;
    }
    head->link = temp;
}

// Function to insert at any specified
// position in the linked list
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, i = 1;
    newnode = (struct node *) malloc(sizeof(struct node));;

    // Enter the position and data
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &newnode->data);

    // Change Links
    temp = start;
    newnode->link = 0;
    while (i < pos - 1)
    {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}

// Function to delete from the front
// of the linked list
void deleteFirst()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        start = start->link;
        free(temp);
    }
}

// Function to delete from the end
// of the linked list
void deleteEnd()
{
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("\nList is Empty\n");
    else
    {
        temp = start;
        while (temp->link != 0)
        {
            prevnode = temp;
            temp = temp->link;
        }
        free(temp);
        prevnode->link = 0;
    }
}

// Function to delete from any specified
// position from the linked list
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;

    // If LL is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Otherwise
    else
    {
        printf("\nEnter index : ");

        // Position to be deleted
        scanf("%d", &pos);
        position = (struct node *) malloc(sizeof(struct node));;
        temp = start;

        // Traverse till position
        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }

        // Change Links
        position = temp->link;
        temp->link = position->link;

        // Free memory
        free(position);
    }
}

int main()
{
    int choice;
    while (1)
    {

        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at"
               " starting\n");
        printf("\t3 For insertion at"
               " end\n");
        printf("\t4 For insertion at "
               "any position\n");
        printf("\t5 For deletion of "
               "first element\n");
        printf("\t6 For deletion of "
               "last element\n");
        printf("\t7 For deletion of "
               "element at any position\n");
        printf("\t8 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
