#include <stdio.h>

int push(int);
int empty();
int pop();
int size ;
int array[10] ={0};
int push(int add) {
    array[size++] = add;
    return add;
}
int pop () {
    if(size == -1) {
        printf("stack underflow");
        return 1;
    }else {
        if(empty()) {
            --size;
        }else {}
    }
    return 0;
}

int empty() {
    return size == 1 ? printf("stack is empty\n") : printf("stack is full\n");
}
int main(int argc, char const *argv[])
{
    int set; // set in 
   while (scanf("%d", &set) == 1) 
   {
       if(set > 0) {
           printf("push %d", push(set));
       }else {
           printf("pop %d", pop());
       }
   }
   return 0;
}
