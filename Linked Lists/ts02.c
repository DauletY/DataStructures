// test single linked list implementation 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
} *head = NULL;

void list_insert(int x) {
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node*));
    new_node->val = x;
    if(head == NULL) {
        new_node->next = NULL;
        head = new_node;
    }else {
        new_node->next = head;
        head = new_node;
    }
    printf("\nNode inserted successfully at beginning\n");
}
void list_search(int x) {
    while (head != NULL)
    {
        if(head->val == x) {
            printf("The key is found in the list\n");
            return;
        }
        head = head->next;
    }
    printf("The Key is not found in the list\n");
}
void list_remove() {
    if(head == NULL)    printf("List is empty") ;
    else {
        struct node *temp = head;
        if(head->next ==  NULL){
            head = NULL;
            free(temp);
        }else{
            head = temp->next;
            free(temp);
                    printf("\nNode deleted at the beginning\n\n");
        }
    }
}
void list_remove_end() {
   
    if(head == NULL)   printf("List is empty");
    else {
        struct node *temp1 = head,*temp2;
        if(head->next == NULL)
            head = NULL;
        else 
        {
            while (temp1->next != NULL)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp2->next = NULL;
        }
        free(temp1);
        printf("\nNode deleted at the end\n\n");
    }
}
int main() {
    int n, choice, val, key;
    while(1) {
         printf("\n\nSingly Linked List Operations\n");
         printf("1. Insert at beginning\n 2.Delete at beginning\n 3.Delete list at the end\n 4.Search\n 5. Display\n 6. Exit\n\nEnter your choice:  ");
         scanf("%d", &choice);
          switch (choice){
            case 1:
            printf("Enter the value to be insert: ");
                scanf("%d", &val);
                list_insert(val);
                break;
            case 2:
                list_remove();
                break;
            case 3:
                list_remove_end();
                break;
            case 4:
                printf("Enter the value which you want to search: ");
                scanf("%d", &key);
                list_search(key);
                break;
            case 5:
                break;
            case 6:
                exit(0);
            default:
            printf("\nWrong Choice, Please try again\n\n");
                break;
            }
    } 
    return 0;
}
