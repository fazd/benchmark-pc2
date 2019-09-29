using System;
using System.IO;  

namespace Prueba{
    class MainClass{
        public static void Main(String[] args){
            String[] lines = File.ReadAllLines("vector105.txt"); ; 
            int n = 100000;
            int[] ig = new int[n];
            for(int i = 0; i < n; i++){
                ig[i] = Int32.Parse(lines[i]);
            }
            DateTime currentDate = DateTime.Now;
            long elapsedTicks = currentDate.Ticks;
            Array.Sort(ig);
            TimeSpan elapsedSpan = new TimeSpan(elapsedTicks);
            DateTime currentDate2 = DateTime.Now;
            long el2 = currentDate2.Ticks;
            elapsedSpan = new TimeSpan(el2- elapsedTicks);
            
            Console.WriteLine(elapsedSpan.TotalSeconds);

        }
    }
}