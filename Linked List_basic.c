// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main() {
    
struct Node* head = (struct Node*)malloc(sizeof(struct Node));
struct Node* first = (struct Node*)malloc(sizeof(struct Node));
struct Node* second = (struct Node*)malloc(sizeof(struct Node));

head->data=104;
head->next=first;
first->data=105;
first->next=second;
second->data=106;
second->next=NULL;

struct Node* temp = head;

while(temp!=NULL)
{
    printf("%d->",temp->data);
    temp = temp->next;
}
 printf("NULL\n");

    return 0;
}
