using System;

namespace QueueDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            queus m_queus = new queus(2);
            m_queus.Enquene(queus.Q, 1);
            m_queus.Enquene(queus.Q, 3);
            m_queus.Enquene(queus.Q, 8);
            m_queus.Enquene(queus.Q, 10);
            m_queus.Dequeue(queus.Q);
            m_queus.Dequeue(queus.Q);
            m_queus.Dequeue(queus.Q);
            m_queus.Dequeue(queus.Q);
            
                  m_queus.Dequeue(queus.Q);
               m_queus.Dequeue(queus.Q);
            
        }
    }
    public class queus
    {
        private int count = 0;
        private const int size = 10;
        public static  int[] Q = new int[size];

        public queus() {}
        public queus(int count)  {
            this.count = count;
        }
            

        public void Enquene(int[] Q, int x) {
            if(count == size){
                Console.WriteLine("Queue is overflow");
                return;
            }
            Q[count] = x;
   
            Console.WriteLine($"Add: {Q[count]}");
            ++count;
        }
        public int Dequeue(int[] Q) {
            int x = 0;

            if(Empty(count)) {
                Console.WriteLine("Queue Underflow ");
                return 1;
            }
            x = count;
            --count;
             Console.WriteLine($"delete: { Q[count] }");
             return x;
        }
        public bool Empty(int size) {
            Console.WriteLine("Queue is empty");
            return size == 0 ? true : false;
        }
        public void Show() {
            if(count != 0) {
                for (int i = 0; i < Q.Length; i++)
                {
                    Console.WriteLine(Q[i]);
                }
            }
        }
    }
}
