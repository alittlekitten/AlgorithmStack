import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
	static int [] dr={-1,0,1, 0};
	static int [] dc={ 0,1,0,-1};
	
	static int N, M, K;
	static ArrayList<int[]> arr;
	static int result = Integer.MAX_VALUE;
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		int[][] map=new int[N][M];
		arr=new ArrayList<>();
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				map[i][j] = sc.nextInt();
				if(map[i][j] > 0 && map[i][j] < 6) { // 1~5면 arr에 CCTV 추가
					arr.add(new int[]{i,j, map[i][j]});
				}
			}
		}
		K = arr.size(); // 사이즈 입력
		
		result=Integer.MAX_VALUE;
		dfs(0, map);
		System.out.println(result == Integer.MAX_VALUE ? 0 : result);
	}

	private static void dfs(int idx, int[][] m) {
		// 모든 CCTV를 확인했으면 0의 개수를 세서 cnt에 등록
		if(idx==K){ 
			int cnt=0;
			for (int i = 0; i <N; i++) {
				for (int j = 0; j < M; j++) {
					if(m[i][j]==0){
						cnt++;
					}
				}
			}
			result = Math.min(result, cnt); // 최소값으로 등록
			return;
		}
		
		int[] cur=arr.get(idx);
		int cr=cur[0];
		int cc=cur[1];
		int cctvType=cur[2];
		int[][] tmpArr = new int[N][M];
		if(cctvType == 1){
			for (int d = 0; d < 4; d++) {
				for(int i = 0; i < N; i++) {
					tmpArr[i] = Arrays.copyOf(m[i],M);
				}
				gosharp(cr,cc,d,tmpArr);
				dfs(idx+1,tmpArr);
			}
		}else if(cctvType == 2){
			for (int d = 0; d < 2; d++) {
				for(int i = 0; i < N; i++) {
					tmpArr[i] = Arrays.copyOf(m[i],M);
				}
				gosharp(cr,cc,d,tmpArr);
				gosharp(cr,cc,(d+2)%4,tmpArr);
				dfs(idx+1,tmpArr);
			}
		}else if(cctvType == 3){
			for (int d = 0; d < 4; d++) {
				for(int i = 0; i < N; i++) {
					tmpArr[i] = Arrays.copyOf(m[i],M);
				}
				gosharp(cr,cc,d,tmpArr);
				gosharp(cr,cc,(d+1)%4,tmpArr);
				dfs(idx+1,tmpArr);
			}
		}else if(cctvType == 4){
			for (int d = 0; d < 4; d++) {
				for(int i = 0; i < N; i++) {
					tmpArr[i] = Arrays.copyOf(m[i],M);
				}
				gosharp(cr,cc,d,tmpArr);
				gosharp(cr,cc,(d+1)%4,tmpArr);
				gosharp(cr,cc,(d+2)%4,tmpArr);
				dfs(idx+1,tmpArr);
			}
		}else if(cctvType == 5){
			for (int d = 0; d < 1; d++) {
				for(int i = 0; i < N; i++) {
					tmpArr[i] = Arrays.copyOf(m[i],M);
				}
				gosharp(cr,cc,d,tmpArr);
				gosharp(cr,cc,(d+1)%4,tmpArr);
				gosharp(cr,cc,(d+2)%4,tmpArr);
				gosharp(cr,cc,(d+3)%4,tmpArr);
				dfs(idx+1,tmpArr);
			}
		}
		
	}

	// 감시가능한곳 샵으로 변경 (int형으로 만들어주기 위해 9로 설정)
	private static void gosharp(int r, int c, int d, int[][] arr){
		// 한 방향으로 체크
		while(true){
			int nr=r+dr[d];
			int nc=c+dc[d];
			if(!check(nr,nc)) break;
			if(arr[nr][nc] == 6) break;
			if(arr[nr][nc] == 0) arr[nr][nc] = 9; // 감시가능한곳 9로 변경
			r=nr;
			c=nc;
		}
	}
	
	// check : 체크용
	static boolean check(int r, int c){
		return r >= 0 && r < N && c >= 0 && c < M;
	}
}
