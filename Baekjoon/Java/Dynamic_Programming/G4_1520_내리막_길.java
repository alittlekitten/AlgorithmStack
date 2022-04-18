import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
  // 1520 내리막길
  // DP + DFS
	static StringTokenizer st;
	static int tc;
	static int m, n;
	static int arr[][];
	static int dp[][];
	static int dr[] = {1, 0, -1, 0};
	static int dc[] = {0, 1, 0, -1};
	static int ans;
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));      
        st = new StringTokenizer(br.readLine());
        m = Integer.parseInt(st.nextToken());
        n = Integer.parseInt(st.nextToken());
        arr = new int[m][n];
        dp = new int[m][n];
        ans = 0;

        // dp배열 초기화
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                dp[i][j] = -1;
            }
        }

        for (int i = 0; i < m; ++i) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; ++j) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        
        dp[m-1][n-1] = 1; // 마지막은 체크할 필요 없으니 무조건 1
        System.out.println(dfs(0,0));
	}

	private static int dfs(int r, int c) {
		if (dp[r][c] != -1) return dp[r][c]; // 한번 체크했으면 넘어가기
		dp[r][c] = 0;
		for (int i = 0; i < 4; ++i) {
			int rr = r + dr[i];
			int cc = c + dc[i];
			if (rr < 0 || rr >= m || cc < 0 || cc >= n) continue;
			if (arr[r][c] > arr[rr][cc]) dp[r][c] += dfs(rr, cc);
		}
		return dp[r][c]; // 체크하기
	}
}
