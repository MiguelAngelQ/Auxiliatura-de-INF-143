#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e7 + 10;
bool sieve[N];
vector<long long> primes;
vector<long long> prefix;
 
void make_sieve(){
    for(int i = 0; i < N; i++)
        sieve[i] = true;
    sieve[0] = sieve[1] = false;
    for(int i = 2; i * i <= N; i++)
        if(sieve[i] == true)
            for(int j = i + i; j < N; j += i)
                sieve[j] = false;
    for(int i = 2; i < N; i++)
        if(sieve[i] == true)
            primes.push_back(i);  
    prefix.push_back(primes[0]);
    for(int i = 1; i < primes.size(); i++)
        prefix.push_back(prefix[i - 1] + primes[i]);
}
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    make_sieve();
    int cases;
    cin >> cases;
    while(cases--){
        long long x;
        cin >> x;
        if(x == 1){
            cout << 0 << "\n";
        }else{
            int low = 0, high = prefix.size();
            while(high - low > 1){
                int mid = (low + high) >> 1;
                if(prefix[mid] <= x)
                    low = mid;
                else
                    high = mid;
            }
            cout << low << "\n";
        }
    }
 
    return 0;
}