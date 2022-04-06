import java.util.*;

public class Main {

	static int n;
	static int population[];
	static boolean arr[][];
	static boolean gu[];
	static int minValue = 1001;
	static int adv = -1; // gu[1]과 다른 요소 찾기
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		population = new int[n+1];
		for (int i = 1; i <= n; ++i) {
			population[i] = sc.nextInt();
		}
		
		arr = new boolean[n+1][n+1];
		for (int i = 1; i <= n; ++i) {
			int tmp = sc.nextInt();
			for (int j = 0; j < tmp; ++j) {
				int tmp2 = sc.nextInt();
				arr[i][tmp2] = true;
				arr[tmp2][i] = true;
			}
		}
		subset();
		
		if (minValue == 1001) System.out.println(-1);
		else System.out.println(minValue);
	}
	
	private static void subset() {
		for (int i = 1; i < ((1 << n) -1); ++i){
			gu = new boolean[n+1];
			for (int j = 0; j < n; ++j) {
				if ((i & 1 << j) != 0) {
					gu[j] = true;
				}
			}
			solve();
		}
			
		
	}
	private static void solve() {
		boolean chk[] = new boolean[n+1];
		Queue<Integer> q = new LinkedList<>();
		q.add(1);
		chk[1] = true;
		while(!q.isEmpty()) {
			int tmp = q.poll();
			for (int i = 1; i <= n; ++i) {
				if(arr[i][tmp] && !chk[i] && gu[i] == gu[tmp]) {
					chk[i] = true;
					q.add(i);
				}
			}
		}
		
		for (int i = 2; i <= n; ++i) {
			if (gu[i] != gu[1]) {
				q.add(i);
				chk[i] = true;
				break;
			}
		}
		
		while(!q.isEmpty()) {
			int tmp = q.poll();
			for (int i = 1; i <= n; ++i) {
				if(arr[i][tmp] && !chk[i] && gu[i] == gu[tmp]) {
					chk[i] = true;
					q.add(i);
				}
			}
		}
		
		boolean finchk = true;
		for (int i = 1; i <= n; ++i) {
			if (!chk[i]) {
				finchk = false;
				break;
			}
		}
		
		if (finchk) {
			int one = 0;
			int two = 0;
			for (int i = 1; i <= n; ++i) {
				if (gu[i]) one += population[i];
				else two += population[i];
			}
			minValue = Math.min(minValue, Math.abs(one - two));
		}
	}
}
