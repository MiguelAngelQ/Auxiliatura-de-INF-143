import java.util.*;

public class Main {

	private static Scanner sc;
	
	public static int binary_serch(int v[], int n, int x) {
		int low = 0, high = n - 1;				//1					
		while(high - low > 1) {					//log(n) + 1			
			int mid = (low + high) >> 1;		//log(n) * 1
			if(v[mid] >= x) 					//log(n) * 1
				high = mid;						//log(n) * 1
			else
				low = mid;
		}
		if(v[high] == x)						//1
			return high;						//1
		return -1;							
		/*
		 T(n) = 1 + log(n) + 1 + log(n) + log(n) + log(n) + 1 + 1
		 T(n) = 4log(n) + 4
		 T(n) E O(log(n))
		 * */
	}
	
	public static void main(String[] args) {
		sc = new Scanner(System.in);
		int n = sc.nextInt();
		int v[] = new int[n];
		for(int i = 0; i < n; i++)
			v[i] = sc.nextInt();
		int x = sc.nextInt();
		System.out.println(binary_serch(v, n, x));
	}
}
