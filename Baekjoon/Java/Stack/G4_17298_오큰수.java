import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		Stack<Integer> s = new Stack<>();
		int N = Integer.parseInt(br.readLine());
		int[] arr = new int[N];
		int[] ans = new int[N];
		StringTokenizer st = new StringTokenizer(br.readLine());
		for (int i = 0; i < N; ++i) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		
		for (int i = N-1; i >= 0; --i) {
			while(true) {
				if(!s.isEmpty() && arr[i] >= s.peek()) s.pop();
				else break;
			}
			if (s.isEmpty()) ans[i] = -1;
			else ans[i] = s.peek();
			s.add(arr[i]);
		}
		
		for (int i = 0; i < N; ++i) {
			sb.append(ans[i] + " ");
		}
		
		System.out.println(sb);
	}
}
