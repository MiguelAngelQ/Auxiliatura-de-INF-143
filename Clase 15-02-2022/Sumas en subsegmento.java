import java.util.*;

public class Main {
	private static Scanner in;

	public static void main(String[] args) {
		in = new Scanner(System.in);
		int n = in.nextInt();
		int a[] = new int[n];
		for (int i = 0; i < n; i++)
			a[i] = in.nextInt();
		long acc[] = new long[n];
		acc[0] = a[0];
		for (int i = 1; i < n; i++) {
			acc[i] = a[i];
			acc[i] += acc[i - 1];
		}
		int q = in.nextInt();
		while (q-- > 0) {
			int l = in.nextInt();
			int r = in.nextInt();
			if(l == 0)
				System.out.println(acc[r]);
			else
				System.out.println(acc[r] - acc[l - 1]);
		}
	}
}
