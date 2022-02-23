#include <bits/stdc++.h>
using namespace std;

const int N = 10000000 + 10;
bool sieve[N];//1 primos
int prefix[N];

void make_sieve() {
    for(int i = 0; i < N; i++)
        sieve[i] = true;
    sieve[0] = sieve[1] = false; 
    for(int i = 2; i * i <= N; i++) 
        if(sieve[i] == true)
            for(int j = i + i; j < N; j += i)
                sieve[j] = false;
    int primos = 0;
    for(int i = 0; i < N; i++){
        if(sieve[i] == true)
            primos++;
        prefix[i] = primos;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    make_sieve();
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a == 0)
            cout << prefix[b] << "\n";
        else
            cout << prefix[b] - prefix[a - 1] << "\n";
    }
    return 0;
}