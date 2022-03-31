import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int n;
		int input1, input2, input3;
		int tmpA, tmpB, tmpC;
		int a, b, c;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		// 초기 입력값 받기
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		for (int i = 1; i < n; ++i) {
			input1 = sc.nextInt();
			input2 = sc.nextInt();
			input3 = sc.nextInt();
			
			// 비용계산
			tmpA = input1 + Math.min(b, c);
			tmpB = input2 + Math.min(a, c);
			tmpC = input3 + Math.min(a, b);
			
			// 값 새로고침
			a = tmpA;
			b = tmpB;
			c = tmpC;
		}
		System.out.println(Math.min(a,  Math.min(b, c)));
	}
}
