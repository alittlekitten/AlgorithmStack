import java.util.*;

public class G4_2458_키_순서 {
	static int n, m;
	static int arr[][];

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();
		
		arr = new int[n+1][n+1];
		for (int i = 0; i < m; ++i) {
			int s = sc.nextInt();
			int e = sc.nextInt();
			arr[s][e] = 1;
		}
		
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if(arr[i][j] != 1) arr[i][j] = 501;
			}
		}
		
		for (int k = 1; k <= n; ++k) {
			for (int i = 1; i <= n; ++i) {
				for (int j = 1; j <= n; ++j) {
					if (arr[i][j] > arr[i][k] + arr[k][j]) arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
		
		int cnt = 0;
		for (int i = 1; i <= n; ++i) {
			boolean chk = true;
			for (int j = 1; j <= n; ++j) {
				if (i != j && arr[i][j] == 501 && arr[j][i] == 501) {
					chk = false;
					break;
				}
			}
			if(chk) cnt++;
		}

		System.out.println(cnt);
	}
}
