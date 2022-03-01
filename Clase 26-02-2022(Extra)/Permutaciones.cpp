#include <bits/stdc++.h>
using namespace std;
const int N = 50;
int a[N], n;//vector original
int perm[N];//aca guardaremos las permutaciones
bool visit[N];//marcar si tome  no el elemento

void permutation(int i){
    if(i == n){
        for(int j = 0; j < n; j++)
            cout << perm[j] << " ";
        cout << "\n";
    }else{
        for(int j = 0; j < n; j++){
            if(visit[j] == false){//no lo tome
                visit[j] = true;
                perm[i] = a[j];
                permutation(i + 1);
                visit[j] = false;
            }
        }
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    permutation(0);
  return 0;
}