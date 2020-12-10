#include <stdio.h>

int X(int n) {
    return n == 1 ? 0 : X(n - 1) + 5;
}
int X1(int n) {
    return n == 1 ? 4 : 3 * X1(n-1) + n;
}
int X2(int n) {
    return n == 0 ? 0 : X2(n - 1) + n;
}
int X3(int n) {
    return n == 1 ? 1 : X3(n / 2) + n;
}
int X4(int n) {
    return n == 1 ? 1 : X4(n / 3) + 1;
}
int factorial(int n ) {
    return n == 0 ? 1 : n * factorial(n - 1);
}
int S(int n) {
    return n == 1 ? 1 : S(n - 1) + (n * n * n);
    // this exp same   for i in 5 { sum += i * i * i }
}

int Q(int n) {
    return n == 1 ? 1 : Q(n - 1) + 2 * n - 1; 
    // q += 2 * i - 1;
}
int BinRec(int n) {
    return n == 1 ?  1 : BinRec(n / 2) + 1;
}
unsigned long long Fib(long n) {
    return n <= 1 ? n : Fib(n - 1 ) + Fib(n - 2);
}
unsigned long long FibIter(long n) {
    long F[100000] = {0};
    F[0] = 0;
    F[1] = 1;
    for(int i =2 ; i <= n; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
}
int main() {

   for(int i = 1; i <= 15; i++) 
       printf("/%d/,", FibIter(i));
    return 0;
}