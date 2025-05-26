#include <bits/stdc++.h>
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'
using namespace std;

signed main(){
    int matriz[3][3], sum;
    for(int i = 0; i < 3; ++i){
        sum = 0;
        for(int j = 0; j < 3; ++j){
            cin >> matriz[i][j];
        }
    }
    for(int j = 0; j < 3; ++j){
        sum = 0;
        for(int i = 0; i < 3; ++i){
            sum += matriz[i][j];
        }
        cout << "Coluna " << j << ": " << sum << endl;
    }
}