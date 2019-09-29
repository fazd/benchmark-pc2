import java.util.*;
import java.io.*;

public class sorting{
    public static void main(String[] args) throws IOException { 
        File f = new File("vector105.txt");
        Scanner scan = new Scanner(f);
        int n = 100*1000;
        int v[] = new int [n];
        for(int i = 0; i < n; i++){
            String s = scan.nextLine();
            v[i] = Integer.parseInt(s);
        }
        double in = System.currentTimeMillis();
        Arrays.sort(v);
        double tot = (System.currentTimeMillis()- in)/1000.0;
        System.out.println(tot);
    }
}