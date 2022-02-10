import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scann = new Scanner(System.in);
		int N = scann.nextInt();
		int K = scann.nextInt();
		
		ArrayList<Integer> orign = new ArrayList<>();
		ArrayList<Integer> yosep = new ArrayList<>();
		
		for (int i = 1; i < N+1; ++i) {
			orign.add(i);
		}
		int loc = 0;
		while(!orign.isEmpty()) {
			loc = (loc+K-1)%orign.size();
			yosep.add(orign.remove(loc));
		}
		System.out.print("<");
		for (int i = 0; i < yosep.size()-1; ++i) {
			System.out.print(yosep.get(i) + ", ");
		}
		System.out.println(yosep.get(yosep.size()-1) + ">");
	}

}
