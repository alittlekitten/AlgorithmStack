import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	static int tc;
	static int n;
	static boolean chk[];
	static int conv[][];

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		tc = sc.nextInt();
		for (int t = 0; t < tc; ++t) {
			n = sc.nextInt();
			String ans = "sad";
			chk = new boolean[n+2];
			conv = new int[n+2][2];
			for (int i = 0; i < n + 2; ++i) {
				int tmp1 = sc.nextInt();
				int tmp2 = sc.nextInt();
				conv[i] = new int[] {tmp1, tmp2};
			}
			
			Queue<int[]> q = new LinkedList<>();
			q.add(conv[0]);
			chk[0] = true;
			
			while(!q.isEmpty()) {
				int[] rc = q.poll();
				int r = rc[0];
				int c = rc[1];
				if (r == conv[n+1][0] && c == conv[n+1][1]) {
					ans = "happy";
					break;
				}
				for (int i = 1; i < n+2; ++i) {
					if (Math.abs(r-conv[i][0]) + Math.abs(c-conv[i][1]) <= 1000 && !chk[i]) {
						q.add(conv[i]);
						chk[i] = true;
					}
				}
			}			
			System.out.println(ans);
		}
	}
}
