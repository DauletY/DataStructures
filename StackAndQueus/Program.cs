using System;
using System.Collections;
using System.Collections.Generic;
namespace Console07
{
    class Program
    {
        static void Main(string[] args)
        {
            
            DequeT<int> tq = new DequeT<int>();

            while  (true) {
                Console.WriteLine(" Menu ");
                Console.WriteLine("1) Add first ");
                Console.WriteLine("2) Add last ");
                Console.WriteLine("3) Remove first ");
                Console.WriteLine("4) Remove last ");
                Console.WriteLine("5) Show everthing element ");
                int n = int.Parse(Console.ReadLine());
                switch(n) {
                    case 0:
                        bool empty = tq.IsEmpty;
                        if(!empty) {
                            Console.WriteLine("Empty deque!");
                        }else {
                            Console.WriteLine("->");
                        }
                    break;
                    case 1:
                    Console.Write(" n1 = ");
                    int n1 = int.Parse(Console.ReadLine());
                        tq.AddFirst(n1);
                        foreach(int item in tq) {
                            Console.Write("[{0}] , ", item);
                        }
                        break;
                    case 2:
                    Console.Write(" n2 = ");
                    int n2 = int.Parse(Console.ReadLine());
                        tq.AddFirst(n2);
                        foreach(int item in tq) {
                            Console.Write("[{0}] , ", item);
                        }
                        break;
                    case 3:
                        if(tq.IsEmpty) {
                            Console.WriteLine("Impty element");
                            return;
                        }else {
                                    tq.SetT = tq.RemoveFirst();
                                  Console.Write("Removed first {0} ," , tq.SetT);
                        }
                       break;
                    case 4:
                       if(tq.IsEmpty) {
                            Console.WriteLine("Impty element");
                            return;
                        }else {
                             tq.SetT = tq.RemoveFirst();
                             Console.Write("Removed first {0} ," , tq.SetT);
                        }
                       break;
                    case 5:
                        for(int i = 0; i < tq.Count; i++) {
                            Console.WriteLine("Element: {0}", i);
                        }
                        break;
                    default:
                        Console.Error.WriteLine("Try again!");
                        break;
                }
                Console.WriteLine("");
            }
        }
    }
     public class DequeT<T> : IEnumerable<T>  //  қосарланған тізім
    {
        private T t;
        
        public T SetT { get => t; set => t=value;}
        DoublyNode<T> head; // бас / бірінші элемент
        DoublyNode<T> tail; //   соңғы / құйрық элементі
        int count;  //  тізімдегі элементтер саны
 
        //   элементті қосу
        //Кезектің басына қосу үшін ауыспалы бас сілтемесін қайта орнатыңыз:
        public void AddLast(T data)
        {
            DoublyNode<T> node = new DoublyNode<T>(data);
 
            if (head == null)
                head = node;
            else
            {
                tail.Next = node;
                node.Previous = tail;
            }
            tail = node;
            count++;
        }
        //Элементті деканың соңына қосу айнымалы tail ұқсас қайта орнатуды тудырады:
        public void AddFirst(T data)
        {
            DoublyNode<T> node = new DoublyNode<T>(data);
            DoublyNode<T> temp = head;
            node.Next = temp;
            head = node;
            if (count == 0)
                tail = head;
            else
                temp.Previous = node;
            count++;
        }
        // Дека басынан жойылған кезде бірінші элементке сілтемені қайта орнату керек:
        public T RemoveFirst()
        {
            if (count == 0)
                throw new InvalidOperationException();
            T output = head.Data;
            if(count==1)
            {
                head = tail = null;
            }
            else
            {
                head = head.Next;
                head.Previous = null;
            }
            count--;
            return output;
        }
        // Соңғы элементті алып тастағанда, айнымалы құйрық соңғы элементке қайта орнатылады:
        public T RemoveLast()
        {
            if (count == 0)
                throw new InvalidOperationException();
            T output = tail.Data;
            if (count == 1)
            {
                head = tail = null;
            }
            else
            {
                tail = tail.Previous;
                tail.Next = null;
            }
            count--;
            return output;
        }
        public T First
        {
            get
            {
                if (IsEmpty)
                    throw new InvalidOperationException();
                return head.Data;
            }
        }
        public T Last
        {
            get
            {
                if (IsEmpty)
                    throw new InvalidOperationException();
                return tail.Data;
            }
        }
 
        public int Count { get { return count; } }
        public bool IsEmpty { get { return count == 0; } }
 
        public void Clear()
        {
            head = null;
            tail = null;
            count = 0;
        }
 
        public bool Contains(T data)
        {
            DoublyNode<T> current = head;
            while (current != null)
            {
                if (current.Data.Equals(data))
                    return true;
                current = current.Next;
            }
            return false;
        }
 
        IEnumerator IEnumerable.GetEnumerator()
        {
            return ((IEnumerable)this).GetEnumerator();
        }
 
        IEnumerator<T> IEnumerable<T>.GetEnumerator()
        {
            DoublyNode<T> current = head;
            while (current != null)
            {
                yield return current.Data;
                current = current.Next;
            }
        }
    }
    public class DoublyNode<T>
    {
        public DoublyNode(T data)
        {
            Data = data;
        }
        public T Data { get; set; }
        public DoublyNode<T> Previous { get; set; }
        public DoublyNode<T> Next { get; set; }
    }
}
