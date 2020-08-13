using System;
using System.Collections;
using System.Collections.Generic;

namespace Program_stack
{
    class MyClass<T> {
         private  Stack<T> input = new Stack<T>();
         private  Stack<T> output = new Stack<T>();
        public void Enqueue (T item) {
            Console.WriteLine($"add: {item}");
            input.Push(item);
        }
        public T Dequeue() {
            Console.WriteLine($"delete: {input.Pop()}");
            output.Push(input.Pop());
            return output.Pop();    
          
        }
    }
    class Program
    {
    
        // Explain how you can implement a queue using two stacks. What is entry work stack of opreti?
        // Екі стекті пайдаланып кезекті қалай жүзеге асыруға болады?
        static void Main(string[] args)
        {   
            MyClass<int> t = new MyClass<int>();
             t.Enqueue(3);
            t.Enqueue(9);
            t.Enqueue(34);
            t.Enqueue(78);
            t.Enqueue(1);
            t.Dequeue();
            t.Dequeue();
        }

    }
}
