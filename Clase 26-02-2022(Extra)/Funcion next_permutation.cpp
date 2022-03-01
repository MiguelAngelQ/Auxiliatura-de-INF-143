#include <bits/stdc++.h>
using namespace std;
const int N = 50;
int a[N], n;//vector original

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    //El vector tiene que estar ordenado
    sort(a, a + n);
    do{
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }while(next_permutation(a, a + n));
  return 0;
}