import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static int N;
	static int [][] arr;
	
	public static void main(String[] args) throws IOException {
        // 비트마스크 버전
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		arr = new int[N][2];
		int diff = 1000000000;
		for (int i = 0; i < N; ++i) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			arr[i][0] = Integer.parseInt(st.nextToken());
			arr[i][1] = Integer.parseInt(st.nextToken());
		}
		for (int i = 1; i < (1<<N); ++i ) { // 재로를 버무려서 만드는 가지수는 1024 - 1개 (공집합 제외)
			int ts = 1;
			int tb = 0;
			for (int j = 0; j < N; ++j) { // 이진수에서 1은 넣는거 0은 안넣는거
				if((i & (1<<j)) > 0) { // 넣는게 걸리면 곱하고 더해줌 (전체 결과값의 최대값이 10억이기 때문에 int써도됨)
					ts *= arr[j][0];
					tb += arr[j][1];
				}
			}
				
			diff = Math.min(diff, Math.abs(ts-tb)); // 차이 최솟값 저장
		}
		System.out.println(diff);
	}
}
