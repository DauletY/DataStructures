#include <stdio.h>
#include <string.h>

void push(char);
char pop();
char stack[100];
int top = -1;

int main() {
    char str[100];
    int i, len, count = 0;
    printf("Enter string to check it is palindrome or not: ");
    scanf("%s" , str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        push(str[i]);
    }
    for (i = 0; i < len; i++)
    {
        if(str[i] == pop())
            count++;
    }
    if(count == len) 
        printf("%s is a Polindrome string\n");
    else
        printf("%s is not a Polindrome string\n");
    return 0;       
}
void push(char c) {
    stack[++top] = c;
}
char pop() {
    return (stack[top--]);
}