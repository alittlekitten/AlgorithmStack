import java.util.Scanner;

public class Main {

	static int [] arr;
	static boolean [] visited;
	static int N = 7;
	
	public static void main(String[] args) {
		arr = new int[9];
		visited = new boolean[9];
		Scanner sc = new Scanner(System.in);

		for (int i = 0; i < 9; ++i) {
			arr[i] = sc.nextInt();
		}
		
		comb(0, 0);
	}

	private static void comb(int cnt, int start) {
		if (cnt == 7) {
			int sum = 0;
			int tmp = 0;
			for (int i = 0; i < 9; ++i) {
				if (visited[i]) {
					sum += arr[i];
					tmp++;
				}
				if (sum == 100 && tmp == 7) {
					for (int j = 0; j < 9; ++j) {
						if (visited[j]) System.out.println(arr[j]);
					}
					return;
				}
			}
			return;
		}
		else {
			for (int i = start; i < 9; ++i) {
				visited[i] = true;
				comb(cnt+1, i+1);
				visited[i] = false;
			}
		}
	}

}
