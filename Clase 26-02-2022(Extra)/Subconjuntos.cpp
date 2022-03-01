#include <bits/stdc++.h>
using namespace std;
const int N = 50;
int a[N], n;//vector original
bool vis[N];//tomar o no

void subset(int i){
    if(i == n){//Aca mostraremos el subconjunto
        for(int j = 0; j < n; j++)
            if(vis[j] == true)
                cout << a[j] << " ";
        cout << "\n";
    }else{
        vis[i] = true;//tomar
        subset(i + 1);
        vis[i] = false;//no tomar
        subset(i + 1);
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    subset(0);
  return 0;
}