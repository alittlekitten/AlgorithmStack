import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static int N, M;
	static int[] arr;
	static boolean[][] chk;

	public static void main(String[] args) throws IOException {
		// dp
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		arr = new int[N+1];
		chk = new boolean[N+1][N+1];
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		for (int i = 1; i <= N; ++i) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		
		// 맨 바깥쪽이 같고, 안쪽이 팰린드롬이면 팰린드롬 수라고 볼 수 있다.
		for (int i = 1; i <= N; ++i) {
			chk[i][i] = true;
		}
		for (int i = 1; i < N; ++i) {
			if (arr[i] == arr[i+1]) chk[i][i+1] = true;
		}
		
		M = Integer.parseInt(br.readLine());
		StringBuilder sb = new StringBuilder();
		for (int i = 0; i < M; ++i) {
			st = new StringTokenizer(br.readLine());
			int s = Integer.parseInt(st.nextToken());
			int e = Integer.parseInt(st.nextToken());
			if (isPalindrome(s, e)) sb.append("1\n");
			else sb.append("0\n");
		}
		
		System.out.println(sb);
	}

	private static boolean isPalindrome(int s, int e) {
		if (chk[s][e] == true) return true;
		else if (arr[s] == arr[e] && isPalindrome(s+1, e-1)) {
			chk[s][e] = true;
			return true;
		}
		else return false;
	}

}
