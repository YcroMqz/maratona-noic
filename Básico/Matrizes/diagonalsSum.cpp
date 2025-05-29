#include <bits/stdc++.h>
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define int long long
using namespace std;

signed main(){
    int mat[3][3], sum1=0, sum2=0;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> mat[i][j];
            if(i == j) sum1 += mat[i][j];
        }
    }
    int line = 0;
    for(int i = 2; i >= 0; --i){
        sum2 += mat[line++][i];
    }
    cout << "Diagonal principal: " << sum1 << endl;
    cout << "Diagonal secundaria: " << sum2 << endl;
}

//link of the question: https://neps.academy/br/exercise/201