#include <bits/stdc++.h>
using namespace std;

int main(){  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    while(cin >> n){                            //1
        cout << "Divisores de " << n << ":";    //1
        for(int i = 1; i <= n; i++)             //n + 1
            if(n % i == 0)                      //n * 1
                cout << " " << i;               //n * 1
        cout << "\n";                           //1
        
    }
    //T(n) = 1 + 1 + n + 1 + n + n + 1
    //T(n) = 3n + 4
    //T(n) E O(n)
    return 0;
}