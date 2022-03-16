#include <bits/stdc++.h>
using namespace std;

void counting_sort(int v[], int n, int mn, int mx){
    int k = mx - mn + 1;//nro de elementos del vector de ocurrencias
    int occ[k];
    for(int i = 0; i < k; i++)
        occ[i] = 0;
    for(int i = 0; i < n; i++)
        occ[v[i] - mn] += 1;
    int pos = 0;
    for(int i = mn; i <= mx; i++){
        while(occ[i - mn] > 0){
            v[pos] = i;
            pos += 1;
            occ[i - mn] -= 1;
        }
    }
}

int main(){  
    int n; 
    cin >> n;
    int v[n];
    int mx = -1e9, mn = 1e9;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }
    counting_sort(v, n, mn, mx);
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}