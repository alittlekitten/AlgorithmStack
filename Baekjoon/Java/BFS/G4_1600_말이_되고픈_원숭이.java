import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Monkey {
	int r;
	int c;
	int t;
	int k;

	Monkey(int r, int c, int t, int k) {
		this.r = r;
		this.c = c;
		this.t = t;
		this.k = k;
	}
}

public class Main {
	static int k, w, h;
	static int arr[][];
	static int dr[] = {0, 1, 0 ,-1};
	static int dc[] = {1, 0, -1, 0};
	static int hr[] = {-2,-2,2,2,1,-1,1,-1};
	static int hc[] = {1,-1,1,-1,2,2,-2,-2};
	static int ans = -1;
	static int ansCnt = 0;
	static boolean chk[][][];
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		k = sc.nextInt();
		w = sc.nextInt();
		h = sc.nextInt();
		
		arr = new int[h][w];
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				arr[i][j] = sc.nextInt();
			}
		}
		Queue<Monkey> q = new LinkedList<>();
		boolean chk[][][] = new boolean[h][w][k + 2]; // 말처럼 뛸 때와 그냥 갈 때의 chk를 구분해야한다
		chk[0][0][0] = true;
		q.add(new Monkey(0, 0, 0, 0));
		while(!q.isEmpty()) {
			int rr = q.peek().r;
			int cc = q.peek().c;
			int tt = q.peek().t;
			int kk = q.peek().k;
			q.poll();
			
			// ans를 넘어가는 시간이 걸리면 끝내기
			if (ans != -1 && ans < tt) break;
			
			// 정해진 말처럼 뛰는 횟수를 초과하면 바로 통과
			if (kk > k) continue;
			
			// 도착 여부 체크
			if (rr == h-1 && cc == w-1 && kk <= k && ans == -1) {
				ans = tt;
				ansCnt++;
				continue;
			}
			else if (rr == h-1 && cc == w-1 && kk <= k && ans == tt) {
				ansCnt++;
				continue;
			}
			
			for (int i = 0; i < 4; ++i) {
				int rrr = rr + dr[i];
				int ccc = cc + dc[i];
				if (rrr < 0 || rrr >= h || ccc < 0 || ccc >= w) continue;
				if (!chk[rrr][ccc][kk] && arr[rrr][ccc] == 0) {
					chk[rrr][ccc][kk] = true;
					q.add(new Monkey(rrr, ccc, tt + 1, kk));
				}
			}
			for (int i = 0; i < 8; ++i) {
				int rrr = rr + hr[i];
				int ccc = cc + hc[i];
				if (rrr < 0 || rrr >= h || ccc < 0 || ccc >= w) continue;
				if (!chk[rrr][ccc][kk + 1] && arr[rrr][ccc] == 0) {
					chk[rrr][ccc][kk + 1] = true;
					q.add(new Monkey(rrr, ccc, tt + 1, kk + 1));
				}
			}
		}
		System.out.println(ans);
	}

}
