import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class Main {

	static int s;
	static int e;
	static String arr[];
	static int ans[];
	static String alpa[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	static HashMap<String, Integer> hm;
	
	public static void main(String[] args) {
		// 변환해서 한번 해보자 (n이 작으니까!)
		Scanner sc = new Scanner(System.in);
		s = sc.nextInt();
		e = sc.nextInt();
		arr = new String[e-s+1];
		ans = new int[e-s+1];
		hm = new HashMap<>();
		int cnt = 0;
		for (int i = s; i <= e; ++i) {
			char tmp[] = Integer.toString(i).toCharArray();
			String tmp2 = "";
			for (int j = 0; j < tmp.length; ++j) {
				tmp2 += alpa[tmp[j] - '0'];
				if(j != tmp.length - 1) tmp2 += " ";
			}
			arr[cnt++] = tmp2;
		}
		Arrays.sort(arr);
		
		// map에 요소 넣기
		for (int i = 0; i < 10; ++i) {
			hm.put(alpa[i], i);
		}
		
		// 공백을 기준으로 나눠서 숫자 뽑아내기
		for (int i = 0; i < arr.length; ++i) {
			String tmp[] = arr[i].split(" ");
			String tmp2 = "";
			int tmp3 = -1;
			for (int j = 0; j < tmp.length; ++j) {
				tmp2 += hm.get(tmp[j]);
			}
			tmp3 = Integer.parseInt(tmp2);
			ans[i] = tmp3;
		}
		
		// 출력 담당
		StringBuilder sb = new StringBuilder();
		int cnt2 = 0;
		for (int i = 0; i < ans.length; ++i) {
			sb.append(ans[i]);
			++cnt2;
			if (cnt2 % 10 == 0) {
				sb.append('\n');
			}
			else {
				sb.append(' ');
			}
		}
		
		System.out.println(sb);
		sc.close();
	}

}
