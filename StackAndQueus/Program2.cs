using System;
using System.Collections;
using System.Collections.Generic;

namespace Program_queue
{
    public class TestQueue<T> {
        T itemT = default(T);
        private Queue<T> inq = new Queue<T>();

        public void Push(T item) {
            Console.WriteLine("add element: {0} ", item);
            inq.Enqueue(item);
        }
        public T Pop() {
            T item = inq.Dequeue(); // basina kamiz 
            Console.WriteLine("Delete element {0}", item);
            if(inq.Count == 0)
                IsEmpty();
            return item ;
        }   
        public T Peek() {
            Console.WriteLine("Peek element: {0}", inq.Peek());
           return inq.Peek();
        }
        public T IsEmpty() {
            T new_T = itemT;
            Console.WriteLine("Element is empty {0}" , new_T.GetType());
            return new_T;
        }
    }
    class Program
    {

        static void Main(string[] args)
        {
            TestQueue<char> cqh = new TestQueue<char>();
            cqh.Push('A');
            cqh.Push('E');
            cqh.Pop();
            cqh.Pop();
            // ....
        }
    }
}
