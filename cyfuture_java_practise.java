import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] a = new int[m + 1];
        int[] b = new int[m + 1];
        for (int i = 1; i <= m; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 1; i <= m; i++) {
            b[i] = sc.nextInt();
        }

        List<List<Pair>> graph = new ArrayList<>(n + 1);
        for (int i = 0; i <= n; i++) {
            graph.add(new ArrayList<>());
        }
        for (int i = 1; i <= m; i++) {
            graph.get(a[i]).add(new Pair(b[i], i));
            graph.get(b[i]).add(new Pair(a[i], i));
        }

        int[] ans = new int[n + 1];
        Arrays.fill(ans, -1);

        for (int i = 1; i <= n; i++) {
            Queue<Pair> q = new LinkedList<>();
            boolean[] visited = new boolean[n + 1];
            q.add(new Pair(1, 0));
            int count = 0;
            int mini = Integer.MAX_VALUE;

            while (!q.isEmpty()) {
                Pair p = q.poll();
                int node = p.first;

                if (node == n && count != 0) {
                    mini = Math.min(count, mini);
                    ans[i] = mini;
                }

                for (Pair x : graph.get(node)) {
                    if (!visited[x.first] && x.second != i) {
                        visited[x.first] = true;
                        q.add(new Pair(x.first, x.second));
                    }
                }
                count++;
            }
        }

        for (int i = 1; i <= n; i++) {
            System.out.print(ans[i] + " ");
        }
        System.out.println();
    }

    static class Pair {
        int first, second;
        Pair(int first, int second) {
            this.first = first;
            this.second = second;
        }
    }
}