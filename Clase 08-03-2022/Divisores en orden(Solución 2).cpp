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
        for(int i = 1; i * i <= n; i++)         //sqrt(n) + 1
            if(n % i == 0)                      //sqrt(n) * 1
                cout << " " << i;               //sqrt(n) * 1
        for(int i = sqrt(n); i >= 1; i--){      //sqrt(n) + 1
            if(n % i == 0){                     //sqrt(n) * 1
                if(n / i != i)                  //sqrt(n) * 1
                    cout << " " << n / i;       //sqrt(n) * 1
            }
        }  
        cout << "\n";                           //1
    }
    /*
    T(n) = 1 + 1 + sqrt(n) + 1 + sqrt(n) + sqrt(n) + sqrt(n) + 1 + sqrt(n) + sqrt(n) + sqrt(n) + 1
    T(n) = 7 * sqrt(n) + 5
    T(n) E O(sqrt(n)) 
    */
    return 0;
}