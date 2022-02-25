import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char[] arr = new char[1001];
		int result = 0;
		char[] ans = sc.next().toCharArray();
		Arrays.fill(arr, 'N');

		for (int i = 0; i < ans.length; ++i) {
			if (arr[i] != ans[i]) {
				for (int j = i; j <= ans.length; j = j + (i+1)) {
					if (arr[j] == 'N') arr[j] = 'Y';
					else arr[j] = 'N';
				}
				result++;
			}
		}
		System.out.println(result);
	}
}
