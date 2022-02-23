#include <bits/stdc++.h>
using namespace std;
 
set<long long> st;//aca guardare los numeros feos sin repetir
vector<long long> a;//aca pasare los datos del set al vector, para poder acceder por indices
 
void crearNumeroFeos(){
    st.insert(1);
    while(true){
        if(a.size() > 1600)//si sobrepase lo que necesito
            break;//para el loop(while)
        long long primero = *st.begin();//obtenemos el primer elemento del set
        a.push_back(primero);//le paso el dato del set al vector
        st.erase(primero);//lo borro porque ya no lo necesito
        st.insert(primero * 2);
        st.insert(primero * 3);
        st.insert(primero * 5);
    }
}
 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    crearNumeroFeos();
    int t;
    cin >> t;
    while(t--){
        int x; 
        cin >> x;
        cout << a[x - 1] << "\n";
    }
    return 0;
}