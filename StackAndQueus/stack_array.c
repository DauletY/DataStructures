#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int stack[SIZE] , top = -1;

void push(int value) {
    if(top == SIZE - 1) {
        printf("\nOverflow stack is Full");
    }else {
        top++;
        stack[top] = value;
        printf("\nInsertion was successful");
    }
}
void pop() {
    if(top == -1) {
        printf("\nUnderflow stack is empty");
    }
    else {
        printf("\nDeleted: %d", stack[top]);
        top--;
    }
}
void peek() {
    if(top == -1) {
        printf("\n The stack is empty");
        return;
    }else {
        printf("[%d]", stack[top]);
    }
}
void display() {
    if (top == -1)
    {
        printf("\nStack is empty!");
    }
    else{ 
        printf("\n Stack element are: \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    
}
int main() {
    int value, choice;
    while (1)
    {
        printf("\n\n Stack using Array\n");
        printf("1) Push\n2 Pop\n3 Peep\n4 Display\n5 Exit");
        printf("\nEnter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d" , &value);
                push(value);
                break;
            case 2:               pop();        break; 
            case 3:               peek();       break;
            case 4:               display();    break;
            case 5:     exit(0);
            default: printf("\n Wrong choice , please try again\n \n ");
                                                                                break;
        }
    }
    return EXIT_SUCCESS;
}