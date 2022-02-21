import java.util.*;

public class Main{
	private static Scanner in;
	
	public static boolean is_prime(int n) {
		if(n == 1)
			return false;
		if(n == 2)
			return true;
		if(n % 2 == 0)
			return false;
		for(int i = 3; i * i <= n; i += 2)
			if(n % i == 0)
				return false;
		return true;
	}
	
	public static void main(String[] ar) {
		in = new Scanner(System.in);
		//Codigo
	}
}
