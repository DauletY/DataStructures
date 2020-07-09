
#include <stdio.h>
void modify(int*);


int main() {
    int i = 2;
    printf(" %d", i);
    modify(&i);
    printf(" %d", i);
    return 0;
}
void modify(int *p) {
    *p = *p + 2;
    printf(" %d", *p);
}