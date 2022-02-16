import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		
		BigInteger ret = new BigInteger("1");
		
		// nCm -> n!/((n-m!)*m!)
		if (m > n-m) m = n-m;
		
		for (int i = 1; i <= m; ++i) {
			ret = ret.multiply(BigInteger.valueOf(n-i+1));
			ret = ret.divide(BigInteger.valueOf(i));
		}
		
		System.out.println(ret);
	}

}
