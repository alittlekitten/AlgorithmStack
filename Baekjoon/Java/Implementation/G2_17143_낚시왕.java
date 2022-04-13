import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;
 
public class Main {
    
    static class sinfo{ // 샤크정보
        int r, c, speed, dir, size;
 
        public sinfo(int r, int c, int speed, int dir, int size) {
            super();
            this.r = r; // r좌표
            this.c = c; // c좌표
            this.speed = speed; // 속력
            this.dir = dir; // 방향
            this.size = size; // 상어크기
        }
    }
    
    static int R, C, M; // 격자판 크기, 상어 수
    static int ans = 0; // 잡은 상어 크기의 합
    static int [][] map, copy; // map과 임시 저장용 map
    static int [] dx = {0,-1,1,0,0}; // 움직임 그대로 쓰려고.. 0번에는 더미데이터 넣기
    static int [] dy = {0,0,0,1,-1};
    
    static ArrayList<sinfo> shark = new ArrayList<>(); // 상어배열
    static Queue<Integer> remove = new LinkedList<>(); // 제거할 친구들
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        
        st = new StringTokenizer(br.readLine());
        R = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        
        map = new int[R+1][C+1];
        
        for(int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int r = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            int s = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            int z = Integer.parseInt(st.nextToken());
            
            shark.add(new sinfo(r, c, s, d, z));
            map[r][c] = z;
        }
        
        for(int i = 1; i <= C; i++) {
            sharkCatch(i);
            sharkMove();
            
        }
        System.out.println(ans);
    }
    
    public static void sharkCatch(int c) {
    	for(int r = 1; r < R + 1; r++) {
    		boolean chk = false;
            if(map[r][c] == 0) continue;
            for(int i = 0; i < shark.size(); i++) {
                if(shark.get(i).r == r && shark.get(i).c == c) {
                    ans += shark.get(i).size;
                    map[r][c] = 0;
                    shark.remove(i);
                    chk = true;
                    break;
                }
            }
            if (chk) break;
        }
    }
    
    public static void sharkMove() {
        copy = new int[R+1][C+1];
        for (int i = 0; i < shark.size(); i++) {
            sinfo temp = shark.get(i);
            map[temp.r][temp.c] = 0;
            for (int j = 0; j < temp.speed ; j++) {
            	// 1 상, 2 하, 3 우, 4 좌 및 방향전환
                if (temp.dir == 1 && temp.r == 1) temp.dir = 2;
                else if (temp.dir == 2 && temp.r == R) temp.dir = 1;
                else if (temp.dir == 3 && temp.c == C) temp.dir = 4;
                else if (temp.dir == 4 && temp.c == 1) temp.dir = 3;
                // 이동
                temp.r += dx[temp.dir];
                temp.c += dy[temp.dir];
            }
            
            if(copy[temp.r][temp.c] == 0) {
                copy[temp.r][temp.c] = temp.size;
            } else if(copy[temp.r][temp.c] < temp.size) { //움직인 상어가 기존에 있던 상어보다 큰 경우
                remove.add(copy[temp.r][temp.c]);
                copy[temp.r][temp.c] = temp.size;
            } else { // 기존 상어가 움직인 상어보다 큰 경우
                remove.add(temp.size);
            }
        }
        
        // 이제 remove에 들어간 친구를 일괄적으로 처리
        while(!remove.isEmpty()) {
            int temp = remove.poll();
            for(int i = 0; i < shark.size(); i++) {
                if(temp == shark.get(i).size) {
                    shark.remove(i);
                    break;
                }
            }
        }
        map = copy;
    }
}
