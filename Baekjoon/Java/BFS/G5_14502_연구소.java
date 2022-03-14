import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {

	static class Xy {
		int x, y;
		Xy(int x, int y){
			this.x = x;
			this.y = y;
		}
	}

	static int[][] arr;
	static int[][] realarr;
	static int N;
	static int M;
	static Xy[] viruses;
	static int[] dr = {-1, 0, 1, 0};
	static int[] dc = {0, 1, 0, -1};
	static int maxSecure = 0;
	static int virusSize = 0;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		viruses = new Xy[10];
		arr = new int[N][M];
		realarr = new int[N][M];
		int idx = 0;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				arr[i][j] = sc.nextInt();
				realarr[i][j] = arr[i][j];
				if(arr[i][j] == 2) {
					viruses[idx++] = new Xy(i, j);
					virusSize++;
				}
			}
		}
		
		active(0);
		System.out.println(maxSecure);
	}
	
	static void active (int cnt) {
		if (cnt == 3) {
			bfs();
		}
		else {
			for (int i = 0; i < N; ++i) {
				for (int j = 0; j < M; ++j) {
					if (realarr[i][j] == 0) {
						realarr[i][j] = 1;
						active(cnt+1);
						realarr[i][j] = 0;
					}
				}
			}
		}
	}

	private static void bfs() {
		// 초기화
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				arr[i][j] = -1;
			}
		}
		
		// active 바이러스 0으로 넣기
		Queue<Xy> q = new LinkedList<>();
		for (int i = 0; i < virusSize; ++i) {
			arr[viruses[i].x][viruses[i].y] = 0;
			q.add(new Xy(viruses[i].x, viruses[i].y));
		}
		
		int cnt = 0;
		
		while(!q.isEmpty()) {
			Xy tmp = q.poll();
			int r = tmp.x;
			int c = tmp.y;
			for (int i = 0; i < 4; ++i) {
				int rr = r + dr[i];
				int cc = c + dc[i];
				if (rr < 0 || rr >= N || cc < 0 || cc >= M) continue;
				if (arr[rr][cc] == -1 && realarr[rr][cc] == 0) {
					arr[rr][cc] = arr[r][c] + 1;
					q.add(new Xy(rr, cc));
				}
			}
		}
		
		// 안전영역 구하기
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				if(arr[i][j] == -1 && realarr[i][j] == 0) cnt++;
			}
		}
		
		if (maxSecure < cnt) maxSecure = cnt;
	}

}
