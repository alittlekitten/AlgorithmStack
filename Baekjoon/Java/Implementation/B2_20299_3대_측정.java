import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static int N, S, M; // 동아리 수, 능력합 가입조건, 개인 가입조건
	static int clubNum; // 통과한 동아리 수
	static String s;
	static StringTokenizer st;
	static StringBuilder sb;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); //선언
		sb = new StringBuilder();
		s = br.readLine(); //String
		st = new StringTokenizer(s); //StringTokenizer인자값에 입력 문자열 넣음
		N = Integer.parseInt(st.nextToken()); //첫번째 호출
		S = Integer.parseInt(st.nextToken()); //두번째 호출
		M = Integer.parseInt(st.nextToken());
		
		for (int i = 0; i < N; ++i) {
			s = br.readLine(); //String
			st = new StringTokenizer(s); //StringTokenizer인자값에 입력 문자열 넣음
			int tmp1 = Integer.parseInt(st.nextToken()); //첫번째 호출
			int tmp2 = Integer.parseInt(st.nextToken()); //두번째 호출
			int tmp3 = Integer.parseInt(st.nextToken()); //세번째 호출
			
			// 조건 검사 (조건에 해당하면 동아리 수 1 증가시키고 학생들 배열에 add)
			if (tmp1 >= M && tmp2 >= M && tmp3 >= M && tmp1+tmp2+tmp3 >= S) {
				clubNum++;
				sb.append(tmp1 + " ");
				sb.append(tmp2 + " ");
				sb.append(tmp3 + " ");
			}
		}
		
		System.out.println(clubNum);
		System.out.println(sb);
	}

}
