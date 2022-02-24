import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	
	static class Node implements Comparable<Node>{
	    int v, w;

	    public Node(int v, int w){
	        this.v = v;
	        this.w = w;
	    }

	    // pq를 w가 작은 순서대로 정렬
	    @Override
	    public int compareTo(Node o) {
	        return w - o.w;
	    }
	}
	
	static int V;
	static int E;
	static int S;
	static List<Node>[] arr;
	static int[] dist;
	static StringTokenizer st;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		st = new StringTokenizer(br.readLine());
		V = Integer.parseInt(st.nextToken());
		E = Integer.parseInt(st.nextToken());
		S = Integer.parseInt(br.readLine());
		arr = new ArrayList[V+1];
		dist = new int[V+1];
		Arrays.fill(dist, Integer.MAX_VALUE);
		
		// arr 채우기
		for (int i = 1; i <= V; ++i) {
			arr[i] = new ArrayList<>();
		}
		
		for (int i = 0; i < E; ++i) {
			st = new StringTokenizer(br.readLine());
			int u = Integer.parseInt(st.nextToken());
			int v = Integer.parseInt(st.nextToken());
			int w = Integer.parseInt(st.nextToken());
			arr[u].add(new Node(v, w));
		}
		
		dijkstra(S);
		
		for (int i = 1; i <= V; ++i) {
			if (dist[i] == Integer.MAX_VALUE) System.out.println("INF");
			else System.out.println(dist[i]);
		}
	}

	private static void dijkstra(int s) {
		PriorityQueue<Node> pq = new PriorityQueue<>();
		dist[s] = 0;
		pq.add(new Node(s, 0));
		
		while(!pq.isEmpty()) {
			Node tmp = pq.poll();
			
			// 빼낸거 가중치가 기존 거리보다 더 크면 패스
			if (tmp.w > dist[tmp.v]) continue;
			// tmp.v를 start로 하는 간선 탐색
			for (Node n : arr[tmp.v]) {
				// 현재 목적지부터 n.v까지의 거리보다 tmp.v를 경유해서 n.v까지 가는 거리가 더 짧으면 갱신
				if (dist[n.v] > dist[tmp.v] + n.w) { 
					dist[n.v] = dist[tmp.v] + n.w;
					pq.add(new Node(n.v, dist[n.v]));
				}
			}
		}
	}
}
