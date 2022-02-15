import java.util.Scanner;

public class Main {
	
	static int N;
	static int min;
	
	public static void main(String[] args) {
		Scanner scann = new Scanner(System.in);
		N = scann.nextInt();
		min = Integer.MAX_VALUE;
		for (int i = 0; i <= N/5; ++i) {
			if((N-i*5)%3 == 0) {
				min=Math.min(min, i+(N-i*5)/3);
			}
		}
		System.out.println(min==Integer.MAX_VALUE?-1:min);
	}
}
