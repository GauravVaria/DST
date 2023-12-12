// Develop Code to Implement different operations on BST using following operations – create, delete, display(traversal).

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *left;
    struct node *right;
};

struct node *root;

struct node *insert(struct node *r, int data);
struct node *deleteNode(struct node *root, int data);
void inOrder(struct node *r);
void preOrder(struct node *r);
void postOrder(struct node *r);
struct node *minValueNode(struct node *node);

int main()
{
    int choice, v;
    root = NULL;

    do
    {
        printf("\n**BinaryTree**");
        printf("\n1.Enter Node in Tree");
        printf("\n2.Delete Node in tree");
        printf("\n3.InOrder Traversal");
        printf("\n4.PreOrder Traversal");
        printf("\n5.PostOrder Traversal");
        printf("\n6.End Program");
        printf("\nEnter Your Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Data:");
            scanf("%d", &v);
            root = insert(root, v);
            break;
        case 2:
            printf("Enter Data: ");
            scanf("%d", &v);
            root = deleteNode(root, v);
            break;
        case 3:
            printf("In order Traversal:\n");
            inOrder(root);
            printf("\n");
            break;
        case 4:
            printf("Pre order Traversal:\n");
            preOrder(root);
            printf("\n");
            break;
        case 5:
            printf("Post order Traversal:\n");
            postOrder(root);
            printf("\n");
            break;
        case 6:
            printf("\nEnd Program");
            break;
        default:
            printf("\nPlease Enter Choice from 1 to 6");
        }
    } while (choice != 6);
    return 0;
}

struct node *minValueNode(struct node *node)
{
    struct node *current = node;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

struct node *deleteNode(struct node *root, int data)
{
    struct node *temp;
    if (root == NULL)
        return root;

    if (data < root->value)
        root->left = deleteNode(root->left, data);
    else if (data > root->value)
        root->right = deleteNode(root->right, data);
    else
    {
        if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = minValueNode(root->right);
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}

// Rest of your code remains unchanged

struct node *insert(struct node *r, int data)
{
    if (r == NULL)
    {
        r = (struct node *)malloc(sizeof(struct node));
        r->value = data;
        r->left = NULL;
        r->right = NULL;
    }
    else if (data < r->value)
    {
        r->left = insert(r->left, data);
    }
    else
    {
        r->right = insert(r->right, data);
    }
    return r;
}

void inOrder(struct node *r)
{
    if (r != NULL)
    {
        inOrder(r->left);
        printf("%d ", r->value);
        inOrder(r->right);
    }
}
void preOrder(struct node *r)
{
    if (r != NULL)
    {
        printf("%d ", r->value);
        preOrder(r->left);
        preOrder(r->right);
    }
}
void postOrder(struct node *r)
{
    if (r != NULL)
    {
        postOrder(r->left);
        postOrder(r->right);
        printf("%d ", r->value);
    }
}