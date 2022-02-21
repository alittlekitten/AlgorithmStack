import java.util.Arrays;
import java.util.Scanner;

public class Main {
	
	// 정렬하면 사전식으로 변함
	// nPr 형태가 nCr 형태로 변해서 1차적인 prunning작업이 됨!

	static int L, C;
	static char[] alpa;
	static char[] result;
	static char[] moeum= {'a','e','i','o','u'};
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		L = sc.nextInt();
		C = sc.nextInt();
		alpa = new char[C];
		result = new char[L];
		for (int i = 0; i < C; ++i) {
			alpa[i] = sc.next().charAt(0);
		}
		Arrays.sort(alpa); // 오름차순 정렬
		alpabet(0,0); // 조합 시작
	}
	
	// 조합
	private static void alpabet(int cnt, int start) {
		if (cnt == L) {
			if(zeromoum()) return; // 모음이 없거나 자음이 2개 이하인 경우
			System.out.println(new String(result));
			return ;
		}
		for (int i = start; i < C; ++i) {
			result[cnt] = alpa[i];
			alpabet(cnt+1, i+1);
		}
		
	}
	
	// 모음 개수가 0개이거나 자음 개수가 2개 이하인 경우를 걸러내기 위한 함수
	private static boolean zeromoum() {
		int count = 0; // 모음 개수
		for (int i = 0; i < L; ++i) {
			for (int j = 0; j < 5; ++j) {
				if (result[i] == moeum[j]) { // 모음이 포함되어 있으면 count를 1 올리고 break
					count++;
					break; // 어짜피 모음은 1개 이상만 있으면 되니까!
				}
			}
		}
		
		int nums = L-count; // 전체에서 모음 개수 뺌
		
		return (count == 0) || (nums < 2);
	}

}
