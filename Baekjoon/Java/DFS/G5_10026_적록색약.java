import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	static int N;
	static int[] dr = {-1, 0, 1, 0};
	static int[] dc = {0, 1, 0, -1};
	static char[][] arr;
	static boolean[][] v;
	static int cnt = 0;
	static int cnt2 = 0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		N = Integer.parseInt(br.readLine());
		arr = new char[N][N];
		for (int i = 0; i < N; ++i) {
			String s = br.readLine();
			for (int j = 0; j < N; ++j) {
				arr[i][j] = s.charAt(j);
			}
		}
		
		v = new boolean[N][N];
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				if (!v[i][j]) {
					dfs(i,j);
					cnt++;
				}
			}
		}
		
		// R을 G로 바꾸기
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				if (arr[i][j] == 'R') arr[i][j] = 'G';
			}
		}
		
		v = new boolean[N][N];
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				if (!v[i][j]) {
					dfs(i,j);
					cnt2++;
				}
			}
		}
		
		System.out.println(cnt + " " + cnt2);
		
	}
	
	public static void dfs(int r, int c){
        v[r][c] = true;
        char tmp = arr[r][c];
        for(int i = 0; i < 4; i++){
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (!chk(nr, nc)) continue;
            if (!v[nr][nc] && arr[nr][nc] == tmp) dfs(nr, nc);
        }
    }

	private static boolean chk(int nr, int nc) {
		if (nr < 0 || nr >= N || nc < 0 || nc >= N) return false;
		return true;
		
	}

}
