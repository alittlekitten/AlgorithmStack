import java.util.Scanner;

public class Main {
	
	static int N;
	static int[][] arr;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		arr = new int[N][N];
		for (int i = 0; i < N; ++i) {
			String s = sc.next();
			char[] cs = s.toCharArray();
			for (int j = 0; j < N; ++j) {
				arr[i][j] = cs[j] - '0';
			}
		}
		dfs(0, 0, N);
	}

	private static void dfs(int r, int c, int size) {
		boolean chk = true;
		int num = arr[r][c];
		for (int i = r; i < r + size; ++i) {
			for (int j = c; j < c + size; ++j) {
				if (arr[i][j] != num) {
					chk = false;
					break;
				}
			}
			if(!chk) break;
		}
		if (!chk) {
			System.out.print("(");
			dfs(r, c, size/2);
			dfs(r, c + size/2, size/2);
			dfs(r + size/2, c, size/2);
			dfs(r + size/2, c + size/2, size/2);
			System.out.print(")");
		}
		else System.out.print(num);
		
	}
}
