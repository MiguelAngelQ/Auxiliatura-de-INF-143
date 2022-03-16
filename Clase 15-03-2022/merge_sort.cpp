#include <bits/stdc++.h>
using namespace std;

void merge_sort(int v[], int low, int high){
    if(low == high) return;
    int mid = (low + high) >> 1;
    merge_sort(v, low, mid);
    merge_sort(v, mid + 1, high);
    queue<int> L, H;
    for(int i = low; i <= mid; i++) 
        L.push(v[i]);//push(elem): inserta elemento a la cola
    for(int i = mid + 1; i <= high; i++)
        H.push(v[i]);
    for(int i = low; i <= high; i++){
        if(L.size() == 0){//size(): tamanio de la cola
            v[i] = H.front();//front(), al frente de la cola
            H.pop();//pop(), elimina el tope
        }else if(H.size() == 0){
            v[i] = L.front();
            L.pop();
        }else{
            if(L.front() <= H.front()){
                v[i] = L.front();
                L.pop();
            }else{
                v[i] = H.front();
                H.pop();
            }
        }
    }
}

int main(){  
    int n; 
    cin >> n;
    int v[n];
    int mx = -1e9, mn = 1e9;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    merge_sort(v, 0, n - 1);
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}