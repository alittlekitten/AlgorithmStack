import java.util.Scanner;

public class Main {

	static int[] dr = {0, 1, 0, -1};
	static int[] dc = {1, 0, -1, 0};
	static int m;
	static int n;
	static int[][] arr;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();
		int r = sc.nextInt();
		int min = Math.min(m, n);
		arr = new int [n][m];
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				arr[i][j] = sc.nextInt();
			}
		}
		for (int i = 0; i < r; ++i) {
			rotate(min);
		}
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
	}

	private static void rotate(int min) {
		for (int i = 0; i < min/2; ++i) {
			int r = i;
			int c = i;
			int tmp = arr[i][i];
			int d = 0;
			
			while(d < 4) {
				int cr = r + dr[d];
				int cc = c + dc[d];
				if (i <= cr && cr < n - i && i <= cc && cc < m - i) {
					arr[r][c] = arr[cr][cc];
					r = cr;
					c = cc;
				} else d++;
			}
			
			arr[i+1][i] = tmp;
		}
	}
}
