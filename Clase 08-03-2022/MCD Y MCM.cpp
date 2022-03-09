#include <bits/stdc++.h>
using namespace std;
//maximo comun divisor
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
//minimo comun multiplo
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int main(){  
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n";
    return 0;
}