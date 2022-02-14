import java.util.Scanner;

public class Main {
	
	static int N, X, K; // 종이컵 수, 시작 위치, 바꾸는 횟수
	static int answer; // 정답 위치

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		N = sc.nextInt();
		X = sc.nextInt();
		K = sc.nextInt();

		// 정답 위치 미리 할당
		answer = X;

		// 반복하면서 정답이 있는 위치를 바꾸는 경우 answer를 바꿔줌
		for (int j = 0; j < K; ++j) {
		    int tmp1 = sc.nextInt();
		    int tmp2 = sc.nextInt();
		    if (tmp1 == answer) answer = tmp2;
		    else if (tmp2 == answer) answer = tmp1;
		}

		System.out.println(answer);
	}
}
