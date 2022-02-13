import java.util.*;
 
public class Main{
    public static int dx[] = {1, -1, 0, 1};
    public static int dy[] = {0, 1, 1, -1};
    public static int n;//tam de la matriz
    public static int m[][] = new int[110][110];
    public static boolean ok(int x, int y) {
        if(x >= 0 && x < n && y >= 0 && y < n)
            return true;
        return false;
    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        int x = 0, y = 0;
        int valor = 1;
        int pos = 3;//direcciones 0 1 2 3 0 1 2 3 0 1....
        for(int i = 0; i < n * n; i++) {
            m[x][y] = valor++;
            if(pos == 0 || pos == 2)
                pos = (pos + 1) % 4;
            int sigX = x + dx[pos];
            int sigY = y + dy[pos];
            if(i == n * n - 1) break;
            while((ok(sigX, sigY) == false || m[sigX][sigY] != 0)) {
                pos = (pos + 1) % 4;
                sigX = x + dx[pos];
                sigY = y + dy[pos];
            }
            x = sigX;
            y = sigY;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(j == n - 1)
                    System.out.println(m[i][j]);
                else
                    System.out.print(m[i][j] + " ");
            }
        }
    }
}