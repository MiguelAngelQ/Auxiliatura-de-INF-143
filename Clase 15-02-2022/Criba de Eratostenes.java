import java.util.*;

public class Main{
	private static Scanner in;
	public static int N = 1000000 + 10;
	public static boolean sieve[] = new boolean[N];

	public static void make_sieve() {
		for (int i = 0; i < N; i++)
			sieve[i] = true;
		sieve[0] = sieve[1] = false; // 0 y 1 no son primos
		for (int i = 2; i * i <= N; i++)
			if (sieve[i] == true)
				for (int j = i + i; j < N; j += i)
					sieve[j] = false;
		//los que quedan en true son primos
	}

	public static void main(String[] ar) {
		in = new Scanner(System.in);
		// Codigo
	}
}
