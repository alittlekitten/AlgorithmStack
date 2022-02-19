import java.util.Scanner;

public class Main {
    public static void main(String[] args) {   
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int t = 0; t < N; ++t){
            // 1. 글자바꾸기
            String name = sc.next();
            int cnt = 0;
            int cursor = name.length() - 1;
            for (int i = 0; i < name.length(); ++i) cnt += name.charAt(i) > 78 ? 91-name.charAt(i) : name.charAt(i) - 65;
        
            // 2. 좌우이동 (완탐)
            for(int i = 0; i <name.length(); i++) {
                int next = i + 1; // 다음 좌표
                while(next != name.length() && name.charAt(next) == 'A') next++;
            
                int As = next - i - 1; // 연속된 A
                int move = name.length() - As - 1; // 전체에서 A를 제외하고 움직이는 횟수
                int min = Math.min(i, name.length() - next); // i까지 무지성 전진 vs next 바로 앞까지 무지성 후진 중 짧은거
                cursor = Math.min(cursor, move + min); // 처음부터 오른쪽만 vs 위에서 짧은거 + 다시 돌아오는거 비교해서 짧은거
            }
            // 각 자리수를 만들기위해서 필요한 조작 횟수 + 좌우를 최소한으로 조작하는 수
            cnt += cursor;
        
            System.out.println(cnt);
        }
        
    }
}
