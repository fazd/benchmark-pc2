import java.util.*;
import java.io.*;

public class leerArchivo{
    public static void main(String[] args) throws IOException { 
        double in = System.currentTimeMillis();
        File f = new File("1M.txt");
        Scanner scan = new Scanner(f);
        int n = 1000*1000;
        for(int i = 0; i < n; i++){
            String s = scan.nextLine();
            
        }
        double tot = (System.currentTimeMillis()- in)/1000.0;
        System.out.println(tot);
    }
}