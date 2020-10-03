#include <stdio.h>
#define FACT int

FACT fact(FACT n) {
    return n == 0 ? 1 : n * fact(n - 1);
}


int main(int argc, char const *argv[])
{
    printf("%d", fact(5));
    return 0;
}

