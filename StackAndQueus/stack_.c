
#include <stdio.h>
#include <stdlib.h>



int size;
void push ( int x);
void pop();
int isempty();
int *a = NULL;


int main() {
    
    int n, r;
    int add;
    a = malloc(1 * sizeof(int));
    
    while(1) {
        printf("Select  \
                    1) add \
                    2) delete stack:");
        printf("\n n = ");
            scanf("%d", &n);
            printf("\n");
        switch (n)
        {
        case 1:
        
         printf("a = ");
         scanf("%d", &add);
            push(add);
            break;
        case 2:
            pop();
            break;
        default:
         printf("try again!");
            break;
        }
        printf("\n");
    }


}
void push(int x) {
    a[++size] = x;
    printf("add: %d" , a[size]);
    if(a == NULL) 
        isempty();
}
void pop() {
    if(size == -1) {
        printf("stack is underflow\n");
        if(isempty() == 0)
            return;
    }
    else { 
        printf("deleted: %d ", a[size]);
        --size; 
    }
}
int isempty() {
    printf("stack is empty!");
    return size == 0 ? 1 : 0;
}