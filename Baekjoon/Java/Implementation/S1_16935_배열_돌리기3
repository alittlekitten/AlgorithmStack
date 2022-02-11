import java.util.Scanner;

public class Main {

	static int [][] arr;
	static int n, m, r;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();
		r = sc.nextInt();
		arr = new int [n][m];
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				arr[i][j] = sc.nextInt();
			}
		}
		
		for (int i = 0; i < r; ++i) {
			int tmp = sc.nextInt();
			
			switch(tmp) {
			case 1:
				op1();
				break;
			case 2:
				op2();
				break;
			case 3:
				op3();
				break;
			case 4:
				op4();
				break;
			case 5:
				op5();
				break;
			case 6:
				op6();
				break;
			default:
				break;
			}
		}
		
		for (int i = 0; i < arr.length; ++i) {
			for (int j = 0; j < arr[i].length; ++j) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
	}
	private static void op1() {
		for (int i = 0; i < n / 2; ++i) {
			int[] temp = arr[i];
			arr[i] = arr[n-i-1];
			arr[n-i-1] = temp;
		}
	}
	
	private static void op2() {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m / 2; ++j) {
				int tmp = arr[i][j];
				arr[i][j] = arr[i][m-j-1];
				arr[i][m-j-1] = tmp;
			}
		}
	}
	
	private static void op3() {
		int [][] rotatetmp = new int [m][n];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				rotatetmp[j][n-1-i] = arr[i][j];
			}
		}
		arr = rotatetmp;
		int tmp = n;
		n = m;
		m = tmp;
	}
	
	private static void op4() {
		int [][] rotatetmp = new int [m][n];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				rotatetmp[m-1-j][i] = arr[i][j];
			}
		}
		arr = rotatetmp;
		int tmp = n;
		n = m;
		m = tmp;
	}
	
	private static void op5() {
		int [][] rotatetmp2 = new int [n][m];
		for (int i = 0; i < n/2; ++i) {
			for (int j = 0; j < m/2; ++j) {
				rotatetmp2[i][m/2+j] = arr[i][j];
			}
		}
		for (int i = 0; i < n/2; ++i) {
			for (int j = m/2; j < m; ++j) {
				rotatetmp2[n/2+i][j] = arr[i][j];
			}
		}
		for (int i = n/2; i < n; ++i) {
			for (int j = m/2; j < m; ++j) {
				rotatetmp2[i][j-m/2] = arr[i][j];
			}
		}
		for (int i = n/2; i < n; ++i) {
			for (int j = 0; j < m/2; ++j) {
				rotatetmp2[i-n/2][j] = arr[i][j];
			}
		}
		arr = rotatetmp2;
	}
	
	private static void op6() {
		int [][] rotatetmp2 = new int [n][m];
				for (int i = 0; i < n/2; ++i) {
					for (int j = 0; j < m/2; ++j) {
						rotatetmp2[n/2+i][j] = arr[i][j];
					}
				}
				for (int i = n/2; i < n; ++i) {
					for (int j = 0; j < m/2; ++j) {
						rotatetmp2[i][m/2+j] = arr[i][j];
					}
				}
				for (int i = n/2; i < n; ++i) {
					for (int j = m/2; j < m; ++j) {
						rotatetmp2[i-n/2][j] = arr[i][j];
					}
				}
				for (int i = 0; i < n/2; ++i) {
					for (int j = m/2; j < m; ++j) {
						rotatetmp2[i][j-m/2] = arr[i][j];
					}
				}
				arr = rotatetmp2;
	}
}
