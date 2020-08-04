using System;

namespace Solution
{
    class Program
    {
        static int SIZE = 6;
        static int[] S = new int[SIZE];
        static int top = -1;
        static void Main(string[] args)
        {
         
            while(true){
                
                int n = int.Parse(Console.ReadLine());

                switch(n) {
                    case 1:
                        PUSH(S, n);
                        break;
                    case 3:
                        PUSH(S, n);
                        break;
                    case 4:
                        PUSH(S, n);
                        break;
                    case 8:
                        PUSH(S, n);
                        break;
                    case 5:
                        POP(S);
                        break;
                    default:
                        EMPTY(S);
                        break;
                }
            }
        }
        static void PUSH(int[] S, int x) {
            top++;
            S[top] = x;
            Console.WriteLine("Add :" + S[top]);
        }
        static void POP(int[] S) {
            if(top == -1) {
                Console.WriteLine("Stack is underflow");
                return;
            }
            else {
                top--;
                Console.WriteLine("Delete: " + top);
            }
        }
        static bool EMPTY(int[] S) {
            Console.WriteLine("Stack is epmty!");
            return S.Length == 0 ? true : false;
        }
    }
}
