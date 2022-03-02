#include <bits/stdc++.h>
using namespace std;

int main(){
    //ordenar el vector ascendentemente
    //Algoritmo burbuja
        //mejor de los casos: que este ordenado ascendentemente
        //peor de los casos: que este ordenado descendentemente
        //caso promedio: que este desordenado
    int n;
    cin >> n;                                   //1
    int v[n];                                   //1
    for(int i = 0; i < n; i++)                  //n + 1         
        cin >> v[i];      
                              //n
    for(int i = 0; i < n - 1; i++)              //n
        for(int j = i + 1; j < n; j++)          //(n - 1)(n - 1)
            if(v[j] < v[i]){                    //(n - 1)(n - 2)(1)
                int aux = v[i];                 //(n - 1)(n - 2)(1)
                v[i] = v[j];                    //(n - 1)(n - 2)(1)
                v[j] = aux;                     //(n - 1)(n - 2)(1)
            }
    for(int i = 0; i < n; i++){                 //n + 1
        if(i == n - 1)                          //n(1)
            cout << v[i] << "\n";               //n(1)
        else
            cout << v[i] << " ";
    }
    /*
    1 + 1 + n + 1 + n + n^2 - n - n + 1 + 4(n^2 - 2n - n + 2) +  n + 1 + n + n
    1 + 1 + n + 1 + n + n^2 - n - n + 1 + 4n^2 - 8n - 4n + 8 + n + 1 + n + n
    T(n) = 5n^2 - 9n + 13
    T(n) E O(n^2)
    
    */
    return 0;
}