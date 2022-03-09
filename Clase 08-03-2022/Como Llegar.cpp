#include <bits/stdc++.h>
using namespace std;
int f, c;
int g(int x, int y){
    if(x == f && y == c)
        return 1;//llegue a f, c
    if(x > f || y > c)
        return 0;//me sali de los limites
    return g(x + 1, y) + g(x, y + 1);
}
 
int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    while(true){
        cin >> f >> c;
        if(f == 0 && c == 0)
            break;
        f += 1;
        c += 1;
        cout << g(1, 1) << "\n";
    }
    return 0;
}