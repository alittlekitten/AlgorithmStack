import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	
	static int N;
	static int[][] map;
	
	static int[] dr = {-1, 0, 1, 0};
	static int[] dc = {0, 1, 0, -1};

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		map=new int [N][N];
		ArrayList<Integer> al = new ArrayList<Integer>();
		for (int i = 0; i < N; ++i) {
			char[] cs = sc.next().toCharArray();
			for (int j = 0; j < N; ++j) {
				map[i][j] = cs[j] - '0';
			}
		}

		int cnt = 1;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				if (map[i][j] == 1) {
					al.add(dfs(i,j,cnt+1));
				}
			}
		}
		
		Collections.sort(al);
		System.out.println(al.size());
		for (int i = 0; i < al.size(); ++i) {
			System.out.println(al.get(i));
		}
		
	}

	private static int dfs(int r, int c, int k) {
		Queue<int[]> q = new LinkedList<>();
		int cnt = 1;
		q.offer(new int[] {r, c});
		map[r][c] = k;
		while(!q.isEmpty()) {
			int[] tmp = q.poll();
			int nr = tmp[0];
			int nc = tmp[1];
			for (int i = 0; i < 4; ++i) {
				int rr = nr + dr[i];
				int cc = nc + dc[i];
				if (check(rr,cc) && map[rr][cc] == 1) {
					q.offer(new int[] {rr, cc});
					map[rr][cc] = k;
					cnt++;
				}
			}
		}

		return cnt;
	}
	
	private static boolean check(int rr, int cc) {

		return rr>=0 && rr < N && cc >= 0 && cc < N;
	}

}
