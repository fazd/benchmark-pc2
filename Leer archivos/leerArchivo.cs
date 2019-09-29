using System;
using System.IO;  

namespace Prueba{
    class MainClass{
        public static void Main(String[] args){
            DateTime currentDate = DateTime.Now;
            long elapsedTicks = currentDate.Ticks;
            TimeSpan elapsedSpan = new TimeSpan(elapsedTicks);
            String[] lines = File.ReadAllLines("1M.txt"); ; 
            DateTime currentDate2 = DateTime.Now;
            long el2 = currentDate2.Ticks;
            elapsedSpan = new TimeSpan(el2- elapsedTicks);
            
            Console.WriteLine(elapsedSpan.TotalSeconds);

        }
    }
}