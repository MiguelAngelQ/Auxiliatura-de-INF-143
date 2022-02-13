#include <bits/stdc++.h>
using namespace std;
 
int sumaDeDivisores(int n) {
    int suma = 0;
    for(int i = 1; i < n; i++)
        if(n % i == 0)
            suma += i; //suma = suma + i;
    return suma;
}
 
int main(){  
    int x;
    while(cin >> x){
        int res = sumaDeDivisores(x);
        if(res == x)
            cout << "Perfecto" << endl;
        else if(res < x)
            cout << "Deficiente" << "\n";
        else
            cout << "Abundante\n";
    }
    return 0;
}