import java.util.*;
import java.io.*;

public class generarArchivo{
    public static void main(String[] args) throws IOException { 
        double in = System.currentTimeMillis();
        File f = new File("10M.txt");
        FileWriter fw = new FileWriter(f);
        int n = 10000*1000;
        for(int i = 0; i < n; i++){
            fw.write("line"+i+"\n");
            
        }
        fw.close();
        double tot = (System.currentTimeMillis()- in)/1000.0;
        System.out.println(tot);
    }
}