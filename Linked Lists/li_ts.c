#include <stdio.h>
#include <stdlib.h>
#define NEWLINE printf("\n")

struct linked_list
{
    int size;
    struct linked_list *right;
} *node = NULL;


struct  linked_list *new_list(struct linked_list *init, int x) {
    init =  (struct linked_list *)malloc(sizeof( struct linked_list*));
    node = init;
    node->size =  x;
    if(node != NULL) 
    {
        node = (node != NULL) ? node : NULL; 
        node->size = (node->size != 0) ? printf("yes memory!\n") : printf("no memory!\n");
        printf("pointer address: %p\n", node);
        printf("size is: [%d]\n", node->size);
    }
    return node;
}

struct linked_list *add(struct linked_list *link, int x) {
    node = new_list(link, x );
    NEWLINE;
    if(node == NULL) {
        node->right = NULL;
        link = node;
    }else {
        node->right = link;
        link = node;
        printf("Node inserted successfully %p -> %d" , link->right , link->size);
    }
    return node;
}
void remove(struct linked_list *link) {
    if(node == NULL) {
        NEWLINE;
        printf("list is empty!");
    }else {
        link = node;
        if(node->right != NULL) {
            node = NULL;
            free(link);
        }else {
            node = link->right;
            free(link);
            printf("Node deleted!");
            NEWLINE;
        }
    }
}
int main(int argc, char const *argv[])
{
    add(node , 2);
    NEWLINE;
    remove(node);
    add(node , 13);
    remove(node);
    //return 0;
}


