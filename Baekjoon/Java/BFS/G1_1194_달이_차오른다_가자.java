import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

class Pos {
	int r, c, w, keys;
	
	public Pos(int r, int c, int w, int keys) {
		super();
		this.r = r;
		this.c = c;
		this.w = w;
		this.keys = keys;
	}
	
}

public class Main {
	static int n, m, sr, sc;
	static char arr[][];
	static boolean v[][][]; // 방문 체크 (열쇠를 얻으면 초기화해야함)
	static StringTokenizer st;
	static int dr[] = {1, 0, -1, 0};
	static int dc[] = {0, 1, 0 ,-1};
	static Queue<Pos> q = new LinkedList<>();

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		st = new StringTokenizer(br.readLine());
		n = Integer.parseInt(st.nextToken());
		m = Integer.parseInt(st.nextToken());
		arr = new char[n][m];
		v = new boolean[n][m][64];
		
		for (int i = 0; i < n; ++i) {
			arr[i] = br.readLine().toCharArray();
			for (int j = 0; j < m; ++j) {
				if (arr[i][j] == '0') {
					sr = i;
					sc = j;
				}
			}
		}
		
		q.add(new Pos(sr, sc, 0, 0));
		v[sr][sc][0] = true;
		
		System.out.println(bfs());
	}

	private static int bfs() {
		while(!q.isEmpty()) {
			Pos tmp = q.poll();
			int r = tmp.r;
			int c = tmp.c;
			int w = tmp.w;
			int keys = tmp.keys;
			
			if (arr[r][c] == '1') return w;
			
			for (int i = 0; i < 4; ++i) {
				int rr = tmp.r + dr[i];
				int cc = tmp.c + dc[i];
				
				if(rr >= 0 && rr < n && cc >= 0 && cc < m && !v[rr][cc][keys]) {
					// key와 관련없는 케이스
					if (arr[rr][cc] == '0' || arr[rr][cc] == '1' || arr[rr][cc] == '.') {
						q.add(new Pos(rr, cc, w+1, keys));
						v[rr][cc][keys] = true;
					}
					// key줍줍 (중복처리 필요)
					else if (arr[rr][cc] >= 'a' && arr[rr][cc] <= 'f') {
						if ((1 << (arr[rr][cc] - 'a') & keys) > 0) {
							q.add(new Pos(rr, cc, w+1, keys));
							v[rr][cc][keys] = true;
						}
						else {
							q.add(new Pos(rr, cc, w+1, keys + (1 << arr[rr][cc] - 'a')));
							v[rr][cc][keys + (1 << (arr[rr][cc] - 'a'))] = true;
						}
						
					}
					// 문만남(비트마스킹된 키를 이용해서 문열기)
					else if (arr[rr][cc] >= 'A' && arr[rr][cc] <= 'F'){
						if ((1 << (arr[rr][cc] - 'A') & keys) > 0) {
							q.add(new Pos(rr, cc, w+1, keys));
							v[rr][cc][keys] = true;
						}
					}
				}
			}
		}
		return -1;
	}
}
