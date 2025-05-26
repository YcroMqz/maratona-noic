#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'

string binary(ll number){
    string binario = "";
    while(number >= 1){
        binario += to_string(number%2);
        number /= 2;
    }
    return binario;
}

signed main(){
    ll X, i, sized;

    string binario;
    bool check = false;

    cin >> X;
    if(X == 1) cout << 1 << endl;

    for(i = X; !check; --i){
        if(X == 1) cout << 1 << endl;
        binario = binary(i);
        sized = binario.size() - 1;
        
        check = true;
        for(ll j = 0; j <= binario.size() /2; j++){
            if(binario[j] != binario[sized - j]){
                check = false;
                break;
            }
        }
    }
    cout << i + 1 << endl;
}