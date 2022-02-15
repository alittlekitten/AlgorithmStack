import java.util.Scanner;

public class Main {
	
	static int N, r, c, cnt;

	public static void main(String[] args) {
		Scanner scann = new Scanner(System.in);
		N = scann.nextInt();
		r = scann.nextInt();
		c = scann.nextInt();
		cnt = 0;
		
		z(0,0,1<<N); // 시작 x위치, 시작y위치, 한변의 길이
		
	}

	private static void z(int rr, int cc, int w) {
		if(rr==r && cc==c) { // 끝나는 위치
			System.out.println(cnt);
			return;
		}
		// 범위 내
		if(r >= rr && r < rr+w && c >= cc && c < cc+w) {
			int hw = w/2;
			z(rr,cc,hw); // 11시
			z(rr,cc+hw,hw); // 1시
			z(rr+hw,cc,hw); // 7시
			z(rr+hw,cc+hw,hw); // 5시
		}else {
			cnt += w * w;
		}	
	}
}
