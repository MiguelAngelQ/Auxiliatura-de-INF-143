#include <bits/stdc++.h>
using namespace std;
const int N = 100000 + 10;
int sieve[N];
//factorizar
void make_sieve() {
    for(int i = 0; i < N; i++)
        sieve[i] = i;//suponemos que el divisor mas pequwño de i es i
    sieve[0] = sieve[1] = 0;//no tienen factores primos 
    for(int i = 2; i * i <= N; i++) 
        if(sieve[i] == i)
            for(int j = i + i; j < N; j += i)
                sieve[j] = min(sieve[j], i);
}

int main(){  
    //sacarme los factores primos de n
    make_sieve();
    int n;
    cin >> n;
    while(sieve[n] > 0){
        cout << sieve[n] << "\n";
        n = n / sieve[n];//n /= sieve[n];
    }
    return 0;
}