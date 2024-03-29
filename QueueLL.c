#include <stdio.h>
#include <conio.h>
struct Node *createNode(int);

void enQueue(int);
void displayQueue();
void deQueue();
void queueFront();
void queueRear();

int count = 0;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *node, *front = NULL, *rear = NULL, *temp = NULL;
void main()
{

    int data, choice, location;
    clrscr();
    do
    {

        printf("\n***LINKED LIST**\n1.EnQueue\n2.DeQueue\n3.QueueFront\n4.QueueRear\n5.Exit\n");
        printf("\n Enter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter Data to add in Queue: ");
            scanf("%d", &data);
            enQueue(data);
            displayQueue();
            break;
        case 2:
            deQueue();
            displayQueue();
            break;
        case 3:
            queueFront();
            break;
        case 4:
            queueRear();
            break;
        case 5:
            exit(0);
            break;
        }
    } while (choice != 5);

    getch();
}
struct Node *createNode(int info)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));

    node->data = info;
    node->next = NULL;
    return node;
}
void queueFront()
{

    if (front == NULL)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        printf("Element at Front is: %d", front->data);
    }
}
void queueRear()
{

    if (front == NULL)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        printf("Element at Rear is: %d", rear->data);
    }
}

void deQueue()
{

    if (front == NULL)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        temp = front;
        printf("\n%d Element Dequed", front->data);
        front = front->next;
        free(temp);
    }
}

void enQueue(int info)
{
    node = createNode(info);
    if (front == NULL && rear == NULL)
    {
        front = node;
        rear = node;
    }
    else
    {
        rear->next = node;
        rear = node;
    }
}
void displayQueue()
{

    if (front == NULL)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        printf("\n Queue is:");
        temp = front;
        while (temp != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}