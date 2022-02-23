#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> st;//set, almacena elementos unicos, sin repetir
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);//insertamos
    }
    cout << st.size() << "\n";//tamaño del set
    //iterar
    for(set<int>::iterator it = st.begin(); it != st.end(); it++){
        int valor = *it;
        cout << valor << ", ";
    }
    cout << "\n";
    st.erase(4);//eliminamos 4
     for(set<int>::iterator it = st.begin(); it != st.end(); it++){
        int valor = *it;
        cout << valor << ", ";
    }
    cout << "\n";
    return 0;
}