#include <stdio.h>
#include <math.h>

// 1) 2) 3) 4) 5)
int Per(int n) {
    int sig = 0;
    for(int i = 0; i < n - 1; i++) {
        sig = sig + (pow(i, 2) + 1) * 2;
    }
    return sig;
}
long Per2(long n) {
    long simba = 0;
    for(int i = 2 ; i < n - 1; i++) {
        simba = simba + log(pow(i, 2));
    }
    return simba;
}
double Per3(double n) {
    double sym = 0;
    for(int i = 1; i <= n; i++) {
        sym += (i + 1) * pow(2, i-1);
    }
    return sym;
}
double Per4(double n) {
    double sym = 0;
    for(int i = 0; i < n - 1; i++) {
         for(int j = 0; j < n - 1; j++) {
             sym += (i + j);
             printf("\n[%0.0lf]", sym);
         }
    }
    printf("\n");
    return sym;
}


void sameExp() {
    printf("%0.0lf", pow(2,2));
    printf("\n%d", 2 * 2);
}
int main() {
    printf("%0.1lf", Per4(5));

}