import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	
	static class Xy {
		int x, y, cnt;
		Xy(int x, int y, int cnt){
			this.x = x;
			this.y = y;
			this.cnt = cnt;
		}
		
	}
	
	static int[][] arr;
	static int M, N;
	static int[] dr = {-1, 0, 1, 0};
	static int[] dc = {0, 1, 0, -1};
	static int max = 0;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		M = Integer.parseInt(st.nextToken());
		N = Integer.parseInt(st.nextToken());
		arr = new int[N][M];
		Deque<Xy> dq = new ArrayDeque<>();
		
		for (int i = 0; i < N; ++i) {
			st = new StringTokenizer(br.readLine());
			for (int j = 0; j < M; ++j) {
				arr[i][j] = Integer.parseInt(st.nextToken());
				if (arr[i][j] == 1) {
					dq.push(new Xy(i, j, 0));
				}
			}
		}
		while (!dq.isEmpty()) {
			Xy tmp = dq.poll();
			int oldr = tmp.x;
			int oldc = tmp.y;
			int ccnt = tmp.cnt;
			for (int i = 0; i < 4; ++i) {
				int rr = oldr + dr[i];
				int cc = oldc + dc[i];
				if (chk(rr, cc) && arr[rr][cc] == 0) {
					dq.add(new Xy(rr, cc, ccnt+1));
					arr[rr][cc] = 1;
					max = Math.max(ccnt+1, max);
				}
			}
		}
		
		boolean chk = false;
		
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				if (arr[i][j] == 0) {
					chk = true;
					break;
				}
			}
		}
		if (chk == true) System.out.println(-1);
		else System.out.println(max);
	}

	private static boolean chk(int rr, int cc) {
		if (rr < 0 || rr >= N || cc < 0 || cc >= M) return false;
		return true;
	}

}
