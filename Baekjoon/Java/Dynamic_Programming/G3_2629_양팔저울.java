import java.util.Arrays;
import java.util.Scanner;

public class Main {

	static int chuNum, guseulNum;
	static int chuArr[], guseulArr[];
	static boolean ans[];
	static boolean copy[];
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		chuNum = sc.nextInt();
		chuArr = new int[chuNum];
		for (int i = 0; i < chuNum; ++i) {
			chuArr[i] = sc.nextInt();
		}
		
		guseulNum = sc.nextInt();
		guseulArr = new int[guseulNum];
		for (int i = 0; i < guseulNum; ++i) {
			guseulArr[i] = sc.nextInt();
		}
		
		// 받은 입력을 바탕으로 잴 수 있는 무게 확인하기
		// 현재 턴에 바뀐 요소들은 다음 턴부터 영향을 끼쳐야 한다는 것을 확인하기
		ans = new boolean[40001];
		copy = new boolean[40001];

		for (int i = 0; i < chuNum; ++i) {
			copy = Arrays.copyOf(ans, 40001);
			for (int j = 40000; j > 0; --j) {
				if (!ans[j]) continue;
				if (Math.abs(j - chuArr[i]) < 40001) copy[Math.abs(j - chuArr[i])] = true;
				if (j + chuArr[i] < 40001) copy[j + chuArr[i]] = true;
			}
			copy[chuArr[i]] = true;
			ans = Arrays.copyOf(copy, 40001);
		}
		
		// 출력부
		for (int i = 0; i < guseulNum; ++i) {
			if (ans[guseulArr[i]]) System.out.print('Y');
			else System.out.print('N');
			if (i != guseulNum - 1) System.out.print(' ');
		}
		
		sc.close();
	}
}
