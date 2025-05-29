#include <bits/stdc++.h>
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define int long long
#define INF 1e9
using namespace std;

signed main(){
    int mat[3][3], maxn = -INF;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> mat[i][j];
            maxn = max(maxn, mat[i][j]);
        }
    }
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            int values = mat[i][j];
            if(values == maxn) cout << -1 << " ";
            else cout << values << " ";
        }
        cout << endl;
    }
}

//link to the question: https://neps.academy/br/exercise/202