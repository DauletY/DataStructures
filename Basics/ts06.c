#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10
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
typedef int ii;
ii Per5(ii n) {
    ii sum = 0;
    for(ii i = 1; i <= n; i++) {
        sum += sum + i * i; // 1) сумма онымы 2) 0(N) 3)N 4)best case  
      //  printf("\n%d", sum);
    }
    return sum;
}
ii PerRec(ii n) {
    ii sum = 0;
    sum += n;
    return sum;
}
ii secret(ii A[], ii n) {
    ii minval = A[0];
    ii maxval = A[0];
    for (ii i = 1; i < n - 1; i++ ) {
        if(A[i] < minval) {
            minval = A[i];
        }else if(A[i] > maxval) 
        {
            maxval = A[i];
        }
    }
    return maxval - minval; // 1) коп- аз айрмасы  
}
ii prim(int min, int max) {
      return max - min; 
}
void sameExp() {
    printf("%0.0lf", pow(2,2));
    printf("\n%d", 2 * 2);
}
unsigned int enigma(unsigned int A[2][2], unsigned int n) {
     for (int i = 0; i < n - 2; i++)
     {
         for (int j = i + 1; j < n - 1; j++)
         {
             if(A[i][j] != A[j][i]) {
                 printf("%u", A[i][j]);
                 printf("\n");
                return 0;
             }
         }
     }
     return 1;
}

ii matrixmultiplication(ii A[MAX][MAX],ii B[MAX][MAX], int n) {
    ii r = 0;
    ii C[MAX][MAX];
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            C[i][j] = 0; 
            for(int k = 0; k < n - 1; k++) {
                r =  r + C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    return r;
}

int main() {
    //printf("%0.1lf", Per5(5));
    // printf("%d", PerRec(5));
    // printf("%d",Per5(5)); 141
    
     int a[MAX][MAX] = {{5}, {7}};
     int b[MAX][MAX] = {{2}, {5}};
     printf("%d", matrixmultiplication(a, b, 10));
    //printf("[%d]" , secret(ar, 3)); // 8 - 5 = 3 min 2
}