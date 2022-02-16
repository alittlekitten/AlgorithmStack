import java.util.Scanner;

public class Main {
	
	static int N, M;
	static int [] nums;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		nums = new int[N];
		
		// 조합
		comb(0, 1);
		
	}

	private static void comb(int cnt, int start) {
		if (cnt == M){
			for (int i = 0; i < N; ++i) {
				if(nums[i] != 0) System.out.print(nums[i] + " ");
			}
			System.out.println();
			return;
		}
		for (int i = start; i <= N; ++i) {
			nums[cnt] = i;
			comb(cnt+1, i+1);
		}
	}
}
