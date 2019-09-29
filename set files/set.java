import java.util.*;
import java.io.*;

public class set{
    public static void main(String[] args) throws IOException { 
        File f = new File("vector104.txt");
        Scanner scan = new Scanner(f);
        int n = 10*1000;
        int v[] = new int [n];
        double in = System.currentTimeMillis();
        Set<Integer> hash_Set = new HashSet<Integer>(); 
        for(int i = 0; i < n; i++){
            String s = scan.nextLine();
            hash_Set.add(Integer.parseInt(s));
        }
        double tot = (System.currentTimeMillis()- in)/1000.0;
        System.out.println(tot);
    }
}