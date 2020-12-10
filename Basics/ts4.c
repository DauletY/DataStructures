#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

#define TRUE 1
//this function will get the string array
//and split into the words, seprated by spaces

int getWords(char *base, char target[10][20])
{
	int n=0,i,j=0;
	
	for(i=0;TRUE;i++)
	{
		if(base[i]!=' '){
			target[n][j++]=base[i];
		}
		else{
			target[n][j++]='\0';//insert NULL
			n++;
			j=0;
		}
		if(base[i]=='\0')
		    break;
	}
	return n;
	
}
void testCaseSplit() {
      char str1[100];
    char newString[10][10]; 
    int i,j,ctr;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");    
 
    printf(" Input  a string : ");
    fgets(str1, sizeof str1, stdin);	
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
}

void shortSolution() {
    
    char sp[1000] = {0};
    scanf("[^\n]", sp);
    int i = 0, l = 0;
    float  sum = 0 , s = 0;
    int tax = 7;
    while(sp[l] != '\0')  {
        l++;
        i++;
    }
    for( i = 0; i < l; i++) {
        if(sp[i] == 'N' || sp[i] == 'a' || sp[i] == 'c' || sp[i]== 'h' || sp[i] == 'o' || sp[i] == 'c') {
            s += 6;
        }
        else if(sp[i] == 'P' || sp[i] == 'i'|| sp[i] == 'z' || sp[i] == 'z' || sp[i] == 'a') {
             s += 6;
        }
        else if(sp[i] == 'C' || sp[i] == 'h' || sp[i] == 'e' || sp[i] == 'e' || sp[i] == 's' || sp[i] == 'e' || sp[i] == 'b' || sp[i] == 'u' || sp[i] == 'r' || sp[i] == 'g' || sp[i] == 'e' || sp[i] == 'r') {
             s += 10;
        }
        else if(sp[i] == 'W' || sp[i] == 'a' || sp[i] == 't' || sp[i] == 'e' || sp[i] == 'r') {
             s += 4;
        }
        else if (sp[i] == 'C' || sp[i] == 'o' || sp[i] == 'k' || sp[i] == 'e')
        {
            s += 5;
        }
        sum = s + (s * tax / 100);
     }
    
        printf("%0.2f", sum);  
}
void LandHo () {
   int a = 0, c=0;
    scanf("%f", &a);
    if(a == 80) {
        printf("90");
    }else {
        for(int i = 0; i < a; i+=20) {
            c++;
        }
    }
    if(a != 80) {
        c = ((c * 2)- 1) * 10;
        printf("%d", c);
    } 
}
void Roadrunner() {
    int a, b, c;
    printf("%d %d %d", &a, &b, &c);
    
if(a  / b <= (a + 50) / c) {
            printf("Meep Meep"); 
        }else {
            printf("Yam");
        }
}
void BallparkOrders() {
    char word[50];
    double tot = 0.0;
    
    while( scanf(" %s", word) == 1 ) {
        
        if( !strncmp(word, "Pizza", 50) || !strncmp(word, "Nachos", 50) ) {
            tot += 6;
        }
        else if( !strncmp(word, "Cheeseburger", 50) ) {
            tot += 10;
        }
        else if( !strncmp(word, "Water", 50) ) {
            tot += 4;
        }
        else {
            tot += 5;
        }
        // this program correct within by for loop<-
    }
    // format for float g and f->fl
    printf("%.2f", tot+tot*7/100);
 
 
}
void lzzyTheLguana() {
    int  count = 0;
    int let = 5, car = 4, man = 9, che = 0;
    char snack[100] ;
    while(scanf(" %s", snack) == 1) {
        if(!strcmp(snack, "Lettuce") || !strcmp(snack, "Carrot"))  {
            count += let;       
         
         }
         else if(!strcmp(snack, "Mango")) {
              count += man;       
            
         }else if(strcmp(snack, "Cheeseburger")) {
             count += che;
         }else{
         }
        }
        
        if(count > 10) {
            printf("Come on Down!");
            
        }else {
            printf("Time to wait");
        }
}
void NumeBuddy() {
        char ones[50];
     char cam[50];
     fgets(ones, 50, stdin);
     fgets(cam, 50, stdin);
     
     int checkThisLoop = 0;
     for(int i = 0; ones[i] != '\0'; i++) {
         if(ones[i] == cam[0]) {
            checkThisLoop = 1;
            break;
         }
     }
     if(checkThisLoop == 1) {
         printf("Compare notes");
     }else {
         printf("No such luck");
     }
}
void Divisible() {
    int ones ;
    char divWords[10] = {0};
    scanf("%d", &ones);
    while (scanf("%s", divWords) == 1) 
    {
        if(ones % atoi(divWords) == 0 ) {
            printf("divisible by all");
            break;
        }else {
            printf("not divisible by all");
            break;
        }
    }
}
unsigned solution(const char *stones) {

    //  <----  hajime!
   unsigned un = 0;
   for(int i = 0;  i < strlen(stones)-1; i++) {
       if(stones[i] == stones[i + 1]) {
           un++;
       }
   }
   return un; 

   /*   output
    printf("\n result: %u", solution("RGBRGBRGGB"));
    printf("\n result: %u", solution("RRRRGGGGBBBB") );
    */
}
char *trim(char *s) {
    char *ptr;
    if (!s)
        return NULL;   // handle NULL string
    if (!*s)
        return s;      // handle empty string
    for (ptr = s + strlen(s) - 1; (ptr >= s) && isspace(*ptr); --ptr);
    ptr[1] = '\0';
    return s;
}
void initials(char *name) {
    //char name[100];
    if(strlen(name) == 0) return;

    printf("%c", toupper(name[0]));

    for(int i = 0 ; i < strlen(name) - 1; i++) {
        if(name[i] == ' ') {
            printf(" ");
            printf("%c", toupper(name[i + 1]));
        }
    }
}
 
char *substring(char *string, int position, int length)
{
   char *p;
   int c;
 
   p = malloc(length+1);
   
   if (p == NULL)
   {
      printf("Unable to allocate memory.\n");
      exit(1);
   }
 
   for (c = 0; c < length; c++)
   {
      *(p+c) = *(string+position-1);      
      string++;  
   }
 
   *(p+c) = '\0';
 
   return p;
}
int piSub() {
     char *pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337";
     int n;
     scanf("%d", &n);
     printf("%c", pi[n+1]);

}
int setPiN() {
      //double pi = 3.141592653589793;
    int n;
    scanf("%d", &n);
    double pi = 2 * acos(0.0);
    printf("%.*lf\n", n, pi); 

}
int sentencePalindrome(char *string){
    int k = 0, c;
    string = malloc(sizeof(char*));
    if(string != NULL) {
        for(int i = 0; i < 4; i++)
        {
            scanf("%s", string);
            string[i] = toupper(string[i]);
            c = strlen(string);
            while(k <= c) {
                if(!(string[k] >= 'A' && string[k] <= 'Z')) 
                    k++;
                else if(!(string[c] >= 'A' && string[c] <= 'Z')) {
                    c--;
                }
                else if(string[k] == string[c]){
                    k++;
                    c--;           
                }else {
                    return 0;
                }
            }
        }
    }else {
        printf("NULL");
    }
    return 1;
}

int func(int n) {
    int r = 0;
    for (int i = 0; i < n; i++ ) {
        for(int j = 0; j < n ; j++) {
            for(int k = 0; k < n; k++) {
                r = r + (n + 1) / 2;
                //printf("%d", r);
            }
        }
    }
    return r;
}
void cmyktorgb(float c, float m, float y, float k) {
    float r = 255 * (1 - c) * (1 - k);
    float g = 255 * (1 - m) * (1 - k);
    float b = 255 * (1 - y) * (1 - k);
    printf("%.0f,%.0f,%.0f", r , g , b);



    /*input 
    

    float c , m , y, k;
    scanf("%f %f %f %f", &c, &m, &y, &k);
    cmyktorgb(c, m, y, k);
    
    */

}
int Q(int n) {
    return n > 1 ? Q(1)  : n +  (Q(n - Q(n - 1)) + Q(n - Q(n  - 2)));
//     int r[n+ 1];
//    r[0]=0;
//    r[1]=1;
//    r[2]=1;
//    for(int i = 3; i < (n + 1); i++) {
//        r[i] = 0;
//        r[i] += (r[i - r[i - 1]] + r[i - r[i - 2]]);
//    }
//    return r[n];
}
// main here =)
int main(int argc, char const *argv[])
{
    
    return 0;
}
void VowelCounter() {
    char word[100];
    fgets(word, 100, stdin);
    int v = 0;
    for(int i = 0; i < word[i] != '\0'; i++) {
        if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' 
                || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' ||
                word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
                    v++;
         }
    }
    printf("%d", v);

}
void ZipCodeValidator() {
   char zipCode[10];
    int flag = 0;
    scanf("%s", zipCode);
    for(int i = 0; i < strlen(zipCode); i++) {
        if(zipCode[i] == ' ' || strlen(zipCode) == 5 ){
            flag = 1;
        }if(isalpha(zipCode[i])) {
            flag = 0;
        }
    }   
    if(strlen(zipCode) == 5 && flag == 1) {
        printf("true");
    }else {
        printf("false");
    }
}
void EvenNumber() {
    char str[100];
    fgets(str, 100, stdin);
    for(int i = 0; i < strlen(str); i++){
         if(atoi(&str[i]) % 2 == 0) {
            printf("%c", str[i]);
         }
    } 
}
void CarrotCake() {
    for(int i = 0; i < 2; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a % b <= 7 ) {
            printf("I need to buy %d more", 7 - (a % b));
            break;
        }else {
            printf("Cake Time");
            break;
        }
    }
}
void SnapCrackleAndPop(){
    for(int i = 0; i < 6; i++)
    {
        int n;
        scanf("%d", &n);
        if(n % 3 == 0) {
            printf("Pop ");
        }else if(n % 2 == 0) {
            printf("Crackle ");
        }else {
            printf("Snap ");
        }
    }
}
void Neverland() {
    int a, b;
    scanf("%d %d ", &a,&b);
    printf("My twin is %d years old and they are %d years older than me", a + b, b);
 
}
void EasterEggs() {
    int a, b, c;
    scanf("%d %d %d", &a,&b, &c);
    if(b + c >= a) {
        printf("Candy Time");
    }else {
        printf("Keep Hunting");
    }
}
void DuctTape() {
    
    int a = 7;
    int b = 4;
    int c = (a * b) * 2; 
    printf("%0.0f", ceil((double)c/10));
}
