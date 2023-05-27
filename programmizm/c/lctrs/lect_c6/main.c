#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

Node* getLast(Node *head)
{
    if (!head) return NULL;

    Node *ptr = head;
    while (ptr->next)
    {
        ptr = ptr->next;
    }
    return ptr;
}

Node* getPreLast(Node *head)
{
    if (!head) return NULL;
    if (!head->next) return NULL;
    
    Node *ptr = head;
    while (ptr->next->next)
    {
        ptr = ptr->next;
    }
    return ptr;
}

void pushFront(Node **head, int data)
{
    Node *new = malloc(sizeof(Node));
    new->value = data;
    new->next = *head;
    *head = new;
}

void pushBack(Node **head, int data)
{
    Node *new = malloc(sizeof(Node));
    new->value = data;
    new->next = NULL;

    Node *last = getLast(*head);
    if(last == NULL) {
        *head = new;
    } else {
        last->next = new;
    }
}

void print(Node *head)
{
    Node *ptr = head;
    while (ptr)
    {
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}

int lenght(Node *head)
{
    Node *ptr = head;
    int cnt = 0;
    while (ptr)
    {
        cnt++;
        ptr = ptr->next;
    }

    return cnt;
}

void popFront(Node **head)
{
    if (*head == NULL) return;

    Node *prev = *head;
    *head = (*head)->next;
    free(prev);
}

void popBack(Node **head)
{
    if (*head == NULL) return;
    Node *preLast = getPreLast(*head);
    if (preLast == NULL)
    {
        free(*head);
        *head = NULL;
    } else {
        free(preLast->next);
        preLast->next = NULL;
    }
}

int main()
{
    Node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        pushBack(&head, i);
    }
    popFront(&head);
    print(head);
    Node *prelast = getPreLast(head);
    printf("%d\n", prelast->value);    
    
    return 0;
}