#include <bits/stdc++.h>
using namespace std;
const int N = 1000000 + 10;
bool sieve[N];

void make_sieve() {
    for(int i = 0; i < N; i++)
        sieve[i] = true;
    sieve[0] = sieve[1] = false; 
    for(int i = 2; i * i <= N; i++) 
        if(sieve[i] == true)
            for(int j = i + i; j < N; j += i)
                sieve[j] = false;
}

int main(){  
    //codigo
    return 0;
}