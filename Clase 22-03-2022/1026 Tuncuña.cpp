#include <bits/stdc++.h>
using namespace std;
 
long long f(long long i){
    return (i * (i + 1)) >> 1;// (i * (i + 1)) / 2
}
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int cases;
    cin >> cases;
    while(cases--){
        long long n;
        cin >> n;
        long long low = 0, high = 2e9;//2000000000
        while(high - low > 1){
            long long mid = (low + high) >> 1;
            if(f(mid) <= n)
                low = mid;
            else
                high = mid;
        }
        if(f(low) == n)
            cout << "Go On Bob " << low << "\n";
        else
            cout << "Better Luck Next Time\n";
    }
 
    return 0;
}