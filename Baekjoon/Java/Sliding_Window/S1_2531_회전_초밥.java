import java.util.Scanner;

public class Main {
    // 15961과 범위만 다른 동일문제
	static int n, d, k, c;
	static int arr[];
	static int num[]; // 해당 요소가 몇개 있는지 확인하는 배열
	static int cnt = 0;
	static int max = 0;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt(); // 회전초밥 접시의 수
		d = sc.nextInt(); // 초밥의 가짓수
		k = sc.nextInt(); // 연속해서 먹는 접시 수
		c = sc.nextInt(); // 쿠폰번호
		
		arr = new int[n+1];
		num = new int[d+1];

		for (int i = 0; i < n; ++i) {
			arr[i] = sc.nextInt();
		}
		
		// 쿠폰 추가
		num[c]++;
		cnt++;
		
		// 맨 앞 요소 추가
		for (int i = 0; i < k; ++i) {
			if (num[arr[i]] == 0) cnt++;
			num[arr[i]]++;
		}
		
		max = cnt;
		
		
		for (int i = 1; i < n; ++i) {
			if (num[arr[i-1]] == 1) cnt--;
			num[arr[i-1]]--;
			if (num[arr[(k-1+i)%n]] == 0) cnt++;
			num[arr[(k-1+i)%n]]++;
			
			if (max < cnt) max = cnt;
		}
		System.out.println(max);
		
	}

}
