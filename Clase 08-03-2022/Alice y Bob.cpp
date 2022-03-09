#include <bits/stdc++.h>
using namespace std;
int n, m, k;
char a[10][10];
 
int f(int x, int y){
    if(x >= n or y >= m) return 1e9;//10^9
    if(a[x][y] == 'C') return 0;
    int ans = 1e9;
    if(a[x + 1][y] != '#')
        ans = min(ans, f(x + 1, y) + 1);
    if(a[x][y + 1] != '#')
        ans = min(ans, f(x, y + 1) + 1);
    return ans;
}
 
int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    while(cin >> n >> m >> k){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> a[i][j];
        if(k >= f(0, 0))
            cout << "Intentalo Bob\n";
        else
            cout << "Descansa Bob\n";
    }
    return 0;
}