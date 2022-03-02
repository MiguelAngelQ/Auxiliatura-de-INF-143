#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int mask = 0; mask < (1 << n); mask++){//1<<n = 2^n
        //vector dinamico para guardar el subconjunto
        vector<int> sub;//vector<tipoDato> nombre;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){//((mask & (1 << i)) > 0) java
                sub.push_back(v[i]);//push_back(elemento) agrega al final del vector
            }
        }
        cout << "{";
        for(int i = 0; i < sub.size(); i++){//.size() devuelve el tamaño del vector din.
            if(i == sub.size() - 1)
                cout << sub[i];
            else
                cout << sub[i] << " ";
        }
        cout << "}\n";
    }
    return 0;
}