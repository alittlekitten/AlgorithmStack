import java.util.Scanner;

public class Main {
	
	static int N;
	static int[][] taste;
	static long diff;

	public static void main(String[] args) {
		Scanner scann = new Scanner(System.in);
		N = scann.nextInt();
		taste=new int[N][2];
		for (int i = 0; i < N; ++i) {
			taste[i][0] = scann.nextInt();
			taste[i][1] = scann.nextInt();
		}
		
		diff = Integer.MAX_VALUE;
		subset(0, 1, 0); // 곱이니까 1이라고 해야한다!
		System.out.println(diff);
	}

	private static void subset(int cnt, long ts, long tb) {
		if(cnt == N) {
			if(tb == 0) return;
			diff=Math.min(diff, Math.abs(ts-tb));
			return;
		}
		
		subset(cnt+1, ts * taste[cnt][0], tb + taste[cnt][1]);
		subset(cnt+1, ts, tb);
		
	}

}
