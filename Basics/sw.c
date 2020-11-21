#include <stdio.h>

#define Swap(X,Y)  do{ __typeof__ (X) _T = X; X = Y; Y = _T; }while(0)
#define NewLine printf("\n")

struct test
{
    /* data */
    int a , b , c;
};


void swap(void *v1, void *v2, size_t s) {
    char t, *a = (char)v1, *b = (char)v2;
    while (s--)
        t = a[s], a[s] = b[s], b[s] = t;
}

void sp(int a, int b) {
    int s = a;
    a = b;
    b = s;
}
void spRef(int *a , int *b) {
    int s = *a;
    *a = *b;
    *b = s;
}
int main() {
    // No change -<
    int a = 2, b = 3;
    printf("before-> [%d] [%d]", a, b);
    NewLine;
    sp(a, b);
    printf("after-> [%d] [%d]", a, b);
    NewLine;
    printf("before ref-> [%d] [%d]", a , b);
    spRef(&a, &b);
    NewLine;
    printf("after ref-> [%d] [%d]", a , b);
    NewLine;NewLine;NewLine;

    struct test t = {1,2,3};
    struct test h = {4,5,6};

    struct test *pt = &t;
    struct test *th = &h;

    printf("%d %d %d\n", t.a, t.b, t.c ); 
    Swap(t, h);
    printf("%d %d %d\n", t.a, t.b, t.c );
    printf("%d %d %d\n", h.a, h.b, h.c );
    NewLine;
    printf("%d",pt->a);
    Swap(pt, th);
    NewLine;
    printf("%d",pt->a);

    return 0;
}
