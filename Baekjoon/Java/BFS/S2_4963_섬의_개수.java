import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	
	static int W, H;
	static int[][] map;
	static int[] dr = {-1, -1, 0, 1, 1, 1, 0, -1};
	static int[] dc = {0, 1, 1, 1, 0, -1, -1, -1};

	public static void main(String[] args) {
		Scanner scann = new Scanner(System.in);
		
		while(true) {
			W = scann.nextInt();
			H = scann.nextInt();
			if (W == 0 && H == 0) break;
			
			map = new int[H][W];
			for (int i = 0; i < H; ++i) {
				for (int j = 0; j < W; ++j) {
					map[i][j] = scann.nextInt();
				}
			}
			
			int cnt = 0;
			for (int i = 0; i < H; ++i) {
				for (int j = 0; j < W; ++j) {
					if(map[i][j] == 1) {
						cnt++;
						bfs(i,j, cnt+1); //(i,j)에서 8방 이동 시작
					}
				}
			}
			
			System.out.println(cnt);
		}
		
	}

	// 1로 연결된 지점을 모두 연결 -> 1이면 ㄱㄱ
	// 2그룹 -> 3그룹 -> 4그룹 (1부터 시작하지 않는 이유는 처음에 1과 0으로 섬의 유무를 구분하기 때문)
	private static void bfs(int r, int c, int g) {
		Queue<int[]>q = new LinkedList<>();
		q.offer(new int[] {r,c});
		map[r][c] = g;
		// 비지 않았다면
		while(!q.isEmpty()) {
			int[] tmp = q.poll();
			int nr = tmp[0];
			int nc = tmp[1];
			for (int i = 0; i < 8; ++i) {
				int rr = nr+dr[i];
				int cc = nc+dc[i];
				if (check(rr, cc) && map[rr][cc] == 1) {
					q.offer(new int[] {rr,cc});
					map[rr][cc] = g;
				}
			}
		}
	}

	private static boolean check(int rr, int cc) {

		return rr>=0 && rr < H && cc >= 0 && cc < W;
	}

}
