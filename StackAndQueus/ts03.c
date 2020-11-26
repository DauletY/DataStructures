#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct node
{
    int info;
   struct node* ptr;
} *queue = NULL;

int count = 0;

int empty();
void solve(int , int);
int reverseGrm(const char*);
void dequeue() {
     if(queue != NULL) {
         queue->ptr = NULL;
         free(queue);
         printf("\n free memory %p %d ", queue->ptr,  queue->info);
     }else {
         empty();
     }
        count--;
}
int empty() {
    if(queue == NULL || count == 0) {
        printf("Queue is empty!");
        return 0;
    }
    return 1;
}
void enqueue (int g) {
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    queue = temp;
    if(queue == NULL || empty() == 0) {
        queue->ptr = NULL;
        queue->info = g;
    }else {
        temp->info = g;
         temp->ptr = queue;
        printf("\n %d", temp->info);
        //printf("\n %p", *temp->ptr);
    }
    count++;
}


int main(int argc, char const *argv[])
{
    enqueue(2);
    enqueue(4);
    dequeue();
    enqueue(5);
    enqueue(12);
    dequeue();
    enqueue(0);
    enqueue(0);
    dequeue();
    enqueue(123);
    dequeue();

     
    printf("\n");
    reverseGrm("cat");
    return 0;
}

void solve(int n, int h) {
    if(log(n) >= h && h >= n - 1) {
        printf("\ntrue");
    }else {
        printf("\nfalse");
    }
}
int angram(const char *a , const char *b) {
    int x = strlen(a);
    int y = strlen(b);
    if(x != y) return 0; // eger 2 joldyn uzindigy angram bolmasa 
    for(int i = 0; i < x; i++) {
        if(a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}
int reverseGrm(const char *word) {
    int reversed = 0;
    for(int i = strlen(word)-1; i >= 0; i--) {
        reversed = word[i - 1];
        printf("%c", word[i]);
    }
    return reversed;
}