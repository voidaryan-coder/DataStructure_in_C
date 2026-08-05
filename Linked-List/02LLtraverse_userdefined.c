#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *create_list()
{
    struct Node *first = NULL, *last = NULL, *newNode;
    int n, d;
    printf("Enter the  number of nodes:\n");
    scanf("%d", &n);
    printf("Enter the data of nodes:\n");
    for (int i = 1; i <= n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &d);
        newNode->data = d;
        newNode->next = NULL;
        if (first == NULL)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
    }
    return first;
}
void display(struct Node *first)
{
    struct Node *temp = first;
    while (temp != NULL)
    {
        printf("%d--->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main()
{
    struct Node *first;
    first=create_list();
    display(first);
}
