import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	
	static int N, M; // N : 비밀번호 최댓값, M : 로그인 시도에 사용된 비밀번호의 개수
	static int [] arr; // 비트마스킹 배열
	static int max; // 가장 높은 안전도
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		N = Integer.parseInt(br.readLine());
		M = Integer.parseInt(br.readLine());
		max = -1;
		Queue<Integer> q = new LinkedList<Integer>();
		arr = new int [1000001]; // ㅇ
		Arrays.fill(arr, -1); // -1로 초기화
		st = new StringTokenizer(br.readLine());
		
		// 초기값 설정
		for (int i = 0; i < M; ++i) {
			int tmp = Integer.parseInt(st.nextToken());
			arr[tmp] = 0;
			q.add(tmp);
		}
		// BFS & 비트마스크
		while(!q.isEmpty()) {
			int tmp = q.poll();
			for (int i = 0; i < 20; ++i) {
				int mask = tmp^(1<<i); // poll한 것과 딱 한자리만 차이나는 친구
				if (mask <= N && arr[mask] == -1) { // N까지만 마스킹하면 된다!
					arr[mask] = arr[tmp] + 1;
					q.add(mask);
					if (max < arr[mask]) max = arr[mask];
				}
			}
		}
		
		System.out.println(max);
	}

}
