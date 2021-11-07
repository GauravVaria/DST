#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;
void insert() {
    int val;
    if (rear != MAX-1)
    {
        printf("Enter Element to be Inserted: ");
        scanf(" %d", &val);
    }    
    if ( rear == MAX-1)
    {
        printf("Overflow\n");
    }
    else if ( front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear=rear+1;
    }   
    queue[rear]=val;
}
void delete() {
    if (front==-1 || front > rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Element deleted is : %d\n", queue[front]);
        front++;
    }
}
int print(){
    printf("Queue: ");
    for ( int i = front; i < MAX; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
void main() {
    int op = 0;
	do {
        printf("\tEnter your choice:\n");
		printf("\t1 : Insert\n");
		printf("\t2 : Delete\n");
		printf("\t3 : Print\n");
		printf("\t0 : Exit\n");
		scanf(" %d", &op);
        switch (op)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            print();
            break;
        default:
            break;
        }
    } while (op!=0);
}