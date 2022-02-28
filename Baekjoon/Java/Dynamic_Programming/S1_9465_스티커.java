import java.util.Scanner;

public class Main {
	static int[][] dp;
	static int[][] arr;
	static int T;
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		T = sc.nextInt();
		for (int t = 1; t <= T; ++t) {
			int n = sc.nextInt();
			dp = new int[2][n];
			arr = new int[2][n];
			for (int i = 0; i < 2; ++i) {
				for (int j = 0; j < n; ++j) {
					arr[i][j] = sc.nextInt();
				}
			}
			
			if (n == 1) System.out.println(Math.max(arr[0][0], arr[1][0]));
			
			else {
				// dp체크
				dp[0][0] = arr[0][0];
				dp[1][0] = arr[1][0];
				dp[0][1] = arr[1][0] + arr[0][1];
				dp[1][1] = arr[0][0] + arr[1][1];
				
				for (int i = 2; i < n; ++i) {
					dp[0][i] = Math.max(dp[0][i-2], dp[1][i-2]);
					dp[0][i] = Math.max(dp[0][i], dp[1][i-1])+ arr[0][i];
					dp[1][i] = Math.max(dp[1][i-2], dp[0][i-2]);
					dp[1][i] = Math.max(dp[1][i], dp[0][i-1])+ arr[1][i];
				}
				
				System.out.println(Math.max(dp[0][n-1], dp[1][n-1]));
			}
			
		}
	}

}
