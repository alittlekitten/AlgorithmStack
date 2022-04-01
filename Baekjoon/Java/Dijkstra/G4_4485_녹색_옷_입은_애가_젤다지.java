import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.Scanner;

class Xy implements Comparable<Xy>{
	int r, c, w;
	
	public Xy(int r, int c, int w) {
		super();
		this.r = r;
		this.c = c;
		this.w = w;
	}
	
	@Override
	public int compareTo(Xy tmp) {
		return this.w - tmp.w;
	}
}

public class Main {

	static int n;
	static int arr[][];
	static int dist[][];
	static int min;
	static int dr[] = {1, 0, -1, 0};
	static int dc[] = {0, 1, 0, -1};
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int tc = 1;
		while(true) {
			
			n = sc.nextInt();
			if (n == 0) break;
			arr = new int[n][n];
			dist = new int[n][n];
			
			// 거리 INF로 초기화
			for (int i = 0; i < n; ++i) {
				Arrays.fill(dist[i], Integer.MAX_VALUE);
			}
			
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					arr[i][j] = sc.nextInt();
				}
			}
			
			dijkstra();
			System.out.println("Problem " + tc + ": " + dist[n-1][n-1]);
			tc++;
		}
	}
	
	// 다익스트라
	private static void dijkstra() {
		dist[0][0] = arr[0][0]; // 처음은 무조건 뜯김
		PriorityQueue<Xy> pq = new PriorityQueue<>();
		pq.add(new Xy(0, 0, arr[0][0]));
		
		while(!pq.isEmpty()) {
			Xy tmp = pq.poll();
			for (int i = 0; i < 4; ++i) {
				int nr = tmp.r + dr[i];
				int nc = tmp.c + dc[i];
				
				if (!(nr < 0 || nr >= n || nc < 0 || nc >= n) && dist[nr][nc] > dist[tmp.r][tmp.c] + arr[nr][nc]) { // 거쳐가는게 더 빠르다면 거쳐가기
					dist[nr][nc] = dist[tmp.r][tmp.c] + arr[nr][nc]; // 거쳐서 이동한 최솟값으로 바꾸기
					pq.add(new Xy(nr, nc, dist[nr][nc])); // 이동한 좌표
				}
			}
		}
	}
}
