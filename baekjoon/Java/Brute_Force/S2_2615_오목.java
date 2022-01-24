import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {
	
	static int [][] stone = new int[21][21];
	static int [] dr = {-1, -1, 0, 1, 1, 1, 0, -1};
	static int [] dc = {0, 1, 1, 1, 0, -1, -1, -1};

	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(System.in);
		
		// 돌 배열 넣기
		for (int r = 1; r <= 19; ++r) {
			for (int c = 1; c <= 19; ++c) {
				int tmp = in.nextInt();
				stone[r][c] = tmp;
			}
		}
		
		// 돌 배열 확인
		boolean fin = false;
		for (int c = 1; c <= 19; ++c) {
			for (int r = 1; r <= 19; ++r) {
				if (chk(r, c)) {
					System.out.println(stone[r][c]);
					System.out.println(r + " " + c);
					fin = true;
				}
				if(fin == true) break;
			}
			if(fin == true) break;
		}
		
		// 만약 끝까지 검색해도 완료되지 않았다면 0만 출력
		if (fin == false) System.out.println(0);
		
		in.close();
	}
	
	// 체크용 함수
	public static boolean chk(int r, int c) {
		if (stone[r][c] == 0) return false;
		for (int i = 0; i < 8; ++i) {
			int cnt = 0;
			for (int j = 1; j <= 4; ++j) {
				// 한방향으로 5번 연속으로 갔을때 같으면 1차통과
				if (r+dr[i]*4 < 0 || c+dc[i]*4 < 0 || r+dr[i]*4 > 20 || c+dc[i]*4 > 20) continue;
				if (stone[r+dr[i]*j][c+dc[i]*j] == stone[r][c]) cnt++;
			}
			// 5개가 놓인걸 확인했으면 앞뒤로 같은색 돌이 더있는지 확인해서 없으면 2차통과
			if (cnt == 4) {
				if ((((r-dr[i] < 0 || r-dr[i] > 20) || (c-dc[i] < 0 || c-dc[i] > 20)) || stone[r-dr[i]][c-dc[i]] != stone[r][c]) && (((r+dr[i]*5 < 0 || r+dr[i]*5 > 20) || (c+dc[i]*5 < 0 || c+dc[i]*5 > 20)) || stone[r+dr[i]*5][c+dc[i]*5] != stone[r][c])) return true;
			}
		}
		
		return false;
	}

}
