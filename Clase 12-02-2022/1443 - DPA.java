import java.util.*;
 
public class Main{
    private static Scanner in;
 
    public static int sumaDeDivisores(int n) {
        int suma = 0;
        for(int i = 1; i < n; i++)
            if(n % i == 0)
                suma += i; //suma = suma + i;
        return suma;
    }
     
    public static void main(String[] args){
        in = new Scanner(System.in);
        while(in.hasNext()) {
            int x = in.nextInt();
            int res = sumaDeDivisores(x);
            if(res == x)
                System.out.println("Perfecto");
            else if(res < x)
                System.out.println("Deficiente");
            else
                System.out.println("Abundante");
        }
    }
}
 