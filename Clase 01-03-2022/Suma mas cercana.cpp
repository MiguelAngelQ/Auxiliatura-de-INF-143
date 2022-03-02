#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases = 1;
    while(true){
        int n;
        cin >> n;
        if(n == 0)
            break;
        cout << "Case " << cases << ":\n";
        cases += 1;
        int v[n];
        for(int i = 0; i < n; i++)
            cin >> v[i];
        int q;
        cin >> q;  
        while(q--){
            int m;
            cin >> m;//quiero saber el mas cercano a m
            int distance = 1e9;//10^9
            int number = 0;//peor de los casos
            for(int i = 0; i < n - 1; i++){
                for(int j = i + 1; j < n; j++){
                    int pair = v[i] + v[j];
                    int cur = abs(pair - m);
                    if(cur < distance){
                        distance = cur;
                        number = pair;
                    }
                }
            }
            cout << "Closest sum to " << m << " is " << number << "\n";
        }
    }
    return 0;
}