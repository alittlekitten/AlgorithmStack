import java.util.Scanner;

public class Main {
	static int R, C;
	static char[][] arr;
	static boolean[] chk;
	static int[] dr = {-1, 0, 1, 0};
	static int[] dc = {0, 1, 0, -1};
	static int max = 0;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		R = sc.nextInt();
		C = sc.nextInt();
		chk = new boolean[26];
		arr = new char[R][C];
		for (int i = 0; i < R; ++i) {
			String s = sc.next();
			char[] sarr = s.toCharArray();
			for (int j = 0; j < C; ++j) {
				arr[i][j] = sarr[j];
				
			}
		}
		dfs(0, 0, 1);
		System.out.println(max);
	}

	private static void dfs(int r, int c, int cnt) {
		chk[arr[r][c]-'A'] = true; // 체크
		if (max < cnt) max = cnt;

		for (int i = 0; i < 4; ++i) {
			int rr = r+dr[i];
			int cc = c+dc[i];
			if (check(rr, cc) && arr[rr][cc] - 'A' >= 0 && arr[rr][cc] - 'A' < 26 && chk[arr[rr][cc]-'A'] == false) {
				chk[arr[rr][cc]-'A'] = true; // 체크
				dfs(rr, cc, cnt+1);
				chk[arr[rr][cc]-'A'] = false; // 체크
			}
		}

}

	private static boolean check(int rr, int cc) {

		return rr>=0 && rr < R && cc >= 0 && cc < C;
	}
}
