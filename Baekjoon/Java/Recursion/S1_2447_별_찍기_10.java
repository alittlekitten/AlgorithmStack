import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	static char[][] arr;
	static int N;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		N = Integer.parseInt(br.readLine());
		arr = new char[N][N];
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				arr[i][j] = ' ';
			}
		}
		star(0, 0, N);
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				sb.append(arr[i][j]);
			}
			sb.append('\n');
		}
		System.out.println(sb);
	}

	private static void star(int x, int y, int size) {
		if (size == 1) {
			arr[x][y] = '*';
		}
		else {
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					if(!(i == 1 && j == 1)) star(x+i*size/3, y+j*size/3, size/3);
				}
			}
		}
	}
}
