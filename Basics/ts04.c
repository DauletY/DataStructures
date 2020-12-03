#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Қарастырылып отырған жиындардың анықтамаларын қолдана отырып, 
тиісті қарсы мысалды келтіре отырып, келесі мәлімдемелерді дәлелдеңіз немесе жоққа шығарыңыз:
мысладар келтыру
*/
int G(int n) {
  //  printf(" %d " , n);
    return n;
}
int O(int n) {
    return G(n);
}
int T(int n) {
    return O(n);
}
int Omg(int n) {
    return T(n);
}

int F(int n) {
    return scanf("%d", &n);
}
int main() {
    int n = 12, a = 0;
    if(Omg(n) < 0) {
        a =a * G(n);
    }else {
        a = G(n);
    }
    printf("\n");
    printf("%d", a);

    if(T(G(n)) == O(G(n)) && Omg(G(n))) {
        printf("true");
    }else {
        printf("false");
    }
    printf("\n");

    if(T(O(n)) == T(Omg(G(n)))) {
        printf("true");
    }else {
        printf("false");
    }
    printf("\n");

    if(F(Omg(G(n)) >= T(G(n)))) /* omega base case*/ {
        printf("true");
    }else {
    }    
    printf("\n");
    if(F(T(n)) <= O(G(a)) <= Omg(O(G(n)))) /*tetha */ {
        printf("true");
    }else {
        printf("false");
    }
    return 0;
}