#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int a ;
    struct node *next;
};

void gen(struct node**);
int length(struct node*);
void del(struct node**);

int main() {
    struct node *head = NULL;
    int count = 0;
    gen(&head);
    count = length(head);
    printf("The number of nodes are: %d" , count);
    del(&head);
    return EXIT_SUCCESS;
}

void gen(struct node **head) {
    int num = 10;
    struct node *temp;
    for(int i = 0 ;  i < num; i++) {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->a = i;
        if(*head == NULL)
        {   
            *head = temp;
            (*head)->next = NULL;
        }
        else {
            temp->next = *head;
            *head = temp;
        }
    }
}
int length(struct node *head) {
    if(head->next == NULL)  return 1;
    return (1 + length(head->next));
}
void del(struct node **head) {
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}