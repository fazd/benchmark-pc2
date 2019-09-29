using System;

namespace Prueba{
    class MainClass{
        public static void Main(String[] args){
            int n = 10000*1000;
            DateTime currentDate = DateTime.Now;
            long elapsedTicks = currentDate.Ticks;
            TimeSpan elapsedSpan = new TimeSpan(elapsedTicks);
            String[] lines = new String [n]; 
            for (int i = 0; i < n; i++)
            {
                lines[i] = "line"+i;
            }
            System.IO.File.WriteAllLines("10M.txt", lines);
            DateTime currentDate2 = DateTime.Now;
            long el2 = currentDate2.Ticks;
            elapsedSpan = new TimeSpan(el2- elapsedTicks);
            
            Console.WriteLine(elapsedSpan.TotalSeconds);

        }
    }
}