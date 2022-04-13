import java.util.Scanner;

public class Main {
	static int t, k;
	static int gear[][];
	static int t1, t2, t3, t4;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
        gear = new int[t][8];
        for (int i = 0; i < t; ++i) {
        	String tmp = sc.next();
            for (int j = 0; j < 8; ++j) {
                gear[i][j] = tmp.charAt(j) - '0';
            }
        }
        k = sc.nextInt();
        for (int i = 0; i < k; ++i) {
            int tg = sc.nextInt();
            int dir = sc.nextInt();
            cal(tg-1, dir);
        }

        int total = 0;
        for (int i = 0; i < t; ++i) {
        	if (gear[i][0] == 1) total++;
        }

        System.out.println(total);
    }


	static void cal(int idx, int dir) {
	    left(idx - 1, -dir);
	    right(idx + 1, -dir);
	    rotate(idx, dir);
	}
	
	static void left(int idx, int dir) {
	    if (idx < 0)
	        return;
	
	    if (gear[idx][2] != gear[idx + 1][6]) {
	        left(idx - 1, -dir);
	        rotate(idx, dir);
	    }
	}
	
	static void right(int idx, int dir) {
	    if (idx == t)
	        return;
	
	    if (gear[idx][6] != gear[idx - 1][2]) {
	        right(idx + 1, -dir);
	        rotate(idx, dir);
	    }
	}
	
	// dir = 1 시계방향, dir = -1 반시계방향
	// 한칸씩 이동하기
	static void rotate(int idx, int dir) {
	    if (dir == 1) {
	        int temp = gear[idx][7];
	
	        for (int i = 7; i > 0; i--) {
	            gear[idx][i] = gear[idx][i - 1];
	        }
	
	        gear[idx][0] = temp;
	
	    } else {
	        int temp = gear[idx][0];
	
	        for (int i = 0; i < 7; i++) {
	            gear[idx][i] = gear[idx][i + 1];
	        }
	
	        gear[idx][7] = temp;
	    }
	}
}
