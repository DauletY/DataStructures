#include <stdio.h>


int gcd(int, int);

int main() {
    int m, n, g = 0;
    printf("Enter 2 positive integers: ");
    scanf("%d %d", &m ,&n);
    g = gcd(m, n);
    printf("GCD is: %d", g);
    printf("\n");
}
int gcd(int m, int n) {
    int r = 0;
    while (n > 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
    
}