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
	static boolean[] chk;
	static Xy[] viruses;
	static int[] dr = {-1, 0, 1, 0};
	static int[] dc = {0, 1, 0, -1};
	static int minTime = Integer.MAX_VALUE;
	static int virusSize = 0;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		viruses = new Xy[10];
		arr = new int[N][N];
		realarr = new int[N][N];
		chk = new boolean[10];
		int idx = 0;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				arr[i][j] = sc.nextInt();
				realarr[i][j] = arr[i][j];
				if(arr[i][j] == 2) {
					viruses[idx++] = new Xy(i, j);
					virusSize++;
				}
			}
		}
		
		active(0, 0);
		if (minTime == Integer.MAX_VALUE) System.out.println(-1);
		else System.out.println(minTime);
	}
	
	static void active (int idx, int cnt) {
		if (cnt == M) {
			bfs();
		}
		else {
			for (int i = idx; i < virusSize; ++i) {
				chk[i] = true;
				active(i+1, cnt+1);
				chk[i] = false;
			}
		}
	}

	private static void bfs() {
		// 초기화
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				arr[i][j] = -1;
			}
		}
		
		// active 바이러스 0으로 넣기
		Queue<Xy> q = new LinkedList<>();
		for (int i = 0; i < chk.length; ++i) {
			if (chk[i] == true) {
				arr[viruses[i].x][viruses[i].y] = 0;
				q.add(new Xy(viruses[i].x, viruses[i].y));
			}
		}
		
		int time = 0;
		
		while(!q.isEmpty()) {
			Xy tmp = q.poll();
			int r = tmp.x;
			int c = tmp.y;
			for (int i = 0; i < 4; ++i) {
				int rr = r + dr[i];
				int cc = c + dc[i];
				if (rr < 0 || rr >= N || cc < 0 || cc >= N) continue;
				if (arr[rr][cc] == -1 && realarr[rr][cc] != 1) {
					arr[rr][cc] = arr[r][c] + 1;
					q.add(new Xy(rr, cc));
					if (time < arr[rr][cc]) time = arr[rr][cc];
				}
			}
		}
		
		// 전부 감염됐는지 확인
		boolean isInfected = true;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				if (arr[i][j] == -1 && realarr[i][j] != 1) isInfected = false;
			}
		}
		
		if (isInfected && minTime > time) minTime = time;
	}

}
