#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long acc[n];
    acc[0] = a[0];
    for (int i = 1; i < n; i++) {
        acc[i] = a[i];
        acc[i] += acc[i - 1];
    }
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == 0)
            cout << acc[r] << "\n";
        else
            cout << acc[r] - acc[l - 1] << "\n";
    }
    return 0;
}