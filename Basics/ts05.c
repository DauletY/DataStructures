#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ARRAY_LENGTH(A) (sizeof(A) / sizeof(A[0]))
#define MAX 10
typedef long ll;
/*Төмендегі алгоритмдердің әрқайсысы үшін анықтаңыз: 
1) кіріс деректер өлшемінің табиғи өлшем бірліктері;
2) алгоритмнің негізгі жұмысы; 
3) бірдей көлемдегі кіріс деректерінің пайдаланылатын жиынтығына
 байланысты алгоритммен орындалатын негізгі операциялардың саны өзгере ме?*.

For each of the algorithms below, define: 
1) natural units of measurement for the size of input data;
2) the main operation of the algorithm; 
3) whether the number of basic operations performed by the 
algorithm will change depending on the same size input data set used.

*/


// n 
int long Sum(int n) {
    int long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}
// n!
long long fact(long long n) {
    return n == 0 ? 1 : n * fact(n - 1);
}

int length(int *array) {
    int len = 0;
    while (*array++)
    {
        ++len;
    }
    return len;
}
int searchlargestelemtentN(int *array , int length, int n) {
    for(int i = 0 ; i < length ; i++) {
        if(array[i] > n) {
            n = array[i];
        }
    }
    printf("[%d]\n", n); 
    return n;
}
// Recursive Euclid algorithm
// ең үлкен ортақ бөлгіш
int gcd(int u, int v) {
    return (v != 0)?gcd(v, u%v):u;
}

/*sieve of Eratosthenes.
   решето Эратосфена noun
  sieve of Eratosthenes
*/
int sieveofEratosthenes(int n) {
    for(int i = 2; i * i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
} 
// n-bit
void table(int n) {
    int table = 0;
    for(int c = 1; c < n + 1; c++) {
        for(int j = 1 ; j < n + 1; j++) {
            printf("   |%d * %d = %d| ", c , j , c * j);
        }
        printf("\n");
    }
}
ll matrixSum(int m[MAX][MAX], int n) {
    ll sum = 0;
    for(ll i = 0; i < MAX; i++) {
        for(ll j = 0; j < MAX; j++) {
            sum += m[i][j];
        }
        
    }
    if(sum == n) {
          printf("number form matrix: %d", n);
    }
    return sum;
}
void matrixMul(int m[MAX][MAX]) {
    ll mul = 0;
    for(ll i = 0; i < MAX; i++) {
        for(ll j = 0; j < MAX; j++) {
            m[i][j] = m[i][j] * m[i][j];
        }
        
    }
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
void searchNelement(ll array[MAX], ll size , ll n) {
    ll low = 0, high, mid = 0;
    high = (size - 1);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(n == array[mid]) {
            printf("successful search\n");
            return;
        }
        if(n < array[mid]) {
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }
    printf("unsuccessful search\n");
}
void solve(int box[MAX]) {
    int red , yellow, green;
    green = yellow = red= 0;
    box[red] = 5;
    box[yellow] = 4;
    box[green] = 2;

    int nNaUgad;
    int minGlovesSum = 0, theSamColor = 0;
    int color = 0;
    scanf("%d", &nNaUgad);
    while(color < MAX) {
        switch(nNaUgad) {
            case 1:
            case 2: printf("\n chooes you'r green ");
            minGlovesSum = box[color];
            break;
            case 4: printf("\n chooes you'r yellow ");
            minGlovesSum = box[color];
             break;
            case 5: printf("\n chooes you'r red ");
            minGlovesSum = box[color];
            break;
            default:
                printf("try again.");
                return;
        }
        if(nNaUgad == box[color]) {
           theSamColor = 1;
            break;
        }
        minGlovesSum += box[color];
        
        color++;
    }
    if(theSamColor == 1) {
        printf("\n Yes the same color");
    }else {
        printf("\n No the not same color");
    }
    printf("\n minimum number of gloves %d", minGlovesSum);
}
void converDecToBin(ll num) {
    if(num > 1)
        converDecToBin(num / 2);
    printf("%d ", num % 2);
}
ll converBinToDecmal(ll num) {
ll rem, bin_vl, dec_vl = 0, base_vl = 1;
   bin_vl = num;
   while(num > 0) {
       rem = num % 10;
       dec_vl = dec_vl + rem * base_vl;
       num = num / 10;
       base_vl = base_vl * 2;
   }
   return dec_vl;
}
// ()logN)
void firT(ll n) {
    for (ll i = 1; i < n; i = i * 2)
    {
        printf("[%d]", i);
    }
    printf("\n");
}
// sqrt(n)
void fsecT(ll n) {
    for (ll i = 1; i < sqrt(n);  i++)
    {
        printf("[%d]", i);
    }
    printf("\n");
}
// n 
void ftrT(ll n) {
    for (ll i = 1; i < n; i++)
    {
        printf("[%d]", i);
    }
    printf("\n");
}
// n2
void fforT(ll n) {
    for (ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++) 
            printf("[%d]", j);
    }
    printf("\n");
}
void ffitT(ll n) /* n ^ 3*/ {
    for (ll i = 0; i < n; i++)
    {
        for(ll j = 0 ; j < n ; j++) {
            for(ll k = 0; k < n; k++)
                    printf("[%d]", k);
        }
    }
    printf("\n");
}
ll fib(ll n)/*2n*/ {
    if(n <= 1) return n;
    return fib(n-2) + fib(n-1);
    printf("\n");
}
ll table2(ll n) {
    ll sum = 0;
    for(int i = 1; i < n + 1; i+=2) {
        if(i % 1 == 1 || i % 2 == 2)  {
            sum += i;
        }
        else if(i % 3 == 4 || i % 4 == 8) {
            sum += i;
        }
        else if(i % 5 == 32 || i % 6 == 64 ) {
            sum += i;
        }
        else {
           sum += i;
        }
    }
    printf("\n sum: [%d]", sum);
    return sum;
}
double G(double  n) {
    // return pow(n * 2, 10) + 1;
    // return 2 * n * log(n + 2) * 2 + (n + 2) * 2 * log(n / 2);
    // return pow(2, n + 1) + pow(3, n - 1);
    // return sqrt(10 * n * 2 + 7 * n + 3);
    return log(n);
}

//--------------main-----------------
int main () {
   
   printf("%lf", G(4));  
   return 0;
}
//--------------end------------------
